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
 * @file        : Fee_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Configuration parameter of Fee
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef FEE_CFG_H
#define FEE_CFG_H
/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#include "MemAcc.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
/** Defines used as the local keyword for variables or functions */
#if !defined(FEE_LOCAL)
#define FEE_LOCAL static /* PRQA S 3414 */ /* VL_QAC_FctLikeMacro */
#endif

/** Defines used as keyword for the local inline functions */
#if !defined(FEE_LOCAL_INLINE)
#define FEE_LOCAL_INLINE static inline
#endif

#if !defined(FEE_PARAM_UNUSED)
#define FEE_PARAM_UNUSED(x) (void)(x) /**< Defines used as keyword for the unused variables */
#endif

/** Defines whether the corresponding switches is enabled */
#define FEE_DEV_ERROR_DETECT STD_ON
#define FEE_POLLING_MODE STD_ON
#define FEE_VERSION_INFO_API STD_OFF
#define FEE_CANCEL_API STD_OFF
#define FEE_PAGE_DIRECT_WRITE_SUPPORT  STD_OFF
#define FEE_SET_MODE_SUPPORTED  STD_OFF
#define FEE_USED_MEMACC  STD_ON 
/** Defines the notification interface for Job End */
#define FEE_NVMJOBEND_NOTIFICATION

/** Defines the notification interface for Job Error */
#define FEE_NVMJOBERROR_NOTIFICATION

/** Defines the notification interface for Init Error */
#define FEE_INITERROR_NOTIFICATION

/** Defines the relative information for Fee Module*/
#define FEE_VIRTUALPAGE_SIZE 8u
#define FEE_MAX_BLOCK_SIZE 7u
#define FEE_ERASED_VALUE 0xFFu
#define FEE_BUFFER_SIZE 32u
#define FEE_MINIMUM_READ_PAGE_SIZE 1u
#define FEE_BUFFER_ALIGN_VALUE 0u

/** Defines the Cluster Group size */
#define FEE_MAX_CLUSTER_GROUP_SIZE 1u

/** Defines the Cluster size of per Cluster Group */
#define FEE_MAX_CLUSTER_SIZE_OF_CLUSTERGRP_0 2u

/** Defines the header size */
#define FEE_CLUSTER_HEADER_SIZE 24u
#define FEE_BLOCK_HEADER_SIZE 32u

/**
 * @name  FeeClusterGrpMacros
 * @{
 * @brief these macros define unique identifiers for referenced ClusterGroup for Fee.
 */
#define FeeConf_FeeClusterGrp_FeeClusterGrp  0u
/** @} */

#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0  0x1u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1  0x2u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2  0x3u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3  0x4u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_4  0x6u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_5  0x8u
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_6  0xau

/* ================================================ type definitions ================================================ */
/**
 * @brief     Low layer module type used in Fee
 */
typedef MemAcc_AddressType Fee_AddressType;
typedef MemAcc_LengthType Fee_LengthType;

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

#ifdef __cplusplus
}
#endif
#endif
