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
 * @file        : Com_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Post-Build configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "ComStack_Types.h"
#include "Com_Internal.h"
#include "Com_PBcfg.h"
/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
/*******************************************************************************
**                      Global Functions Declarations                         **
*******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* PRQA S 3120,3132,1503,1533 ++ */ /* VL_QAC_MagicNum,VL_QAC_MagicNum,VL_QAC_NoUsedApi,VL_QAC_OneRefSymbol */
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_TxIPduRuntimeBuff_ComMainFunctionTx_10ms[24];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_TxIPduInitValue_ComMainFunctionTx_10ms[24] = {
    /* ComIPdu_Tx_0x123 : 0      */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Tx_PT_Cmd_Can1_0x201 : 8      */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 : 16     */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_TxIPduRuntimeBuff[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduRuntimeBuff_ComMainFunctionTx_10ms,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_TxIPduInitValue[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduInitValue_ComMainFunctionTx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxIpduBufIdType Com_TxIpduBuffSize[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    24u,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_RxIPduRuntimeBuff_ComMainFunctionRx_10ms[40];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_RxIPduInitValue_ComMainFunctionRx_10ms[40] = {
    /* ComIPdu_Rx_0x120 : 0      */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Rx_PT_Status_Can1_0x200 : 8      */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Rx_PT_Torque_Can1_0x210 : 16     */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Rx_Body_Status_Can2_0x100 : 24     */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_Rx_Light_Cmd_Can2_0x110 : 32     */ 
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_RxIPduRuntimeBuff[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduRuntimeBuff_ComMainFunctionRx_10ms,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_RxIPduInitValue[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduInitValue_ComMainFunctionRx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxIpduBufIdType Com_RxIpduBuffSize[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    40u,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

 #define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_Signal8BitRuntimeBuff_NoPartition[COM_MAX_SIGNAL_8BITBUFF_SIZE];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_Signal8BitRuntimeBuff[1] = {
    Com_Signal8BitRuntimeBuff_NoPartition,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_Signal8BitInitValue_NoPartition[22] = {
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_Signal8BitInitValue[1] = {
    Com_Signal8BitInitValue_NoPartition,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
static uint16 Com_SignalBit16RuntimeBuff_NoPartition[COM_MAX_SIGNAL_16BITBUFF_SIZE];
#define COM_STOP_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint16* Com_SignalBit16RuntimeBuff[1] = {
    Com_SignalBit16RuntimeBuff_NoPartition,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const uint16 Com_SignalBit16InitValue_NoPartition[8] = {
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint16* const Com_SignalBit16InitValue[1] = {
    Com_SignalBit16InitValue_NoPartition,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"



#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_InitValueSignalIdType Com_Signal8BitInitValueSize[1] = {
    {
        22u,
        COM_UNUSED_UINT16,
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_InitValueSignalIdType Com_SignalBit16InitValueSize[1] = {
    {
        8u,
        COM_UNUSED_UINT16,
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

 #define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_Signal8BitSubstituteValue[COM_MAX_SIGNAL_8BIT_SUBSTITUTE_SIZE] = {
    0xfu,
	0xffu,
	0xffu,
	0xffu,
	0xfu,
	0x3u,
	0xfu,
	0x3u,
	0x1u,
	0x1u,
	0xffu,
	0x1u,
	0x7u,
	0x3u,
	0x1u,
	0xffu
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const uint16 Com_SignalBit16SubstituteValue[COM_MAX_SIGNAL_16BIT_SUBSTITUTE_SIZE] = {
    0xffffu,
	0xffffu,
	0x8000u,
	0xffffu
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"



#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
static Com_RxIPduRunTimeStateType Com_RxIPduRunTimeState_ComMainFunctionRx_10ms[5];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxIPduRunTimeStateType Com_RxIPduInitState_ComMainFunctionRx_10ms[5] = {
    {
        /* ComIPdu_Rx_0x120 */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        1u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
    {
        /* ComIPdu_Rx_PT_Status_Can1_0x200 */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        1u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
    {
        /* ComIPdu_Rx_PT_Torque_Can1_0x210 */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        1u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
    {
        /* ComIPdu_Rx_Body_Status_Can2_0x100 */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        1u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
    {
        /* ComIPdu_Rx_Light_Cmd_Can2_0x110 */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        1u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
Com_RxIPduRunTimeStateType* const Com_RxIPduRunTimeState[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduRunTimeState_ComMainFunctionRx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const Com_RxIPduRunTimeStateType* const Com_RxIPduInitState[] = {
    Com_RxIPduInitState_ComMainFunctionRx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
static Com_TxIPduRunTimeStateType Com_TxIPduRunTimeState_ComMainFunctionTx_10ms[3];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxIPduRunTimeStateType Com_TxIPduInitState_ComMainFunctionTx_10ms[3] = {
    {
        /* ComIPdu_Tx_0x123 */
        8u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        4u, /* TxIpduRTStFlag */
        COM_TX_MODE_PERIODIC, /* ipduTxMode */
    },
    {
        /* ComIPdu_Tx_PT_Cmd_Can1_0x201 */
        8u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        5u, /* TxIpduRTStFlag */
        COM_TX_MODE_MIXED_WITHOUT_REPETITION, /* ipduTxMode */
    },
    {
        /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
        8u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        5u, /* TxIpduRTStFlag */
        COM_TX_MODE_PERIODIC, /* ipduTxMode */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
Com_TxIPduRunTimeStateType* const Com_TxIPduRunTimeState[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduRunTimeState_ComMainFunctionTx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const Com_TxIPduRunTimeStateType* const Com_TxIPduInitState[] = {
    Com_TxIPduInitState_ComMainFunctionTx_10ms,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const uint16 Com_RxSignalFirstTimeoutVal[] = {
    /* Sig_VehicleSpeed */
    0u,
    /* Sig_EngineSpeed */
    0u,
    /* Sig_Gear */
    0u,
    /* Sig_SOC */
    0u,
    /* Sig_ActualTorque */
    0u,
    /* Sig_TorqueLimit */
    0u,
    /* Sig_MotorTemp */
    0u,
    /* Sig_DeratingFactor */
    0u,
    /* Sig_DoorStatus */
    0u,
    /* Sig_LockStatus */
    0u,
    /* Sig_LightStatus */
    0u,
    /* Sig_WiperStatus */
    0u,
    /* Sig_TrunkStatus */
    0u,
    /* Sig_HoodStatus */
    0u,
    /* Sig_BatteryVoltage */
    0u,
    /* Sig_IgnitionStatus */
    0u,
    /* Sig_LightCmd */
    0u,
    /* Sig_TurnCmd */
    0u,
    /* Sig_FlashCmd */
    0u,
    /* Sig_LightLevel */
    0u,
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const uint16 Com_RxSignalTimeoutVal[] = {
    /* Sig_VehicleSpeed */
    50u,
    /* Sig_EngineSpeed */
    50u,
    /* Sig_Gear */
    50u,
    /* Sig_SOC */
    50u,
    /* Sig_ActualTorque */
    50u,
    /* Sig_TorqueLimit */
    50u,
    /* Sig_MotorTemp */
    50u,
    /* Sig_DeratingFactor */
    50u,
    /* Sig_DoorStatus */
    50u,
    /* Sig_LockStatus */
    50u,
    /* Sig_LightStatus */
    50u,
    /* Sig_WiperStatus */
    50u,
    /* Sig_TrunkStatus */
    50u,
    /* Sig_HoodStatus */
    50u,
    /* Sig_BatteryVoltage */
    50u,
    /* Sig_IgnitionStatus */
    50u,
    /* Sig_LightCmd */
    50u,
    /* Sig_TurnCmd */
    50u,
    /* Sig_FlashCmd */
    50u,
    /* Sig_LightLevel */
    50u,
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const Com_SignalIdType Com_TimeoutRxSignalRef[] = {
    /* Sig_VehicleSpeed */
    2u,
    /* Sig_EngineSpeed */
    3u,
    /* Sig_Gear */
    4u,
    /* Sig_SOC */
    5u,
    /* Sig_ActualTorque */
    6u,
    /* Sig_TorqueLimit */
    7u,
    /* Sig_MotorTemp */
    8u,
    /* Sig_DeratingFactor */
    9u,
    /* Sig_DoorStatus */
    10u,
    /* Sig_LockStatus */
    11u,
    /* Sig_LightStatus */
    12u,
    /* Sig_WiperStatus */
    13u,
    /* Sig_TrunkStatus */
    14u,
    /* Sig_HoodStatus */
    15u,
    /* Sig_BatteryVoltage */
    16u,
    /* Sig_IgnitionStatus */
    17u,
    /* Sig_LightCmd */
    18u,
    /* Sig_TurnCmd */
    19u,
    /* Sig_FlashCmd */
    20u,
    /* Sig_LightLevel */
    21u,
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const Com_RxDataTimeoutActionType Com_RxSignalDataTimeoutActionCfg[] = {
    /* Sig_VehicleSpeed */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_EngineSpeed */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_Gear */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_SOC */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_ActualTorque */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_TorqueLimit */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_MotorTemp */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_DeratingFactor */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_DoorStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_LockStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_LightStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_WiperStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_TrunkStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_HoodStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_BatteryVoltage */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_IgnitionStatus */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_LightCmd */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_TurnCmd */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_FlashCmd */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
    /* Sig_LightLevel */
    COM_TIMEOUT_ACTION_SUBSTITUTE,
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const uint16 Com_RxSignalSubstituteValueIdRef[] = {
    0u,
    1u,
    0u,
    1u,
    2u,
    3u,
    2u,
    3u,
    4u,
    5u,
    6u,
    7u,
    8u,
    9u,
    10u,
    11u,
    12u,
    13u,
    14u,
    15u,
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_RxIPduType Com_RxIPdu[5u] = {
    {
        /* 0 ComIPdu_Rx_0x120 */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        0u,  /* RxIPduDMFirstTimeout */
        0u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        0u, /* RxIPduBufIndex */
        0u, /* IpduSignalRefStartId */
        2u, /* IPduSignalsRefEndId */
        COM_UNUSED_RXIPDUGROUPID,  /* IPduGroupsRefStartId */
        0u,  /* IPduGroupsRefEndId */
        COM_UNUSED_RXSIGTIMEOUTID,  /* IPduSignalsTimeoutRefStartId */
        COM_UNUSED_RXSIGTIMEOUTID,  /* IPduSignalsTimeoutRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        COM_IMMEDIATE,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
    {
        /* 1 ComIPdu_Rx_PT_Status_Can1_0x200 */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        50u,  /* RxIPduDMFirstTimeout */
        50u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        8u, /* RxIPduBufIndex */
        2u, /* IpduSignalRefStartId */
        6u, /* IPduSignalsRefEndId */
        COM_UNUSED_RXIPDUGROUPID,  /* IPduGroupsRefStartId */
        0u,  /* IPduGroupsRefEndId */
        0u,  /* IPduSignalsTimeoutRefStartId */
        4u,  /* IPduSignalsTimeoutRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
    {
        /* 2 ComIPdu_Rx_PT_Torque_Can1_0x210 */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        50u,  /* RxIPduDMFirstTimeout */
        50u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        16u, /* RxIPduBufIndex */
        6u, /* IpduSignalRefStartId */
        10u, /* IPduSignalsRefEndId */
        COM_UNUSED_RXIPDUGROUPID,  /* IPduGroupsRefStartId */
        0u,  /* IPduGroupsRefEndId */
        4u,  /* IPduSignalsTimeoutRefStartId */
        8u,  /* IPduSignalsTimeoutRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
    {
        /* 3 ComIPdu_Rx_Body_Status_Can2_0x100 */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        50u,  /* RxIPduDMFirstTimeout */
        50u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        24u, /* RxIPduBufIndex */
        10u, /* IpduSignalRefStartId */
        18u, /* IPduSignalsRefEndId */
        COM_UNUSED_RXIPDUGROUPID,  /* IPduGroupsRefStartId */
        0u,  /* IPduGroupsRefEndId */
        8u,  /* IPduSignalsTimeoutRefStartId */
        16u,  /* IPduSignalsTimeoutRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
    {
        /* 4 ComIPdu_Rx_Light_Cmd_Can2_0x110 */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        50u,  /* RxIPduDMFirstTimeout */
        50u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        32u, /* RxIPduBufIndex */
        18u, /* IpduSignalRefStartId */
        22u, /* IPduSignalsRefEndId */
        COM_UNUSED_RXIPDUGROUPID,  /* IPduGroupsRefStartId */
        0u,  /* IPduGroupsRefEndId */
        16u,  /* IPduSignalsTimeoutRefStartId */
        20u,  /* IPduSignalsTimeoutRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const Com_TxIpduGroupIdType Com_TxIPduGroupsRef[] = {
    ComIPduGroup_Default, /*0 ComIPdu_Tx_0x123*/
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxModePeriodType Com_TxModeTruePeriod[] = {
    {
        /* ComIPdu_Tx_0x123 */
        1u,
        100u,
    },
    {
        /* ComIPdu_Tx_PT_Cmd_Can1_0x201 */
        1u,
        10u,
    },
    {
        /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
        1u,
        10u,
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_TxIPduType Com_TxIPdu[3u] = {
    {
        /* 0 - ComIPdu_Tx_0x123 */
        8u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        0u, /* PduBufferId */
        PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can0_0x123, /*PduId*/
        0u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        0u, /*ComIpduSignalRefStartId*/
        3u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        0u, /* ComIPduGroupsRefStartId */
        1u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_PERIODIC, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        COM_IMMEDIATE, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
    {
        /* 1 - ComIPdu_Tx_PT_Cmd_Can1_0x201 */
        8u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        8u, /* PduBufferId */
        PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can1_0x201, /*PduId*/
        1u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        3u, /*ComIpduSignalRefStartId*/
        4u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        COM_UNUSED_TXIPDUGROUPID, /* ComIPduGroupsRefStartId */
        0u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_MIXED_WITHOUT_REPETITION, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        COM_DEFERRED, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
    {
        /* 2 - ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
        8u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        16u, /* PduBufferId */
        PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can2_0x101, /*PduId*/
        2u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        4u, /*ComIpduSignalRefStartId*/
        8u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        COM_UNUSED_TXIPDUGROUPID, /* ComIPduGroupsRefStartId */
        0u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_PERIODIC, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        COM_DEFERRED, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxSignalType Com_RxSignal[22u] = {
    {
        /* 0 Sig_RxCounter */
        0u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        0u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 1 Sig_RxVoltage */
        0u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        0u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        16u, /* ComBitSize */
        2u, /* ComSignalByteLength */
        COM_UINT16, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 2 Sig_VehicleSpeed */
        1u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        16u, /* ComBitSize */
        2u, /* ComSignalByteLength */
        COM_UINT16, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 3 Sig_EngineSpeed */
        2u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        2u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        16u, /* ComBitSize */
        2u, /* ComSignalByteLength */
        COM_UINT16, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 4 Sig_Gear */
        1u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        4u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        4u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 5 Sig_SOC */
        2u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        5u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 6 Sig_ActualTorque */
        3u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        2u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        16u, /* ComBitSize */
        2u, /* ComSignalByteLength */
        COM_SINT16, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 7 Sig_TorqueLimit */
        4u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        2u, /* SigLsbBytePos */
        2u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        16u, /* ComBitSize */
        2u, /* ComSignalByteLength */
        COM_UINT16, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 8 Sig_MotorTemp */
        3u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        4u, /* SigLsbBytePos */
        2u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 9 Sig_DeratingFactor */
        4u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        5u, /* SigLsbBytePos */
        2u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 10 Sig_DoorStatus */
        5u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        4u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 11 Sig_LockStatus */
        6u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        4u, /* SignalPosInByte */
        2u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 12 Sig_LightStatus */
        7u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        4u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 13 Sig_WiperStatus */
        8u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        4u, /* SignalPosInByte */
        2u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 14 Sig_TrunkStatus */
        9u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        6u, /* SignalPosInByte */
        1u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 15 Sig_HoodStatus */
        10u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        7u, /* SignalPosInByte */
        1u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 16 Sig_BatteryVoltage */
        11u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        2u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 17 Sig_IgnitionStatus */
        12u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        3u, /* SigLsbBytePos */
        3u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        1u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 18 Sig_LightCmd */
        13u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        4u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        3u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 19 Sig_TurnCmd */
        14u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        4u, /* IpduRefIndex */
        3u, /* SignalPosInByte */
        2u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 20 Sig_FlashCmd */
        15u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        4u, /* IpduRefIndex */
        5u, /* SignalPosInByte */
        1u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
    {
        /* 21 Sig_LightLevel */
        16u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        4u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_LITTLE_ENDIAN, /* ComSignalEndianness */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_TxSignalType Com_TxSignal[8u] = {
    {
        /* 0 Sig_TxCounter */
        17u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        0u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 1 Sig_TxTemp */
        5u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        1u, /* SigLsbBytePos */
        0u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        16u, /*ComBitSize*/
        2u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT16, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 2 Sig_TxStatus */
        18u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        3u, /* SigLsbBytePos */
        0u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        4u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 3 Sig_TorqueLimitCmd */
        6u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        1u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        16u, /*ComBitSize*/
        2u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT16, /*ComSignalType*/
        COM_TRIGGERED, /*ComTransferProperty*/
    },
    {
        /* 4 Sig_GwVehicleSpeed */
        7u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        16u, /*ComBitSize*/
        2u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT16, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 5 Sig_GwDoorStatus */
        19u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        2u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        4u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 6 Sig_GwLightStatus */
        20u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        2u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        4u, /*ComSignalPosInByte*/
        4u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 7 Sig_GwAliveCounter */
        21u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        3u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        4u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_LITTLE_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"






#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const PduIdType Com_MainFunctionRxRange[] ={
    5u,     /* ComMainFunctionRx_10ms */
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const PduIdType Com_MainFunctionTxRange[] = {
    3u,     /* ComMainFunctionTx_10ms */
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_SignalInitValueType Com_SignalInitValue = {
    Com_Signal8BitInitValue,
    Com_SignalBit16InitValue,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_SigInitValueSizePerPartitionType Com_SigInitValSize = {
    Com_Signal8BitInitValueSize,
    Com_SignalBit16InitValueSize,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_IpduGroupRefType Com_IPduGroup = {
    NULL_PTR,
    Com_TxIPduGroupsRef,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"




#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_SignalSubstituteValueType Com_SignalSubstituteValue = {
    Com_RxSignalSubstituteValueIdRef,
    Com_Signal8BitSubstituteValue,
    Com_SignalBit16SubstituteValue,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxModeAndSignalFilterPtrType Com_TxModeAndSignalFilter = {
    Com_TxModeTruePeriod,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_SignalTimeoutType Com_SignalTimeout = {
            Com_RxSignalFirstTimeoutVal, /* RxSignalFirstTimeoutVal */
            Com_RxSignalTimeoutVal,      /* RxSignalTimeoutVal */
            Com_TimeoutRxSignalRef,      /* TimeoutRxSignalId */
            Com_RxSignalDataTimeoutActionCfg,   /* RxSignalDataTimeoutActionCfg */
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
const struct Com_ConfigTypeTag Com_Config = /* PRQA S 1502, 1531 */ /* VL_QAC_OneFunRef, VL_QAC_OneRefSymbol */
{
    &Com_RxIPdu[0], /* RxIPduPtr */
    Com_RxIPduInitState,  /* RxIpduInitStatePtr */
    Com_RxIPduInitValue,  /* RxIpduInitValuePtr */
    Com_RxIpduBuffSize,   /* RxIpduBufferSizePerPartition */
    &Com_TxIPdu[0],   /* TxIPduPtr */
    Com_TxIPduInitState,  /* TxIpduInitStatePtr */
    Com_TxIPduInitValue,  /* TxIpduInitValuePtr */
    Com_TxIpduBuffSize,   /* TxIpduBufferSizePerPartition */
    &Com_RxSignal[0], /* RxSignalPtr */
    &Com_TxSignal[0], /* TxSignalPtr */
    NULL_PTR,   /* RxSignalGroupPtr */
    NULL_PTR,   /* TxSignalGroupPtr */
    NULL_PTR,   /* RxGroupSignalPtr */
    NULL_PTR,   /* TxGroupSignalPtr */
    &Com_MainFunctionRxRange[0],  /* MainFunctionRxRangePtr */
    &Com_MainFunctionTxRange[0],  /* MainFunctionTxRangePtr */
    &Com_IPduGroup,               /* IpduGroupRefPtr */
    &Com_SignalInitValue, /* SignalInitValuePtr */
    &Com_SigInitValSize,  /* SignalInitValueSizePtr */
    &Com_SignalSubstituteValue,   /* SignalSubstitueteValuePtr */
    &Com_TxModeAndSignalFilter,   /* TxModeAndSignalFilterPtr */
    NULL_PTR, /* SignalGroupArrayPtr */
    &Com_SignalTimeout,   /* SignalTimeoutPtr */
    8u, /* TxSignalNum */
    22u, /* RxSignalNum */
    3u, /* TxPduNum */
    5u, /* RxPduNum */
    0u, /* TxGroupSignalNum */
    0u, /* RxGroupSignalNum */
    0u, /* TxSignalGroupNum */
    0u, /* RxSignalGroupNum */
    1u, /* IpduGroupNum */
    0u, /* MainFunctionRouteSignalsNum */
    1u, /* MainFunctionRxNum */
    1u, /* MainFunctionTxNum */
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/*******************************************************************************
**                    Global Configuration Function Definitions               **
*******************************************************************************/
/* PRQA S 1532 ++*/ /* VL_QAC_OneFunRef */
#define COM_START_SEC_CODE
#include "Com_MemMap.h"
void Com_MainFunctionRx_ComMainFunctionRx_10ms(void)
{
    Com_MainFunctionRx(0u);
}
#define COM_STOP_SEC_CODE
#include "Com_MemMap.h"

#define COM_START_SEC_CODE
#include "Com_MemMap.h"
void Com_MainFunctionTx_ComMainFunctionTx_10ms(void)
{
    Com_MainFunctionTx(0u);
}
#define COM_STOP_SEC_CODE
#include "Com_MemMap.h"

/* PRQA S 1532 --*/
/* PRQA S 3120,3132,1503,1533 -- */
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
