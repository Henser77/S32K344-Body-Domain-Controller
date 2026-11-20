/**
 * S32K344_Gateway - 车身域控制器 + 三路 CAN 网关
 *
 * 通道划分：
 *   CAN0 (500k) 诊断/OTA   : UDS 0x7E0/0x7E8, NM 0x500, 应用 0x120/0x123
 *   CAN1 (500k) 动力子网   : 0x200/0x210 输入, 0x123/0x201 输出
 *   CAN2 (125k) 车身子网   : 0x100/0x110 输入, 0x123/0x101 输出
 *
 * OS: FreeRTOS (SysTick 1 ms)
 *   Task_1ms  (prio 4): Fee / MemAcc / Mem_43_INFLS
 *   Task_5ms  (prio 3): CanTp / Dcm / CanSM x3
 *   Task_10ms (prio 2): Com / CanNm x3 / Nm x3 / ComM x3 / EcuM / BswM / NvM / Dem / wakeup
 */

#include "FreeRTOS.h"
#include "task.h"

#include "Std_Types.h"
#include "Mcu.h"
#include "Platform.h"
#include "Port.h"

#include "Can_43_FLEXCAN.h"
#include "CanIf.h"
#include "PduR.h"
#include "Com.h"
#include "CanTp.h"
#include "Dcm.h"
#include "ComM.h"
#include "ComM_BswM.h"
#include "CanSM.h"
#include "Nm.h"
#include "CanNm.h"
#include "Dem.h"
#include "EcuM.h"
#include "BswM.h"

#include "Mem_43_INFLS.h"
#include "MemAcc.h"
#include "MemAcc_Pbcfg.h"
#include "Fee.h"
#include "Fee_Lcfg.h"
#include "NvM.h"
#include "NvM_Cfg.h"

#include "App_BodyControl.h"

/* 小满部分模块未在公共头里声明 MainFunction */
extern void CanTp_MainFunction(void);
extern void Dcm_MainFunction(void);
extern void NvM_MainFunction(void);
extern void Fee_MainFunction(void);
extern void MemAcc_MainFunction(void);
extern void Can_43_FLEXCAN_MainFunction_Wakeup(void);
extern void BswM_MainFunction(void);
extern Com_RxIPduRunTimeStateType* const Com_RxIPduRunTimeState[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX];
extern volatile uint8 g_EcuResetRequest;   /* 0x11 复位请求（Rte 桩提供） */

static TaskHandle_t Task_1ms_Handle  = NULL;
static TaskHandle_t Task_5ms_Handle  = NULL;
static TaskHandle_t Task_10ms_Handle = NULL;

/* ---------------- tasks ---------------- */
static void Task_1ms(void* pvParameters)
{
    TickType_t lastWake = xTaskGetTickCount();
    (void)pvParameters;

    for (;;)
    {
        Fee_MainFunction();
        MemAcc_MainFunction();
        Mem_43_INFLS_MainFunction();

        vTaskDelayUntil(&lastWake, pdMS_TO_TICKS(1));
    }
}

static void Task_5ms(void* pvParameters)
{
    TickType_t lastWake = xTaskGetTickCount();
    (void)pvParameters;

    for (;;)
    {
        CanTp_MainFunction();
        Dcm_MainFunction();

        CanSM_MainFunction(0U);
        CanSM_MainFunction(1U);
        CanSM_MainFunction(2U);

        vTaskDelayUntil(&lastWake, pdMS_TO_TICKS(5));
    }
}

static void Task_10ms(void* pvParameters)
{
    TickType_t lastWake = xTaskGetTickCount();
    (void)pvParameters;

    static boolean startupTwoDone = FALSE;
    if (FALSE == startupTwoDone)
    {
        startupTwoDone = TRUE;
        EcuM_StartupTwo();
        EcuM_SetState(ECUM_STATE_APP_RUN);

        /* 本阶段先由应用直接请求通信（后续可迁到 BswM 规则） */
        Com_IpduGroupStart(0u, TRUE);
        ComM_CommunicationAllowed(0u, TRUE);
        ComM_CommunicationAllowed(1u, TRUE);
        ComM_CommunicationAllowed(2u, TRUE);
        (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can0, COMM_FULL_COMMUNICATION);
        (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can1, COMM_FULL_COMMUNICATION);
        (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can2, COMM_FULL_COMMUNICATION);
    }

    for (;;)
    {
        Com_MainFunctionRx(0U);

        App_BodyControl_10ms();

        Com_MainFunctionTx(0U);

        CanNm_MainFunction(0U);
        CanNm_MainFunction(1U);
        CanNm_MainFunction(2U);

        ComM_MainFunction(0U);
        ComM_MainFunction(1U);
        ComM_MainFunction(2U);

        EcuM_MainFunction();
        BswM_MainFunction();

        /* 0x11 ECUReset：响应发出后执行复位 */
        if (0u != g_EcuResetRequest)
        {
            g_EcuResetRequest = 0u;
            (void)EcuM_SelectShutdownTarget(ECUM_SHUTDOWN_TARGET_RESET, 0u);
            EcuM_Shutdown();
        }

        NvM_MainFunction();
        Dem_MainFunction();

        /* CAN wakeup polling（10 ms） */
        Can_43_FLEXCAN_MainFunction_Wakeup();

        /* 调试：每秒上报 0x200 的 Com DM 状态（0x7FD） */
        {
            static uint16 dbgDiv = 0u;
            dbgDiv++;
            if (dbgDiv >= 100u)
            {
                uint8 d[8];
                const Com_RxIPduRunTimeStateType* st = &Com_RxIPduRunTimeState[0][1];
                Can_PduType pdu;
                volatile uint32 w;

                d[0] = st->RxIpduRTStFlag;
                d[1] = st->RxIpduDMFlag;
                d[2] = (uint8)(st->RxIpduBaseDMTimeout & 0xFFu);
                d[3] = (uint8)(st->RxIpduBaseDMTimeout >> 8);
                d[4] = (uint8)(st->RxIpduRTStFlag & 1u);
                d[5] = (uint8)((st->RxIpduRTStFlag >> 1) & 1u);
                d[6] = 0u;
                d[7] = 0u;

                pdu.id          = 0x7FDu;
                pdu.length      = 8u;
                pdu.sdu         = d;
                pdu.swPduHandle = 0u;
                {
                    Std_ReturnType wr = Can_43_FLEXCAN_Write(14u, &pdu);
                    if (E_OK != wr)
                    {
                        wr = Can_43_FLEXCAN_Write(15u, &pdu);
                    }
                }
                for (w = 0u; w < 40000u; w++)
                {
                }
            }
        }

        vTaskDelayUntil(&lastWake, pdMS_TO_TICKS(10));
    }
}

/* ---------------- FreeRTOS hooks ---------------- */
void vApplicationMallocFailedHook(void)
{
    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}

void vApplicationStackOverflowHook(TaskHandle_t xTask, char* pcTaskName)
{
    (void)xTask;
    (void)pcTaskName;
    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}

int main(void)
{
    App_BodyControl_Init();

    (void)xTaskCreate(Task_1ms,  "T1ms",  256U, NULL, 4U, &Task_1ms_Handle);
    (void)xTaskCreate(Task_5ms,  "T5ms",  320U, NULL, 3U, &Task_5ms_Handle);
    (void)xTaskCreate(Task_10ms, "T10ms", 512U, NULL, 2U, &Task_10ms_Handle);

    /* EcuM_Init -> StartOS -> vTaskStartScheduler（不返回） */
    EcuM_Init();

    for (;;)
    {
    }
}
