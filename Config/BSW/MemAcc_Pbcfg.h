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
 * @date        : Link time declaration of MemAcc
 * @customer    : EasyXMen
 * @description : MemAcc_Pbcfg.h
 * @generator   : AUTOSAR classic Platform 2026-11-20 13:51:02
 * @toolVersion : R23-11
 **********************************************************************************************************************/

#ifndef MEMACC_PBCFG_H
#define MEMACC_PBCFG_H

/* =================================================== inclusions =================================================== */
#include "MemAcc_Lcfg.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */
/**
 * @brief     Reference sector batch information
 */
typedef struct MemAcc_SecBatTypeTag
{
    uint16 MemSectorNum;            /**< Number of config sectors @range 0..0xFFFF */
    uint32 MemEraseSectorSize;      /**< The smallest erasable unit @range 0..0xFFFFFFFF */
    uint32 MemMinReadSize;          /**< Size of a read page @range 0..0xFFFFFFFF */
    uint32 MemWritePageSize;        /**< Size of a write page @range 0..0xFFFFFFFF */
    uint32 MemSpecifiedEraseCycles; /**< Number of erase cycles specified @range 0..0xFFFFFFFF */
    uint32 MemEraseBurstSize;       /**< Size of sector erase burst in bytes @range 0..0xFFFFFFFF */
    uint32 MemMaxReadSize;          /**< The maximum number of bytes within one Mem read request @range 0..0xFFFFFFFF */
    uint32 MemWriteBurstSize;       /**< Size of page write/program burst in bytes @range 0..0xFFFFFFFF */
    uint32 MemErasedValue;          /**< Erase value of the Mem @range 0..0xFFFFFFFF */
    MemAcc_MemInstanceIdType MemInstanceId; /**< The MemInstance container short name @range 0..0xFFFFFFFF */
    MemAcc_AddressType       MemStartAddr;  /**< Physical start address of the sector @range NA */
    MemAcc_LengthType        MemLength;     /**< The Sectors length @range NA */
} MemAcc_SecBatType;

/**
 * @brief     Config Sub address area information
 */
typedef struct MemAcc_SubAddressAreaCfgTypeTag
{
    uint8                    HardwareId;     /**< Hardware device ID @range 0..255 */
    uint8                    ReadRetryNum;  /**< Number of read retries @range 0..255 */
    uint8                    EraseRetryNum;  /**< Number of erase retries @range 0..255 */
    uint8                    WriteRetryNum;  /**< Number of write retries @range 0..0xFFFFFFFF */
    uint8                    UseBurstFlag;   /**< Burst flag @range 0..2 */
    uint16                   SecBatchIndex;  /**< Sector batch index @range 0..0xFFFF */
    uint32                   NumOfSectors;   /**< Number of physical sectors @range 0..0xFFFFFFFF */
    uint32                   SecOffset;      /**< The sector offset of the SubAddressArea @range 0..0xFFFFFFFF */
    MemAcc_AddressType       LogiStartAddr;  /**< Logical start address @range NA */
    MemAcc_LengthType        LogiLength;     /**< Logical length @range NA */
} MemAcc_SubAddrAreaType;

/**
 * @brief     Config address area information
 */
typedef struct MemAcc_AddressAreaCfgTypeTag
{
    uint8                         BufAlignValue;    /**< Buffer alignment value @range 0..255 */
    uint16                        AddrAreaId;       /**< Address area Id @range 0..0xFFFF */
    uint16                        AddrAreaPriority; /**< The priority of the AddressArea @range 0..0xFFFF */
    uint16                        FirstSubAddrArea; /**< First SubAddrArea index @range 0..0xFFFF */
    uint16                        LastSubAddrArea;  /**< Last SubAddrArea index @range 0..0xFFFF */
    MemAcc_AddrAreaJobEndNotiType JobEndNoti;       /**< Job end notification function @range NA */
} MemAcc_AddrAreaType;

/**
 * @brief     This config information
 */
typedef struct MemAcc_ConfigTypeTag
{
    uint16                        AddrAreaCfgNum; /**< The number of the configuration AddressArea @range 0..0xFFFF */
    const MemAcc_AddrAreaType*    AddrAreaCfg;    /**< Point to the configuration of AddressArea @range 0..NA */
    const MemAcc_SubAddrAreaType* SubAddrAreaCfg; /**< Point to the configuration sub address area @range NA */
    const MemAcc_SecBatType*      SectorBatchRef; /**< Reference Mem sector batch @range NA */
} MemAcc_ConfigType;

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/**
 * @brief Container for the configuration information
 * @range NA
 */
#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
extern const MemAcc_ConfigType MemAcc_Config;
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

 
/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

#ifdef __cplusplus
}
#endif
#endif
