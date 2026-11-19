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
 * @file        : CanIf_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration data for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* PRQA S 1531, 1533 EOF */ /* VL_QAC_OneRefSymbol */
/* PRQA S 1532 EOF */ /* VL_QAC_OneFunRef */
/* PRQA S 3132 EOF */ /* VL_QAC_MagicNum */
/* PRQA S 1502 EOF */ /* VL_CanIf_1502 */
/* PRQA S 2905 EOF */ /* VL_CanIf_2905 */
/* =================================================== inclusions =================================================== */
#include "CanIf_Cfg.h"
#include "CanIf_PBcfg.h"
#include "CanIf_Types.h"
#include "CanIf_CfgTypes.h"
#include "CanIf.h"
#include "CanNm.h"
#include "CanSM_CanIf.h"
#include "CanTp.h"
#include "CanTp_Cfg.h"
#include "PduR_PBcfg.h"
#include "PduR_CanIf.h"
#include "CanGeneral.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_RuntimeType CanIf_Runtime_Partition0;
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
CanIf_RuntimeType* const CanIf_Runtime
[CANIF_PARTITION_NUMBER] = {
    &CanIf_Runtime_Partition0,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"



#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_UpConfirmTxPduType CanIf_UpConfirmTxPdu_Partition0
[CANIF_UPCONFIRMTXPDU_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_UpConfirmTxPduPartitionType CanIf_UpConfirmTxPdu
[CANIF_PARTITION_NUMBER] = {
    {
        .UpConfirmTxPduNumber = CANIF_UPCONFIRMTXPDU_NUMBER_PARTITION0,
        .UpConfirmTxPduRef = CanIf_UpConfirmTxPdu_Partition0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"





#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_CtrlRuntimeType CanIf_CtrlRuntime_Partition0
[CANIF_CTRLRUNTIME_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
CanIf_CtrlRuntimeType* const CanIf_CtrlRuntime
[CANIF_PARTITION_NUMBER] = {
    CanIf_CtrlRuntime_Partition0,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIfTxPduUserTxConfirmationNameApiType CanIf_UpTxConfirmationArray
[CANIF_UPTXCONFIRMATION_API_NUMBER] = {
    &CanNm_TxConfirmation,
    &CanTp_TxConfirmation,
    &PduR_CanIfTxConfirmation,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_RxPduCanIdRangeType CanIf_RxPduCanIdRangeData
[CANIF_RXPDUCANIDRANGE_NUMBER] = {
    {
        .LowerCanId = 0x00000100u,
        .UpperCanId = 0x00000100u,
    },
    {
        .LowerCanId = 0x00000110u,
        .UpperCanId = 0x00000110u,
    },
    {
        .LowerCanId = 0x00000120u,
        .UpperCanId = 0x00000120u,
    },
    {
        .LowerCanId = 0x00000200u,
        .UpperCanId = 0x00000200u,
    },
    {
        .LowerCanId = 0x00000210u,
        .UpperCanId = 0x00000210u,
    },
    {
        .LowerCanId = 0x00000500u,
        .UpperCanId = 0x00000500u,
    },
    {
        .LowerCanId = 0x000007E0u,
        .UpperCanId = 0x000007E0u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIfRxPduUserRxIndicationNameApiType CanIf_UpRxIndicationArray
[CANIF_UPRXINDICATION_API_NUMBER] = {
    &CanNm_RxIndication,
    &CanTp_RxIndication,
    &PduR_CanIfRxIndication,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"





#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_HthConfigType CanIf_HthConfigData
[CANIF_HTH_NUMBER] = {
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x123 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 9u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x7E8 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 10u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x500 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 11u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x123 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 12u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x201 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 13u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x500 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 16u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x123 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 14u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x101 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 15u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x500 */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 17u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_HrhConfigType CanIf_HrhConfigData
[CANIF_HRH_NUMBER] = {
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x120 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 0u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x120 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x120,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x7E0 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 1u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x7E0 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x7E0,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x500 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 2u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x500,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x200 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 3u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x200 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x200,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x210 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 4u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x210 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x210,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x100 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 5u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x100 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x100,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x110 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 6u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x110 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x110,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x500 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 7u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x500,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x500 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 8u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x500,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_TxPduConfigType CanIf_TxPduConfigData
[CANIF_TXPDU_NUMBER] = {
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x123 */
        .CanIfTxPduCanId = 0x00000123u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x123,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can0_0x123,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (0u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(0u >> 3u)],
        .UpTxConfirmationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x7E8 */
        .CanIfTxPduCanId = 0x000007E8u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x7E8,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (1u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(1u >> 3u)],
        .UpTxConfirmationApiIndex = 1u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x500 */
        .CanIfTxPduCanId = 0x00000500u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x500,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = CanNmConf_CanNmTxPdu_CanNmTxPdu_Can0,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (2u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(2u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x123 */
        .CanIfTxPduCanId = 0x00000123u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x123,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x123,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (8u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(8u >> 3u)],
        .UpTxConfirmationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x201 */
        .CanIfTxPduCanId = 0x00000201u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x201,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x201,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (9u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(9u >> 3u)],
        .UpTxConfirmationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x500 */
        .CanIfTxPduCanId = 0x00000500u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x500,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = CanNmConf_CanNmTxPdu_CanNmTxPdu_Can1,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (10u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(10u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x123 */
        .CanIfTxPduCanId = 0x00000123u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x123,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x123,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (16u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(16u >> 3u)],
        .UpTxConfirmationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x101 */
        .CanIfTxPduCanId = 0x00000101u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x101,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x101,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (17u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(17u >> 3u)],
        .UpTxConfirmationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x500 */
        .CanIfTxPduCanId = 0x00000500u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x500,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = CanNmConf_CanNmTxPdu_CanNmTxPdu_Can2,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = CANIF_TXBUFFER_NUMBER_INVALID,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (18u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(18u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_RxPduConfigType CanIf_RxPduConfigData
[CANIF_RXPDU_NUMBER] = {
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x120 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x120,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can0_0x120,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 2u,
        .UpRxIndicationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x7E0 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x7E0,
        .CanIfUpPduId = CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 6u,
        .UpRxIndicationApiIndex = 1u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x500 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = TRUE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x500,
        .CanIfUpPduId = CanNmConf_CanNmRxPdu_CanNmRxPdu_Can0,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 5u,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x200 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x200,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x200,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 3u,
        .UpRxIndicationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x210 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x210,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x210,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 4u,
        .UpRxIndicationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x500 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = TRUE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x500,
        .CanIfUpPduId = CanNmConf_CanNmRxPdu_CanNmRxPdu_Can1,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 5u,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x100 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x100,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x100,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 0u,
        .UpRxIndicationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x110 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x110,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x110,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 1u,
        .UpRxIndicationApiIndex = 2u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x500 */
        .CanIfRxPduCanIdMask = 0x00000000u,
        .CanIfRxPduCanIdMasked = (0x00000000u & 0x00000000u),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = TRUE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x500,
        .CanIfUpPduId = CanNmConf_CanNmRxPdu_CanNmRxPdu_Can2,
        .RxMetaDataEnable = FALSE,
        .RxPduCanIdRangeIndex = 5u,
        .UpRxIndicationApiIndex = 0u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"




#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_CtrlPbConfigType CanIf_CtrlPbConfigData
[CANIF_CANCONTROLLER_NUMBER] = {
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0 */
        .PartitionIndex = 0u,
        .RuntimePtr = &CanIf_CtrlRuntime_Partition0[0u],
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x120,
        .TxPduIndexMaxExcluded = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x500 + 1u,
        .TxPduIndexMin = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x123,
    },
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1 */
        .PartitionIndex = 0u,
        .RuntimePtr = &CanIf_CtrlRuntime_Partition0[1u],
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x200,
        .TxPduIndexMaxExcluded = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x500 + 1u,
        .TxPduIndexMin = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x123,
    },
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2 */
        .PartitionIndex = 0u,
        .RuntimePtr = &CanIf_CtrlRuntime_Partition0[2u],
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x500 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x100,
        .TxPduIndexMaxExcluded = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x500 + 1u,
        .TxPduIndexMin = CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x123,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"


#if (STD_OFF == CANIF_RXINDICATION_AUTOSAR_PARAMETER)
#define CANIF_START_SEC_CONFIG_DATA_16
#include "CanIf_MemMap.h"
static const Can_HwHandleType CanIf_CanHoh2HrhId_0
[9u] = {
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x120,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x7E0,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x500,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x200,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x210,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x100,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x110,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x500,
    CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x500,
};
#define CANIF_STOP_SEC_CONFIG_DATA_16
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_CanHoh2HrhType CanIf_CanHoh2Hrh
[1u] = {
    {
        .CanHrhIdNumber = 9u,
        .CanHrhIdRef = CanIf_CanHoh2HrhId_0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
#endif


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_ConfigType CanIf_Config = {
    .TxPduConfigNumber = CANIF_TXPDU_NUMBER,
    .TxPduConfigRef = CanIf_TxPduConfigData,
    .HthConfigNumber = CANIF_HTH_NUMBER,
    .HthConfigRef = CanIf_HthConfigData,
    .RxPduConfigNumber = CANIF_RXPDU_NUMBER,
    .RxPduConfigRef = CanIf_RxPduConfigData,
    .HrhConfigNumber = CANIF_HRH_NUMBER,
    .HrhConfigRef = CanIf_HrhConfigData,
    .TxBufferConfigRef = NULL_PTR,
    .RxBufferConfigRef = NULL_PTR,
    .CtrlPbConfigRef = CanIf_CtrlPbConfigData,
#if (STD_OFF == CANIF_RXINDICATION_AUTOSAR_PARAMETER)
    .CanHoh2HrhRef = CanIf_CanHoh2Hrh,
#endif
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"



/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

