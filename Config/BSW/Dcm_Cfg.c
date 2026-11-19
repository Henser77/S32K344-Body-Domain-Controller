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
 * @file        : Dcm_Cfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Cfg Data Definitions
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 3132, 6530 EOF */ /* VL_QAC_MagicNum, VL_MTR_Dcm_STECT */
/* PRQA S 1502, 1504, 1531, 1533 EOF */ /* VL_QAC_OneFunRef */
/* =================================================== inclusions =================================================== */
#include "PduR_PBcfg.h"
#include "Dcm_Internal.h"
#include "Dcm_MatchFormat.h"
#include "Dcm_Externals.h"
/* ========================================== internal function declarations ======================================== */
/* ========================================== internal function definitions ========================================= */
/* ============================================ internal data definitions =========================================== */
#define DCM_START_SEC_CONFIG_DATA_8
#include "Dcm_MemMap.h"
DCM_LOCAL const Dcm_SecLevelType Dcm_SecurityLevelRef[1] =
{
    1u, /* &Dcm_SecurityLevelRef[0] */
};
#define DCM_STOP_SEC_CONFIG_DATA_8
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_8
#include "Dcm_MemMap.h"
DCM_LOCAL const Dcm_SesCtrlType Dcm_SessionLevelRef[3] =
{
    3u,  /* &Dcm_SessionLevelRef[0] */
    1u,  /* &Dcm_SessionLevelRef[1] */
    3u,  /* &Dcm_SessionLevelRef[2] */
};
#define DCM_STOP_SEC_CONFIG_DATA_8
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
DCM_LOCAL const Dcm_DspDidReadWriteType Dcm_DspDidRead[1] =
{
    /* &Dcm_DspDidRead[0] */
    {
        NULL_PTR, /* DidReadWriteModeRuleRef */
        0u, /* DidReadWriteRoleRefNum */
        NULL_PTR, /* DidReadWriteRoleRef */
        0u, /* DidReadWriteSecurityLevelRefNum */
        NULL_PTR, /* DidReadWriteSecurityLevelRef */
        0u, /* DidReadWriteSessionRefNum */
        NULL_PTR, /* DidReadWriteSessionRef */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
DCM_LOCAL const Dcm_DspDidReadWriteType Dcm_DspDidWrite[1] =
{
    /* &Dcm_DspDidWrite[0] */
    {
        NULL_PTR, /* DidReadWriteModeRuleRef */
        0u, /* DidReadWriteRoleRefNum */
        NULL_PTR, /* DidReadWriteRoleRef */
        1u, /* DidReadWriteSecurityLevelRefNum */
        &Dcm_SecurityLevelRef[0], /* DidReadWriteSecurityLevelRef */
        1u, /* DidReadWriteSessionRefNum */
        &Dcm_SessionLevelRef[0], /* DidReadWriteSessionRef */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DsdSubServiceType Dcm_DsdSubService[13] =
{
    /* &Dcm_DsdSubService[0] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x1u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[1] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x2u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[2] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x3u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[3] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x0u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[4] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x1u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[5] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x2u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[6] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x1u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[7] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x2u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[8] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x4u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[9] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x6u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[10] */
    {
        NULL_PTR, /* SubServiceFnc */
        0xau, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[11] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x1u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
    /* &Dcm_DsdSubService[12] */
    {
        NULL_PTR, /* SubServiceFnc */
        0x3u, /* SubServiceId */
        NULL_PTR, /* SubServiceModeRuleRef */
        0u, /* SubServiceRoleRefNum */
        NULL_PTR, /* SubServiceRoleRef */
        0u, /* SubServiceSecurityLevelRefNum */
        NULL_PTR, /* SubServiceSecurityLevelRef */
        0u, /* SubServiceSessionLevelRefNum */
        NULL_PTR, /* SubServiceSessionLevelRef */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DsdServiceType Dcm_DsdService[8] =
{
    /* &Dcm_DsdService[0] */
    {
        Dcm_UDS0x10, /* SidTabFnc */
        0x10u, /* SidTabServiceId */
        TRUE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        3u, /* SubServiceNum */
        0u, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[1] */
    {
        Dcm_UDS0x3E, /* SidTabFnc */
        0x3Eu, /* SidTabServiceId */
        TRUE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        1u, /* SubServiceNum */
        3u, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[2] */
    {
        Dcm_UDS0x22, /* SidTabFnc */
        0x22u, /* SidTabServiceId */
        FALSE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        0u, /* SubServiceNum */
        DCM_INVALID_UINT16, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[3] */
    {
        Dcm_UDS0x27, /* SidTabFnc */
        0x27u, /* SidTabServiceId */
        TRUE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        2u, /* SubServiceNum */
        4u, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[4] */
    {
        Dcm_UDS0x2E, /* SidTabFnc */
        0x2Eu, /* SidTabServiceId */
        FALSE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        0u, /* SubServiceNum */
        DCM_INVALID_UINT16, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[5] */
    {
        Dcm_UDS0x19, /* SidTabFnc */
        0x19u, /* SidTabServiceId */
        TRUE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        5u, /* SubServiceNum */
        6u, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[6] */
    {
        Dcm_UDS0x14, /* SidTabFnc */
        0x14u, /* SidTabServiceId */
        FALSE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        0u, /* SidTabSessionLevelRefNum */
        NULL_PTR, /* SidTabSessionLevelRef */
        0u, /* SubServiceNum */
        DCM_INVALID_UINT16, /* SubServiceIndex */
    },
    /* &Dcm_DsdService[7] */
    {
        Dcm_UDS0x11, /* SidTabFnc */
        0x11u, /* SidTabServiceId */
        TRUE, /* SubfuncAvail */
        0u, /* ServiceRoleRefNum */
        NULL_PTR, /* ServiceRoleRef */
        NULL_PTR, /* SidTabModeRuleRef */
        0u, /* SidTabSecurityLevelRefNum */
        NULL_PTR, /* SidTabSecurityLevelRef */
        2u, /* SidTabSessionLevelRefNum */
        &Dcm_SessionLevelRef[1], /* SidTabSessionLevelRef */
        2u, /* SubServiceNum */
        11u, /* SubServiceIndex */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DsdServiceTableType Dcm_DslProtocolSIDTable[1] =
{
    /* &Dcm_DslProtocolSIDTable[0] */
    {
        8u, /* ServiceNum */
        0u, /* ServiceIndex */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DslProtocolRowType Dcm_DslProtocolRow[1] =
{
    /* &Dcm_DslProtocolRow[0] */
    {
        64u, /* MaximumResponseSize */
        1u, /* Priority */
        DCM_UDS_ON_CAN, /* ProtocolType */
        0u, /* EcuAddr */
        FALSE, /* SendRespPendOnRestart */
        0u, /* P2ServerAdjust(ms) */
        0u, /* P2StarServerAdjust(ms) */
        0u, /* DemClientRef */
        64u, /* RxBufferSize */
        0u, /* RxBufferOffset */
        &Dcm_DslProtocolSIDTable[0], /* SidTable */
        64u, /* TxBufferSize */
        64u, /* TxBufferOffset */
        1u, /* MainConnectionIdNum */
        0u, /* MainConnectionId */
        NULL_PTR, /* UDSControlDTCSessionRef */
        0u, /* UDSControlDTCSessionRefNum */
        NULL_PTR, /* UDSControlDTCSessionRef */
        0u, /* UDSComControlSessionRefNum */
        NULL_PTR, /* ShareBufferProtocolId */
        0u, /* ShareBufferProtocolIdNum */
        FALSE, /* ProtocolUseGenericConnection */
        FALSE, /* RequestQueued */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_16
#include "Dcm_MemMap.h"
const PduIdType Dcm_DslProtocolTx[1] =
{
    PduRConf_PduRSrcPdu_SrcPdu_DcmTx_Can0, /* &Dcm_DslProtocolTx[0] */
};
#define DCM_STOP_SEC_CONFIG_DATA_16
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DslMainConnectionType Dcm_DslMainConnection[1] =
{
    /* &Dcm_DslMainConnection[0] */
    {
        0u, /* RxConnectionId */
        0u, /* TesterSourceAddr */
        0u, /* PeriodicConnectionIdNum */
        DCM_INVALID_UINT16, /* PeriodicConnectionId */
        0u, /* ProtocolComMChannelRef */
        Rte_Switch_CommunicationControlModeSwitchInterface_ComMChannel_CAN0_communicationControl, /* ProtocolComCtrlFnc */
        &Dcm_DslProtocolTx[0], /* ProtocolTx */
        0u, /* ParentProtocolId */
        FALSE, /* MainConnectionUseGenericConnection */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DslProtocolRxType Dcm_DslProtocolRx[1] =
{
    /* &Dcm_DslProtocolRx[0] */
    {
        DCM_PHYSICAL_TYPE, /* AddrType */
        0u, /* ParentMainConnectionId */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspDataCfgType Dcm_DspData[1] =
{
    /* &Dcm_DspData[0] */
    {
        17u, /* DspDataByteSize */
        NULL_PTR, /* ConditionCheckReadFnc */
        NULL_PTR, /* EcuSignal */
        NULL_PTR, /* FreezeCurrentStateFnc */
        NULL_PTR, /* GetScalingInfoFnc */
        NULL_PTR, /* ReadDataLengthFnc */
        NULL_PTR, /* ReadEcuSignal */
        Dcm_Dcm_ReadData_Vin_matchFormat, /* DspDataReadFnc */
        NULL_PTR, /* ResetToDefaultFnc */
        NULL_PTR, /* ReturnControlToEcuFnc */
        NULL_PTR, /* ShortTermAdjustmentFnc */
        DCM_UINT8_N, /* DspDataType */
        DCM_USE_DATA_ASYNCH_FNC, /* DspDataUsePort */
        Dcm_Dcm_WriteData_Vin_matchFormat, /* DataWriteFnc */
        0u, /* ScalingInfoSize */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspDidSignalType Dcm_DspDidSignal[1] =
{
    /* &Dcm_DspDidSignal[0] */
    {
        0u, /* DidByteOffset */
        &Dcm_DspData[0], /* DidDataRef */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspDidType Dcm_DspDid[1] =
{
    /* &Dcm_DspDid[0] */
    {
        0xf190u, /* DidIdentifier */
        17u, /* DidSize */
        DCM_USE_DATA_ELEMENT_SPECIFIC_INTERFACES, /* DidUsePort */
        0u, /* DidInfoRef */
        0u, /* DidSignalIndexStart */
        0u, /* DidSignalIndexEnd */
        NULL_PTR, /* DidReadFnc */
        NULL_PTR, /* DidWriteFnc */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspDidInfoType Dcm_DspDidInfo[1] =
{
    /* &Dcm_DspDidInfo[0] */
    {
        0u, /* DDDIDMaxElements */
        FALSE, /* DynamicallyDefined */
        DCM_INVALID_UINT16, /* DDDidIndex */
        NULL_PTR, /* DidControl */
        &Dcm_DspDidRead[0], /* DidRead */
        &Dcm_DspDidWrite[0], /* DidWrite */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspEcuResetRowType Dcm_DspEcuResetRow[2] =
{
    /* &Dcm_DspEcuResetRow[0] */
    {
        0x1u, /* EcuResetId */
        DCM_BEFORE_RESET, /* ResponseToEcuReset */
    },
    /* &Dcm_DspEcuResetRow[1] */
    {
        0x3u, /* EcuResetId */
        DCM_BEFORE_RESET, /* ResponseToEcuReset */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspSecurityRowType Dcm_DspSecurityRow[1] =
{
    /* &Dcm_DspSecurityRow[0] */
    {
        0u, /* AdrSize */
        FALSE, /* AttemptCounterEnabled */
        Dcm_CompareKey_Level1, /* CompareKeyFnc */
        10000u, /* DelayTime(ms) */
        0u, /* DelayTimeOnBoot(ms) */
        NULL_PTR, /* GetAttemptCounterFnc */
        Dcm_Dcm_GetSeed_Level1_matchFormat, /* GetSeedFnc */
        4u, /* KeySize */
        1u, /* SecurityLevel */
        3u, /* NumAttDelay */
        4u, /* SeedSize */
        NULL_PTR, /* SetAttemptCounterFnc */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_DspSessionRowType Dcm_DspSessionRow[3] =
{
    /* &Dcm_DspSessionRow[0] */
    {
        DCM_NO_BOOT, /* SessionForBoot */
        1u, /* SessionLevel */
        50u, /* P2ServerMax(ms) */
        5000u, /* P2StarServerMax(ms) */
    },
    /* &Dcm_DspSessionRow[1] */
    {
        DCM_SYS_BOOT, /* SessionForBoot */
        2u, /* SessionLevel */
        50u, /* P2ServerMax(ms) */
        5000u, /* P2StarServerMax(ms) */
    },
    /* &Dcm_DspSessionRow[2] */
    {
        DCM_NO_BOOT, /* SessionForBoot */
        3u, /* SessionLevel */
        50u, /* P2ServerMax(ms) */
        5000u, /* P2StarServerMax(ms) */
    },
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"


