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
 * @file        : CanTp_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Configuration parameter of CanTp
 * @generator   : AUTOSAR classic Platform R23_11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "CanTp_Cfg.h"
#include "CanTp_PBcfg.h"
#include "CanTp_Lcfg.h"
#include "CanIf_Cfg.h"
#include "PduR_PBcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
/* PRQA S 3120,3132,1759,4464 ++ */ /* VL_QAC_MagicNum,VL_CanTp_3132,VL_CanTp_1759,VL_CanTp_4464 */
#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief This container contains the configuration for RxNSdu
 * @range NA
 */
static const CanTp_RxNSduType CanTp_RxNSduCfg[1] =
{
{
/** &CanTp_RxNSduCfg[0] */
    PduRConf_PduRSrcPdu_SrcPdu_CanTpRx_Can0_0x7E0,  /**< RxIPduId */
    CANTP_CanTpRxNSdu_Diag, /**< CanTpRxNSduId */
    CANTP_CanTpRxNPdu_0, /**< CanTpRxNPduId */
    CANTP_CanTpTxFcNPdu_0,/**< CanTpTxFcNPduId */
    CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x7E8,/**< TxFcLPduId */
    1000u,/**< Ar */
    1000u,/**< Br */
    1000u,/**< Cr */
    255u,/**< CanTpRxWftMax */
    0u,/**< Bs */
    0xau,/**< STmin */
    CANTP_STANDARD,/**< CanTpRxAddressingFormat */
    CANTP_INVALID_U8,/**< NAe */
    CANTP_INVALID_U8,/**< Nsa */
    CANTP_INVALID_U8,/**< NTa */
    0x0u,/**< flag */
    8u,/**< RxNPduDLC */
    CANTP_PADDING_ON,/**< CanTpRxPaddingActivation */
    CANTP_PHYSICAL,/**< CanTpRxTaType */
},
};
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"


#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
 /**
 * @brief This container contains the configuration for TxNSdu
 * @range NA
 */
static const CanTp_TxNSduType CanTp_TxNSduCfg[1] =
{
{
    /** &CanTp_TxNSduCfg[0] */
    PduRConf_PduRDestPdu_DestPdu_CanTpTx_Can0_0x7E8, /**< TxIPduId */
    CANTP_CanTpTxNSdu_Diag,/**< TxNSduId */
    CANTP_CanTpTxNPdu_0,/**< TxNPduId */
    CANTP_CanTpRxFcNPdu_0,/**< RxFcNPduId */
    CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x7E8,/**< TxLPduId */
    1000u,/**< As */
    1000u,/**< Bs */
    1000u,/**< Cs */
    CANTP_STANDARD,/**< CanTpTxAddressingFormat */
    CANTP_INVALID_U8,/**< NAe */
    CANTP_INVALID_U8,/**< NSa */
    CANTP_INVALID_U8,/**< NTa */
    0x20u,/**< flag */
    8u,      /**< TxNPduDLC */
    CANTP_PADDING_ON,/**< CanTpTxPaddingActivation */
    CANTP_PHYSICAL,/**< CanTpTxTaType */
},
};
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"

#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
 /**
 * @brief Mapping relationship between RxNSdu and RxPdu configurations
 * @range NA
 */
static const CanTp_RxPduMapType CanTp_RxPduMap[1] =
{
{
    /** &CanTp_RxPdu[0] */
    0u, /**< RxSduCfgIdx */
    0u, /**< TxSduCfgIdx */
    CANTP_STANDARD,/**< AddressingFormat */
},
};
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"


#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief Mapping relationship between TxNSdu and TxPdu configurations
 * @range NA
 */
static const CanTp_TxPduMapType CanTp_TxPduMap[1] =
{
{
    /** &CanTp_TxPdu[0] */
    0u, /**< TxSduCfgIdx */
    0u, /**< RxSduCfgIdx */
    CANTP_STANDARD, /**< AddressingFormat */
},
};
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"




/* PRQA S 3408,1531++ */ /* VL_CanTp_3408,VL_CanTp_1531 */
#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief This type of the external data structure shall contain the post build initialization data for the CanTp.
 * @range NA
 */
const CanTp_ConfigType CanTp_Config =
{
    1u, /**< number of RxNSdu*/
    1u, /**< number of TxNSdu*/
    1u, /**< number of RxNPdu*/
    1u, /**< number of TxNPdu*/
    &CanTp_RxNSduCfg[0], /**< pointer to the configuration of RxNPdu*/
    &CanTp_TxNSduCfg[0], /**< pointer to the configuration of TxNSdu*/
    &CanTp_RxPduMap[0], /**< pointer to the configuration of RxNPdu*/
    &CanTp_TxPduMap[0], /**< pointer to the configuration of TxNPdu*/
};
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
/* PRQA S 3408,1531-- */
/* PRQA S 3120,3132,1759,4464 -- */
/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
