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
 * @file        : Fee_Lcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Configuration parameter of Fee
 * @generator   : AUTOSAR classic Platform R23_11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "Fee_Lcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
/* PRQA S 1531,3132 ++ */ /* VL_Fee_1531,VL_Fee_3132 */
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
static const Fee_BlockConfigType Fee_BlockConfig[7u];
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
/** Defines the configuration information of the Cluster */
static const Fee_ClusterConfigType Fee_ClusterConfig_FeeClusterGrp_0[2u] =
{
    {
        0u, /** FeeClusterStartAddr */
        8192u, /** FeeClusterLength */
    },
    {
        8192u, /** FeeClusterStartAddr */
        8192u, /** FeeClusterLength */
    },
};
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
const Fee_ClusterGroupType Fee_ClusterGroupConfig[1] =
{
    {
        &Fee_ClusterConfig_FeeClusterGrp_0[0],
        FEE_MAX_CLUSTER_SIZE_OF_CLUSTERGRP_0,
    },
};
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
/** Defines the configuration information of the Block */
static const Fee_BlockConfigType Fee_BlockConfig[7u] =
{
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x1u, /** FeeBlockNumber */
        0x18u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x2u, /** FeeBlockNumber */
        0x8u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x3u, /** FeeBlockNumber */
        0x8u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x4u, /** FeeBlockNumber */
        0x18u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x6u, /** FeeBlockNumber */
        0x10u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0x8u, /** FeeBlockNumber */
        0x10u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
    {
        FALSE, /** FeeImmediateData */
        0u, /** FeeMemAccAddressArea */
        0xau, /** FeeBlockNumber */
        0x10u, /** FeeBlockSize */
        FeeConf_FeeClusterGrp_FeeClusterGrp,/** ClusterGrp */
    },
};
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
/** Defines the configuration information of the Fee Module */
const Fee_ConfigType Fee_Config =
{
    7u, /** FeeBlockSum */
    &Fee_BlockConfig[0] /** FeeBlockRef */
};

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define FEE_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"
/**
 * @brief Container for cluster group information
 */
Fee_ClusterManageType Fee_ClusterGrpInfo[1u];
#define FEE_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"

#define FEE_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"
/**
 * @brief Container for block information
 */
Fee_BlockManageType Fee_BlockInfo[7u];

#define FEE_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"
/* PRQA S 1531,3132 -- */
/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
