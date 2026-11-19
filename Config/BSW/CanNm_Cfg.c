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
 * @file        : CanNm_Cfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Configuration data for CanNm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 1531, 1533, 1532, 3408 EOF */ /* VL_QAC_OneRefSymbol, VL_QAC_OneFunRef, VL_QAC_OneRefSymbol, VL_CanNm_3408 */
/* =================================================== inclusions =================================================== */
#include "CanNm.h"
#include "CanNm_Internal.h"
#include "ComM_Cfg.h"
#include "CanIf_Cfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
#define CANNM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL CanNm_InnerChannelType CanNm_ChRunTime_ComMChannel_Can0;
#define CANNM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL CanNm_InnerChannelType CanNm_ChRunTime_ComMChannel_Can1;
#define CANNM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL CanNm_InnerChannelType CanNm_ChRunTime_ComMChannel_Can2;
#define CANNM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"
const CanNm_ChannelLConfigType CanNm_ChannelLCfgData[CANNM_NUMBER_OF_CHANNEL] =
{
    {
        FALSE, /* CanNmActiveWakeupBitEnabled */
        1u, /* CanNmImmediateNmCycleTime */
        3u, /* CanNmImmediateNmTransmissions */
        50u, /* CanNmMsgCycleTime */
        TRUE, /* CanNmNodeIdEnabled */
        CANNM_PDU_BYTE_1, /* CanNmPduCbvPosition */
        CANNM_PDU_BYTE_0, /* CanNmPduNidPosition */
        100u, /* CanNmRepeatMessageTime */
        FALSE, /* CanNmStayInPbsEnabled */
        100u, /* CanNmTimeoutTime */
        150u, /* CanNmWaitBusSleepTime */
        ComMConf_ComMChannel_ComMChannel_Can0, /* CanNmComMNetworkHandleRef */
        &CanNm_ChRunTime_ComMChannel_Can0,
    },
    {
        FALSE, /* CanNmActiveWakeupBitEnabled */
        1u, /* CanNmImmediateNmCycleTime */
        3u, /* CanNmImmediateNmTransmissions */
        50u, /* CanNmMsgCycleTime */
        TRUE, /* CanNmNodeIdEnabled */
        CANNM_PDU_BYTE_1, /* CanNmPduCbvPosition */
        CANNM_PDU_BYTE_0, /* CanNmPduNidPosition */
        100u, /* CanNmRepeatMessageTime */
        FALSE, /* CanNmStayInPbsEnabled */
        100u, /* CanNmTimeoutTime */
        150u, /* CanNmWaitBusSleepTime */
        ComMConf_ComMChannel_ComMChannel_Can1, /* CanNmComMNetworkHandleRef */
        &CanNm_ChRunTime_ComMChannel_Can1,
    },
    {
        FALSE, /* CanNmActiveWakeupBitEnabled */
        1u, /* CanNmImmediateNmCycleTime */
        3u, /* CanNmImmediateNmTransmissions */
        100u, /* CanNmMsgCycleTime */
        TRUE, /* CanNmNodeIdEnabled */
        CANNM_PDU_BYTE_1, /* CanNmPduCbvPosition */
        CANNM_PDU_BYTE_0, /* CanNmPduNidPosition */
        100u, /* CanNmRepeatMessageTime */
        FALSE, /* CanNmStayInPbsEnabled */
        200u, /* CanNmTimeoutTime */
        150u, /* CanNmWaitBusSleepTime */
        ComMConf_ComMChannel_ComMChannel_Can2, /* CanNmComMNetworkHandleRef */
        &CanNm_ChRunTime_ComMChannel_Can2,
    },
};
#define CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL const CanNm_RxPduType CanNm_RxPduData[] =
{
    /* The CanNmRxPdu configuration of CanNmChannelConfig_Can0 in variant_Id:0 */
    {
        CanNmConf_CanNmRxPdu_CanNmRxPdu_Can0,
    },
    /* The CanNmRxPdu configuration of CanNmChannelConfig_Can1 in variant_Id:0 */
    {
        CanNmConf_CanNmRxPdu_CanNmRxPdu_Can1,
    },
    /* The CanNmRxPdu configuration of CanNmChannelConfig_Can2 in variant_Id:0 */
    {
        CanNmConf_CanNmRxPdu_CanNmRxPdu_Can2,
    },
};
#define CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL const CanNm_TxPduType CanNm_TxPduData[] =
{
    /* The CanNmTxPdu configuration of CanNmChannelConfig_Can0 in variant_Id:0 */
    {
        CanNmConf_CanNmTxPdu_CanNmTxPdu_Can0,
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x500,
        FALSE,
    },
    /* The CanNmTxPdu configuration of CanNmChannelConfig_Can1 in variant_Id:0 */
    {
        CanNmConf_CanNmTxPdu_CanNmTxPdu_Can1,
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x500,
        FALSE,
    },
    /* The CanNmTxPdu configuration of CanNmChannelConfig_Can2 in variant_Id:0 */
    {
        CanNmConf_CanNmTxPdu_CanNmTxPdu_Can2,
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x500,
        FALSE,
    },
};
#define CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"
CANNM_LOCAL const CanNm_ChannelPBConfigType CanNm_ChannelPBCfgData_0[] =
{
    {
        5u, /* CanNmMsgCycleOffset */
        0u, /* CanNmMsgTimeoutTime */
        1u, /* CanNmNodeId */
        8u, /* ChannelPduLength */
        &CanNm_RxPduData[0],
        1u,
        &CanNm_TxPduData[0],
    },
    {
        5u, /* CanNmMsgCycleOffset */
        0u, /* CanNmMsgTimeoutTime */
        2u, /* CanNmNodeId */
        8u, /* ChannelPduLength */
        &CanNm_RxPduData[1],
        1u,
        &CanNm_TxPduData[1],
    },
    {
        10u, /* CanNmMsgCycleOffset */
        0u, /* CanNmMsgTimeoutTime */
        3u, /* CanNmNodeId */
        8u, /* ChannelPduLength */
        &CanNm_RxPduData[2],
        1u,
        &CanNm_TxPduData[2],
    },
};
#define CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define CANNM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"
const CanNm_ConfigType CanNm_Config =
{
    CanNm_ChannelPBCfgData_0,
};
#define CANNM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanNm_MemMap.h"

/* ========================================== external function definitions ========================================= */
/* PRQA S 1512 ++ */ /* VL_CanNm_1512 */
#define CANNM_START_SEC_CODE
#include "CanNm_MemMap.h"
void CanNm_MainFunction_ComMChannel_Can0(void)
{
    CanNm_MainFunction(0u);
}
#define CANNM_STOP_SEC_CODE
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CODE
#include "CanNm_MemMap.h"
void CanNm_MainFunction_ComMChannel_Can1(void)
{
    CanNm_MainFunction(1u);
}
#define CANNM_STOP_SEC_CODE
#include "CanNm_MemMap.h"

#define CANNM_START_SEC_CODE
#include "CanNm_MemMap.h"
void CanNm_MainFunction_ComMChannel_Can2(void)
{
    CanNm_MainFunction(2u);
}
#define CANNM_STOP_SEC_CODE
#include "CanNm_MemMap.h"

/* PRQA S 1512 -- */
/* ========================================== internal function definitions ========================================= */
