/**
 * COPYRIGHT
 * ---------------------------------------------------------------------------------------------------------------------
 * Copyright (c) iSOFT INFRASTRUCTURE SOFTWARE CO., LTD. This software is proprietary to
 * iSOFT INFRASTRUCTURE SOFTWARE CO., LTD., and all rights are reserved by iSOFT INFRASTRUCTURE SOFTWARE CO., LTD.
 * Without the express written permission of the company, no organization or individual may copy, install, trial,
 * distribute, or reverse engineer this software. For terms of use and further details, please refer to the End User
 * License Agreement (EULA) or contact us business@i-soft.com.cn for more assistance.
 *
 * This file contains code from EasyXMen, which is licensed under the LGPL-2.1. However, due to a special exception,
 * you are not required to comply with the provisions of section 6a of LGPL-2.1. Specifically, you may distribute
 * your software, including this file, under terms of your choice, including proprietary licenses, without needing to
 * provide the source code or object code as specified in section 6a. For more details, please refer to the project's
 * LICENSE and EXCEPTION files and the specific exception statement.
 * ---------------------------------------------------------------------------------------------------------------------
 * FILE DESCRIPTION
 * ---------------------------------------------------------------------------------------------------------------------
 * @MCU         : S32K148
 * @file        : EcuM_Callout_Stubs.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Post-build configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/


/* =================================================== inclusions =================================================== */
#include "EcuM_Internal.h"
#include "EcuM_Cbk.h"

/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK User Includes>
*/
/*User defined header file*/
#include "Mcu.h"
#include "Platform.h"
#include "Port.h"
#include "Can_43_FLEXCAN.h"
#include "CanIf.h"
#include "PduR.h"
#include "Com.h"
#include "CanTp.h"
#include "Dcm.h"
#include "Dem.h"
#include "CanSM.h"
#include "ComM.h"
#include "ComM_BswM.h"
#include "ComM_Cfg.h"
#include "Nm.h"
#include "CanNm.h"
#include "Tm.h"
#include "Mem_43_INFLS.h"
#include "MemAcc.h"
#include "Fee.h"
#include "NvM.h"

extern const CanIf_ConfigType CanIf_Config;
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */
/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function is an error hook that is called when an error occurs. It takes a reason code as a parameter to indicate the type of error.
 */
void EcuM_ErrorHook(uint16 reason)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_ErrorHook>
    */
    (void)reason;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function sets the MCU mode to the specified mode.
 */
void EcuM_McuSetMode(Mcu_ModeType mode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_McuSetMode>
    */
    Mcu_SetMode(mode);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#if (ECUM_SET_PROGRAMMABLE_INTERRUPTS == STD_ON)
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function is used to set programmable interrupts.
 */
void EcuM_AL_SetProgrammableInterrupts(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_SetProgrammableInterrupts>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
#endif /* ECUM_SET_PROGRAMMABLE_INTERRUPTS == STD_ON */

#if (ECUM_DRIVER_INIT_LIST_ZERO == STD_ON)
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function initializes the driver with zero values.
 */
/* PRQA S 6070 ++ */ /* VL_MTR_EcuM_STCAL */
void EcuM_AL_DriverInitZero(void)
/* PRQA S 6070 -- */
{
    /* ---- 基础硬件初始化（Block 0） ---- */
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuClockSettingConfig_0);
#if (MCU_NO_PLL == STD_OFF)
    while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
    {
    }
    Mcu_DistributePllClock();
#endif
    Mcu_SetMode(McuModeSettingConf_0);

    Platform_Init(NULL_PTR);
    Port_Init(&Port_Config);
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
#endif /* ECUM_DRIVER_INIT_LIST_ZERO == STD_ON */

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function determines the power-by configuration and returns a pointer to the configuration type.
 */
const EcuM_ConfigType *EcuM_DeterminePbConfiguration(void)
{
    const EcuM_ConfigType *configPtr = NULL_PTR;
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_DeterminePbConfiguration>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
    configPtr = &EcuM_Config;

    return configPtr;
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#if (ECUM_DRIVER_INIT_LIST_ONE == STD_ON)
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function initializes the driver with one values.
 */
/* PRQA S 6070 ++ */ /* VL_MTR_EcuM_STCAL */
void EcuM_AL_DriverInitOne(void)
/* PRQA S 6070 -- */
{
    const EcuM_GenBSWPbCfgType * pbCfg = EcuM_ConfigPtr->modulePBCfg;
    /* PRQA S 0317 ++ */ /* VL_QAC_0317 */
    /* PRQA S 0317 -- */
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverInitOne Other>
    */
    /* ---- CAN 驱动 ---- */
    Can_43_FLEXCAN_Init(&Can_43_FLEXCAN_Config);

    /* ---- 通信栈 ---- */
    CanIf_Init(&CanIf_Config);
    PduR_Init(&PduR_Config);
    Com_Init(&Com_Config);
    CanTp_Init(&CanTp_Config);

    /* ---- 存储栈 ---- */
    Mem_43_INFLS_Init(&Mem_43_INFLS_Config);
    MemAcc_Init(&MemAcc_Config);
    Fee_Init(&Fee_Config);
    NvM_Init(NULL_PTR);

    /* ---- 诊断 ---- */
    Dem_Init(&Dem_Config);
    Dcm_Init(&Dcm_Config);

    /* ---- 模式管理 / 网络管理 ---- */
    Tm_Init(&Tm_Config);
    CanSM_Init(&CanSM_Config);
    ComM_Init(&ComM_Config);
    Nm_Init(&Nm_Config);
    CanNm_Init(&CanNm_Config);

    /* 调度器启动前请求通信，避免 CanNm 先超时 */
    ComM_CommunicationAllowed(0u, TRUE);
    ComM_CommunicationAllowed(1u, TRUE);
    ComM_CommunicationAllowed(2u, TRUE);
    (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can0, COMM_FULL_COMMUNICATION);
    (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can1, COMM_FULL_COMMUNICATION);
    (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_App_Can2, COMM_FULL_COMMUNICATION);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
#endif /* ECUM_DRIVER_INIT_LIST_ONE == STD_ON */

#if (ECUM_RESET_LOOP_DETECTION == STD_ON)
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function detects if a loop condition exists and returns a boolean value indicating the result.
 */
boolean EcuM_LoopDetection(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_LoopDetection>
    */
    return FALSE;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
#endif /* ECUM_RESET_LOOP_DETECTION == STD_ON */

/**
 * This function performs actions when transitioning to the off state with a value of one.
 */
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
void EcuM_OnGoOffOne(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_OnGoOffOne>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function performs actions when transitioning to the off state with a value of two.
 */
void EcuM_OnGoOffTwo(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_OnGoOffTwo>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function switches off the specified component or system.
 */
void EcuM_AL_SwitchOff(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_SwitchOff>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function resets the specified component or system based on the provided reset type.
 */
void EcuM_AL_Reset(EcuM_ResetType reset)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_Reset>
    */
    (void)reset;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function enables the specified wakeup sources for the ECU.
 */
void EcuM_EnableWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_EnableWakeupSources EcuMWakeupSource>
            */
            /* custom code.... */
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function generates a hash of the RAM contents.
 */
void EcuM_GenerateRamHash(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_GenerateRamHash>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function handles the sleep activity for the ECU.
 */
void EcuM_SleepActivity(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_SleepActivity>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function starts checking the specified wakeup source for the ECU.
 */
void EcuM_StartCheckWakeup(EcuM_WakeupSourceType WakeupSource)
{
    switch (WakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_StartCheckWakeup EcuMWakeupSource>
            */
            /* custom code.... */
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)WakeupSource;
            break;
        }
    }
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"


#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function checks the hash of the RAM contents and returns the result.
 */
uint8 EcuM_CheckRamHash(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_CheckRamHash>
    */
    return 1u;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function disables the specified wakeup sources for the ECU.
 */
void EcuM_DisableWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    if ((wakeupSource & EcuMWakeupSource) == EcuMWakeupSource)
    {
        /** DO NOT CHANGE THIS COMMENT!
        * <USERBLOCK EcuM_DisableWakeupSources EcuMWakeupSource>
        */
        /* custom code.... */
        /** DO NOT CHANGE THIS COMMENT!
        * </USERBLOCK>
        */
    }
    else
    {
        (void)wakeupSource;
    }
}

#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#if (ECUM_DRIVER_RESTART_LIST == STD_ON)
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function restarts the driver for the ECU.
 */
void EcuM_AL_DriverRestart(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverRestart>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
#endif /* ECUM_DRIVER_RESTART_LIST == STD_ON */

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function starts the specified wakeup sources for the ECU.
 */
void EcuM_StartWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_StartWakeupSources>
    */
    (void)wakeupSource;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function checks the validation of the specified wakeup source for the ECU.
 */
void EcuM_CheckValidation(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_CheckValidation EcuMWakeupSource>
            */
            (void)wakeupSource;
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function stops the specified wakeup sources for the ECU.
 */
void EcuM_StopWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_StopWakeupSources>
    */
    (void)wakeupSource;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"


#define ECUM_START_SEC_CODE_FAST
#include "EcuM_MemMap.h"
/**
 * This function checks the wakeup hook for the specified wakeup source.
 */
void EcuM_CheckWakeupHook(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_CheckWakeup EcuMWakeupSource>
            */
            EcuM_StartCheckWakeup(EcuMWakeupSource);
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}
#define ECUM_STOP_SEC_CODE_FAST
#include "EcuM_MemMap.h"

/* ========================================== internal function definitions ========================================= */
/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK EcuM Code Other>
*/
/* custom code.... */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/


