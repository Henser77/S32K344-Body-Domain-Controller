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
 * @file        : PduR_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Post-Build configuration parameter of IpduM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef PDUR_PBCFG_H_
#define PDUR_PBCFG_H_

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */

#define PDUR_NUMBER_OF_QUEUES               0u
#define PDUR_NUM_OF_QUEUES_DEPTH_SUM        0u

#define PDUR_SRC_PDU_SUM                    10u
#define PDUR_DEST_PDU_SUM                   12u

#define PDUR_ROUTING_PATH_GROUP_SUM         0u

#define PDUR_DEFAULT_VALUE_PDU              0u
#define PDUR_DEFAULT_VALUE_LENGTH           0u

/* PRQA S 0793, 0791 ++ */ /* VL_PduR_0793, VL_PduR_0791 */
#define PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can0_0x123      0u
#define PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can0_0x120      1u
#define PduRConf_PduRSrcPdu_SrcPdu_CanTpRx_Can0_0x7E0      2u
#define PduRConf_PduRSrcPdu_SrcPdu_DcmTx_Can0      3u
#define PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x200      4u
#define PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x210      5u
#define PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x100      6u
#define PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x110      7u
#define PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can1_0x201      8u
#define PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can2_0x101      9u

#define PduRConf_PduRDestPdu_DestPdu_ComRx_Can0_0x120      0u
#define PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can0_0x123      1u
#define PduRConf_PduRDestPdu_DestPdu_DcmRx_Can0      2u
#define PduRConf_PduRDestPdu_DestPdu_CanTpTx_Can0_0x7E8      3u
#define PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x101      4u
#define PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x123      5u
#define PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x123      6u
#define PduRConf_PduRDestPdu_DestPdu_ComRx_Can1_0x200      7u
#define PduRConf_PduRDestPdu_DestPdu_ComRx_Can1_0x210      8u
#define PduRConf_PduRDestPdu_DestPdu_ComRx_Can2_0x100      9u
#define PduRConf_PduRDestPdu_DestPdu_ComRx_Can2_0x110      10u
#define PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x201      11u

/* PRQA S 0793, 0791 -- */ /* VL_PduR_0793, VL_PduR_0791 */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
/**
 * @brief PduR basic configuration, provided to BswM for initialization
 */

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
extern const struct PduR_PBConfigTypeTag PduR_Config; /* PRQA S 3313 */ /* VL_QAC_3313 */
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif

