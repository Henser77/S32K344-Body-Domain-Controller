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
 * @file        : NvM_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile time definitions of NvM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef NVM_CFG_H
#define NVM_CFG_H

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
 
#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */
/** Enable some APIs which are related to NVM API configuration classes */
#define NVM_API_CONFIG_CLASS            NVM_API_CONFIG_CLASS_3

/** Defines whether the corresponding switches is enabled */
#define NVM_BSWM_MULTIBLOCK_JOBSTATUS_INFORMATION   STD_OFF
#define NVM_BSWM_SINGLEBLOCK_JOBSTATUS_INFORMATION      STD_OFF
#define NVM_DEV_ERROR_DETECT            STD_ON
#define NVM_DYNAMIC_CONFIGURATION       STD_OFF
#define NVM_JOB_PRIORITIZATION	        STD_OFF
#define NVM_POLLING_MODE            STD_ON
#define NVM_SET_RAM_BLOCK_STATUS_API            STD_ON
#define NVM_VERSION_INFO_API            STD_OFF

/** Size of the queue */
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE            (0u)
#define NVM_SIZE_STANDARD_JOB_QUEUE     (0x8u)

/** Configuration ID regarding the NV memory layout */
#define NVM_COMPILED_CONFIG_ID          (0x0u)

/** Defines the number of least significant bits which shall be used */
#define NVM_DATASET_SELECTION_BITS              (0x1u)

/** Defines the number of retries to copy data to or from the NvM module's mirror */
#define NVM_REPEAT_MIRROR_OPERATIONS            (0x0u)

#define NVM_NV_CRC_MAX_LENGTH 4U /**< Defines used as parameters for the CRC space byte size */

/** The Crc information */
#define NVM_INCLUDE_CRC             STD_ON
#define NVM_CRC_TYPE_8              STD_OFF
#define NVM_CRC_TYPE_16             STD_ON
#define NVM_CRC_TYPE_32             STD_OFF
#define NVM_CRC_NUM_OF_BYTES            (0xffffu)

/** Defines whether enable the Calc Ram Block Crc function */
#define NVM_CALC_RAM_BLOCK_CRC STD_ON

/** Defines whether enable the Resistant To Changed Sw function */
#define NVM_RESISTANT_TO_CHANGED_SW STD_ON

/** Defines whether enable the write verification function */
#define NVM_WRITE_VERIFY STD_OFF

/** Defines whether enable the static blockID function */
#define NVM_STATIC_BLOCKID_CHK STD_OFF

/** Defines whether enable the block Write Once function */
#define NVM_WRITE_BLOCK_ONCE STD_OFF

/** Defines whether enable the block Write Protection function */
#define NVM_BLOCK_WRITE_PROTECT STD_OFF

/** Defines whether enable the block Use Auto Validation function */
#define NVM_BLOCK_USE_AUTO_VALIDATION STD_ON

/** Defines whether enable the block Use Set Ram Block Status function */
#define NVM_BLOCK_USE_SET_RAMBLOCK_STATUS STD_ON

/** Defines whether enable the block Use CRC Compare Mechanism function */
#define NVM_BLOCK_USE_CRC_COMP_MECHANISM STD_OFF

/** Defines whether enable the block Use Sync Mechanism function */
#define NVM_BLOCK_USE_SYNC_MECHANISM STD_OFF

/** Defines whether enable the Select block for read all function */
#define NVM_SELECT_BLOCK_FOR_READ_ALL STD_ON

/** Defines whether enable the Select block for write all function */
#define NVM_SELECT_BLOCK_FOR_WRITE_ALL STD_ON

/** Defines whether enable the Select block for first init all function */
#define NVM_SELECT_BLOCK_FOR_FIRST_INIT_ALL STD_ON

/** Defines the Dem error reporting switches is enabled */
#define NVM_DEM_PRODUCTION_ERROR_DETECT            STD_OFF
#define NVM_DEM_E_HARDWARE           STD_OFF
#define NVM_DEM_E_INTEGRITY_FAILED   STD_OFF
#define NVM_DEM_E_LOSS_OF_REDUNDANCY STD_OFF
#define NVM_DEM_E_REQ_FAILED         STD_OFF
#define NVM_DEM_E_VERIFY_FAILED      STD_OFF
#define NVM_DEM_E_WRITE_PROTECTED    STD_OFF
#define NVM_DEM_E_WRONG_BLOCK_ID     STD_OFF

/** Defines the BlockCiphering information */
#define NVM_CIPHERING_ENABLE            STD_OFF

/** Defines the BlockCompression information */
#define NVM_COMPRESSION_ENABLE          STD_OFF

/** Defines the BlockPartition information */
#define NVM_MULTI_PARTITION         STD_OFF
#define NVM_ECUC_PARTITION_NUM               (0u)

/** The following definitions used to index NVM block for SW */
#define NvMConf_NvMBlockDescriptor_NvMBlock_VIN   2u
#define NvMConf_NvMBlockDescriptor_NvMBlock_Primary_0   3u
#define NvMConf_NvMBlockDescriptor_NvMBlock_AdminData   4u
#define NvMConf_NvMBlockDescriptor_NvMBlock_EventStatusData   5u

/** The total number of user configured */
#define NVM_BLOCK_NUM_ALL  5u
#define NVM_REDUNDANT_ALL  1u

/** The max length of the configured buffer */
#define NVM_MAX_LENGTH_CONFIGED_RAM_MIRROR      0u
#define NVM_MAX_LENGTH_NV_BLOCK 24u
#define NVM_MAX_LENGTH_REDUNDANT_BLOCK   2u


#define NVM_BUFFER_ALIGN_VALUE 0u

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif
#include "NvM_UserBuffer.h"
#endif

