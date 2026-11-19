/**
 * App_BodyControl - 车身域控制器应用逻辑
 *
 * 功能：
 *   1. 扭矩保护：电机温度 / SOC 超限 -> 限制扭矩（CAN1 0x201）
 *   2. 状态汇总：车速 / 车门 / 灯光 -> CAN2 0x101
 *   3. AliveCounter 每帧递增，供接收方判断丢帧
 */

#include "App_BodyControl.h"
#include "Com.h"

/* 扭矩限制：0 ~ 1000 对应 0.0% ~ 100.0% */
#define TORQUE_LIMIT_FULL       (1000u)
#define TORQUE_LIMIT_HALF       (500u)
#define TORQUE_LIMIT_LOW_SOC    (300u)
#define TORQUE_LIMIT_ZERO       (0u)

#define TEMP_DERATE_START       (100u)  /* 超过 100℃ 降到 50% */
#define TEMP_CUTOFF             (120u)  /* 超过 120℃ 切到 0% */
#define SOC_DERATE_THRESHOLD    (10u)   /* SOC 低于 10% 限制 30% */

static uint16 s_lastTorqueLimit;
static uint8  s_aliveCounter;

void App_BodyControl_Init(void)
{
    s_lastTorqueLimit = 0xFFFFu;   /* 强制第一帧写入默认值 */
    s_aliveCounter    = 0u;
}

void App_BodyControl_10ms(void)
{
    uint16 vehicleSpeed = 0u;
    uint16 motorTemp    = 0u;
    uint8  soc          = 0u;
    uint8  doorStatus   = 0u;
    uint8  lightStatus  = 0u;

    uint16 torqueLimit  = TORQUE_LIMIT_FULL;

    Std_ReturnType rSpeed;
    Std_ReturnType rTemp;
    Std_ReturnType rSoc;
    Std_ReturnType rDoor;
    Std_ReturnType rLight;

    rSpeed = Com_ReceiveSignal(ComConf_ComSignal_Sig_VehicleSpeed, &vehicleSpeed);
    rTemp  = Com_ReceiveSignal(ComConf_ComSignal_Sig_MotorTemp,    &motorTemp);
    rSoc   = Com_ReceiveSignal(ComConf_ComSignal_Sig_SOC,          &soc);
    rDoor  = Com_ReceiveSignal(ComConf_ComSignal_Sig_DoorStatus,   &doorStatus);
    rLight = Com_ReceiveSignal(ComConf_ComSignal_Sig_LightStatus,  &lightStatus);

    /* ---- 扭矩保护策略（只对有效信号生效） ---- */
    if ((E_OK == rTemp) && (0xFFu != motorTemp))
    {
        if (motorTemp > TEMP_CUTOFF)
        {
            torqueLimit = TORQUE_LIMIT_ZERO;
        }
        else if (motorTemp > TEMP_DERATE_START)
        {
            torqueLimit = TORQUE_LIMIT_HALF;
        }
    }

    if ((E_OK == rSoc) && (0xFFu != soc) && (soc < SOC_DERATE_THRESHOLD)
        && (torqueLimit > TORQUE_LIMIT_LOW_SOC))
    {
        torqueLimit = TORQUE_LIMIT_LOW_SOC;
    }

    /* 只在变化时写，TRIGGERED 会立即发一帧 */
    if (torqueLimit != s_lastTorqueLimit)
    {
        s_lastTorqueLimit = torqueLimit;
        (void)Com_SendSignal(ComConf_ComSignal_Sig_TorqueLimitCmd, &torqueLimit);
    }

    /* ---- 汇总状态给车身网（0x101） ---- */
    (void)Com_SendSignal(ComConf_ComSignal_Sig_GwVehicleSpeed, &vehicleSpeed);
    (void)Com_SendSignal(ComConf_ComSignal_Sig_GwDoorStatus,   &doorStatus);
    (void)Com_SendSignal(ComConf_ComSignal_Sig_GwLightStatus,  &lightStatus);

    s_aliveCounter = (uint8)((s_aliveCounter + 1u) & 0x0Fu);
    (void)Com_SendSignal(ComConf_ComSignal_Sig_GwAliveCounter, &s_aliveCounter);
}
