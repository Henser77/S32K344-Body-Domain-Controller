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
 * @file        : 3.0.0
 * @licence     : 
 * @date        : Configuration parameter of MemAcc
 * @customer    : EasyXMen
 * @description : MemAcc_Pbcfg.c
 * @generator   : AUTOSAR classic Platform 2026-11-19 22:11:05
 * @toolVersion : R23_11
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "MemAcc_Pbcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
/* PRQA S 3120 ++ */ /* VL_QAC_MagicNum */

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for SectorBatch Reference
 * @range NA
 */
static const MemAcc_SecBatType MemAcc_SectorBatchRef[] =
{
    {
        /** MemSectorBatch_0 */
        2u, /** Number of config sectors */
        8192u, /** Erase size of a sector */
        1u, /** Minimum read size */
        8u, /** Write size of a page */
        0u, /** Specified erase cycles */
        0u, /** Erase burst size */
        0u, /** Max read size */
        0u, /** Write burst size */
        0xffffffffu, /** Erased value */
        0u, /** Mem instance ID */
        0x10000000u, /** Mem start address */
        0x4000u /** Mem length */
    },
};
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

 

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for SubAddress area information
 * @range NA
 */
static const MemAcc_SubAddrAreaType MemAcc_SubAddressAreaCfg[] =
{
    {
        /** MemAccSubAddressAreaConfiguration */
        0u, /** Hardware device ID */
        0u, /** Read retries */
        0u, /** Erase retries */
        0u, /** Write retries */
        /** bit0: UseEraseBurst
         *  bit1: UseWriteBurst
         *  bit2: UseReadBurst */
        0x0u, /** Burst flag*/
        0u, /** index  */
        2u, /** Total sector number */
        0u, /** offset of sector */
        0x0u, /** Logical start address of the SubAddressArea */
        0x4000u /** Logical length */    },
};
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

 

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for address area information
 * @range NA
 */
static const MemAcc_AddrAreaType MemAcc_AddressAreaCfg[] =
{
    {
        /** MemAccAddressAreaConfiguration */
        8u, /** Buffer alignment value */
        0u, /** Address area Id */
        0u, /** Address area priority */
        0u, /** first */
        0u, /** last */
        NULL_PTR,/** End notification func */    },
};
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

 /* PRQA S 3120 -- */

/* ============================================ external data definitions =========================================== */

/* PRQA S 1502 ++ */ /* VL_MemAcc_1502 */
#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for the configuration information
 * @range NA
 */
const MemAcc_ConfigType MemAcc_Config =
{
    MEMACC_MAX_ADDRAREA_NUM, /** The max address area number */
    MemAcc_AddressAreaCfg, /** Referenced addressArea information */
    MemAcc_SubAddressAreaCfg,
    MemAcc_SectorBatchRef
};
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/* PRQA S 1502 -- */

 

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
