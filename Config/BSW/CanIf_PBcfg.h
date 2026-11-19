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
 * @file        : CanIf_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration data for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef CANIF_PBCFG_H_
#define CANIF_PBCFG_H_

/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */
#define CANIF_CFG_H_AR_RELEASE_MAJOR_VERSION    4u
#define CANIF_CFG_H_AR_RELEASE_MINOR_VERSION    5u
#define CANIF_CFG_H_AR_RELEASE_REVISION_VERSION 0u
#define CANIF_CFG_H_SW_MAJOR_VERSION            2u
#define CANIF_CFG_H_SW_MINOR_VERSION            2u
#define CANIF_CFG_H_SW_PATCH_VERSION            2u

/* ===================================================== macros ===================================================== */
#define CANIF_VARIANT_NUMBER 1u

#define CANIF_DYNAMICTXPDU_MAX_NUMBER 0u
#define CANIF_DYNAMICTXPDU_NUMBER_PARTITION0 0u

#define CANIF_TXNOTIFSTATUS_MAX_NUMBER 0u
#define CANIF_TXNOTIFSTATUS_NUMBER_PARTITION0 0u

#define CANIF_UPCONFIRMTXPDU_MAX_NUMBER 3u
#define CANIF_UPCONFIRMTXPDU_NUMBER_PARTITION0 3u

#define CANIF_TXBYTEBUFFER_MAX_NUMBER 0u
#define CANIF_TXBYTEBUFFER_NUMBER_PARTITION0 0u

#define CANIF_TXPDUBUFFER_MAX_NUMBER 0u
#define CANIF_TXPDUBUFFER_NUMBER_PARTITION0 0u

#define CANIF_TXBUFFER_MAX_NUMBER 0u
#define CANIF_TXBUFFER_NUMBER_PARTITION0 0u


#define CANIF_RXNOTIFSTATUS_MAX_NUMBER 0u
#define CANIF_RXNOTIFSTATUS_NUMBER_PARTITION0 0u

#define CANIF_RXBYTEBUFFER_MAX_NUMBER 0u
#define CANIF_RXBYTEBUFFER_NUMBER_PARTITION0 0u

#define CANIF_RXBUFFER_MAX_NUMBER 0u
#define CANIF_RXBUFFER_NUMBER_PARTITION0 0u

#define CANIF_CTRLRUNTIME_MAX_NUMBER 3u
#define CANIF_CTRLRUNTIME_NUMBER_PARTITION0 3u

#define CANIF_TRCVRUNTIME_MAX_NUMBER 0u
#define CANIF_TRCVRUNTIME_NUMBER_PARTITION0 0u

#define CANIF_UPTXCONFIRMATION_API_NUMBER 3u

#define CANIF_UPTRIGGERTRANSMIT_API_NUMBER 0u

#define CANIF_RXPDUCANIDRANGE_NUMBER 7u

#define CANIF_UPRXINDICATION_API_NUMBER 3u

#define CANIF_HRHCANIDRANGE_NUMBER 0u





#define CANIF_HTH_NUMBER 9u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x123 0u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x7E8 1u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can0_0x500 2u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x123 3u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x201 4u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can1_0x500 5u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x123 6u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x101 7u
#define CanIfConf_CanIfHthCfg_CanIfHth_Can2_0x500 8u


#define CANIF_HRH_NUMBER 9u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x120 0u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x7E0 1u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can0_0x500 2u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x200 3u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x210 4u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x100 5u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x110 6u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can1_0x500 7u
#define CanIfConf_CanIfHrhCfg_CanIfHrh_Can2_0x500 8u

#define CANIF_TXBUFFER_CONFIG_MAX_NUMBER 0u
#define CANIF_TXBUFFER_CONFIG_NUMBER_PARTITION0 0u


#define CANIF_RXBUFFER_CONFIG_MAX_NUMBER 0u
#define CANIF_RXBUFFER_CONFIG_NUMBER_PARTITION0 0u


/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif

