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
 * @file        : NvM_Lcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Link time definitions of NvM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "Dem_Cbk.h"
#include "NvM_Types.h"
#include "NvM_Lcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
#define NVM_START_SEC_CONFIG_DATA_PTR
#include "NvM_MemMap.h"
/**
 * @brief Container for NvmMultiBlockCallback
 */
/* PRQA S 1502 ++ */ /* VL_NvM_1502 */
const NvM_MultiBlockCallbackType NvmMultiBlockCallback = NULL_PTR;
/* PRQA S 1502 -- */
#define NVM_STOP_SEC_CONFIG_DATA_PTR
#include "NvM_MemMap.h"

/* PRQA S 3132 ++ */ /* VL_QAC_MagicNum */
/* PRQA S 1504,1751 ++ */ /* VL_QAC_OneRefSymbol */

#define NVM_START_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
uint32 NvMCrcBuf_NvMBlock_ConfigID[1];
#define NVM_STOP_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
#define NVM_START_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
uint32 NvMCrcBuf_NvMBlock_Primary_0[1];
#define NVM_STOP_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
#define NVM_START_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
uint32 NvMCrcBuf_NvMBlock_AdminData[1];
#define NVM_STOP_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
#define NVM_START_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
uint32 NvMCrcBuf_NvMBlock_EventStatusData[1];
#define NVM_STOP_SEC_VAR_CLEARED_32
#include "NvM_MemMap.h"
/* PRQA S 3132 -- */
/* PRQA S 1504,1751 -- */


#define NVM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "NvM_MemMap.h"
/**
 * @brief Container for a management structure to configure the composition of a given NVRAM Block Management Type
 */
/* PRQA S 1334 ++ */ /* VL_NvM_1334 */
const NvM_BlockDescriptorType NvM_BlockDescriptor[NVM_BLOCK_NUM_ALL] =
{
    /** NvMBlock_ConfigID */
    {
        0u,        /** NvMNvramDeviceId */
        NVM_BLOCK_REDUNDANT,    /** NvmBlockManagementType */
        2u,    /** NvmNvBlockNum */
        0u,    /** NvmRomBlockNum */
        3u, /** NvMMaxNumOfReadRetries */
        3u,  /** NvMMaxNumOfWriteRetries */
        NVM_CRC16,        /** NvmBlockCRCType */
        /*
         * Bit 0:NvmWriteBlockOnce
         * Bit 1:NvmBlockWriteProt
         * Bit 2:NvmCalcRamBlockCrc
         * Bit 3:NvmResistantToChangedSw
         * Bit 4:NvmSelectBlockForReadall
         * Bit 5:NvmSelectBlockForWriteall
         * Bit 6:NvMStaticBlockIDCheck
         * Bit 7:NvMWriteVerification
         * Bit 8:NvMBlockUseAutoValidation
         * Bit 9:NvMBlockUseCRCCompMechanism
         * Bit 10:NvMBlockUseSetRamBlockStatus
         * Bit 11:NvMBlockUseSyncMechanism
         * Bit 12:NvMBswMBlockStatusInformation
         * Bit 13:NvMSelectBlockForFirstInitAll
         * BIt 14:NvMBlockUseCompression
         */
        0x203cu, /** FlagGroup */
        1u,   /** NvmNvBlockBaseNumber */
        2u,    /** NvmNvBlockLength */
        0u, /** NvMWriteVerificationDataSize */
        0u, /** RepairIndex */
        /* PRQA S 3432, 0306++ */ /* VL_NvM_3432, VL_NvM_0306 */
        NvMCrcBuf_NvMBlock_ConfigID,    /** NvmBlockCrcBuffAddress */
        (uint8*) g_NvMConfigIdBuf,    /** NvMRamBlockDataAddress */
        NULL_PTR,   /** NvMRomBlockDataAddress */
        /* PRQA S 3432, 0306 -- */
        NULL_PTR,   /** NvMInitBlockCallback */
        NULL_PTR,   /** NvMSingleBlockCallback */
        NULL_PTR,   /** NvM_ReadRamBlockFromNvmCallbackType */
        NULL_PTR,   /** NvM_WriteRamBlockToNvmCallbackType */
    },
    /** NvMBlock_VIN */
    {
        0u,	        /** NvMNvramDeviceId */
        NVM_BLOCK_NATIVE,    /** NvmBlockManagementType */
        1u,    /** NvmNvBlockNum */
        0u,    /** NvmRomBlockNum */
        3u, /** NvMMaxNumOfReadRetries */
        3u,  /** NvMMaxNumOfWriteRetries */
        NVM_CRC_NOT_USED,        /** NvmBlockCRCType */
        /*
         * Bit 0:NvmWriteBlockOnce
         * Bit 1:NvmBlockWriteProt
         * Bit 2:NvmCalcRamBlockCrc
         * Bit 3:NvmResistantToChangedSw
         * Bit 4:NvmSelectBlockForReadall
         * Bit 5:NvmSelectBlockForWriteall
         * Bit 6:NvMStaticBlockIDCheck
         * Bit 7:NvMWriteVerification
         * Bit 8:NvMBlockUseAutoValidation
         * Bit 9:NvMBlockUseCRCCompMechanism
         * Bit 10:NvMBlockUseSetRamBlockStatus
         * Bit 11:NvMBlockUseSyncMechanism
         * Bit 12:NvMBswMBlockStatusInformation
         * Bit 13:NvMSelectBlockForFirstInitAll
         * BIt 14:NvMBlockUseCompression
         */
        0x2038u, /** FlagGroup */
        2u,    /** NvmNvBlockBaseNumber */
        24u,    /** NvmNvBlockLength */
        0u, /** NvMWriteVerificationDataSize */
        0u, /** RepairIndex */
        /* PRQA S 3432, 0306++ */ /* VL_NvM_3432, VL_NvM_0306 */
        NULL_PTR,    /** NvmBlockCrcBuffAddress */
        (uint8*) g_NvMVinBuffer,    /** NvMRamBlockDataAddress */
        NULL_PTR,       /** NvMRomBlockDataAddress */
        /* PRQA S 3432, 0306 -- */
        NULL_PTR,       /** NvMInitBlockCallback */
        NULL_PTR,    /** NvmSingleBlockCallback */
        NULL_PTR,       /** NvM_ReadRamBlockFromNvmCallbackType */
        NULL_PTR,       /** NvM_WriteRamBlockToNvmCallbackType */
    },
    /** NvMBlock_Primary_0 */
    {
        0u,	        /** NvMNvramDeviceId */
        NVM_BLOCK_NATIVE,    /** NvmBlockManagementType */
        1u,    /** NvmNvBlockNum */
        0u,    /** NvmRomBlockNum */
        3u, /** NvMMaxNumOfReadRetries */
        3u,  /** NvMMaxNumOfWriteRetries */
        NVM_CRC16,        /** NvmBlockCRCType */
        /*
         * Bit 0:NvmWriteBlockOnce
         * Bit 1:NvmBlockWriteProt
         * Bit 2:NvmCalcRamBlockCrc
         * Bit 3:NvmResistantToChangedSw
         * Bit 4:NvmSelectBlockForReadall
         * Bit 5:NvmSelectBlockForWriteall
         * Bit 6:NvMStaticBlockIDCheck
         * Bit 7:NvMWriteVerification
         * Bit 8:NvMBlockUseAutoValidation
         * Bit 9:NvMBlockUseCRCCompMechanism
         * Bit 10:NvMBlockUseSetRamBlockStatus
         * Bit 11:NvMBlockUseSyncMechanism
         * Bit 12:NvMBswMBlockStatusInformation
         * Bit 13:NvMSelectBlockForFirstInitAll
         * BIt 14:NvMBlockUseCompression
         */
        0x538u, /** FlagGroup */
        3u,    /** NvmNvBlockBaseNumber */
        8u,    /** NvmNvBlockLength */
        0u, /** NvMWriteVerificationDataSize */
        0u, /** RepairIndex */
        /* PRQA S 3432, 0306++ */ /* VL_NvM_3432, VL_NvM_0306 */
        NvMCrcBuf_NvMBlock_Primary_0,    /** NvmBlockCrcBuffAddress */
        (uint8*) &Dem_GetMemoryEntry()[0],    /** NvMRamBlockDataAddress */
        NULL_PTR,       /** NvMRomBlockDataAddress */
        /* PRQA S 3432, 0306 -- */
        NULL_PTR,       /** NvMInitBlockCallback */
        Dem_NvMJobFinished,    /** NvmSingleBlockCallback */
        NULL_PTR,       /** NvM_ReadRamBlockFromNvmCallbackType */
        NULL_PTR,       /** NvM_WriteRamBlockToNvmCallbackType */
    },
    /** NvMBlock_AdminData */
    {
        0u,	        /** NvMNvramDeviceId */
        NVM_BLOCK_NATIVE,    /** NvmBlockManagementType */
        1u,    /** NvmNvBlockNum */
        0u,    /** NvmRomBlockNum */
        3u, /** NvMMaxNumOfReadRetries */
        3u,  /** NvMMaxNumOfWriteRetries */
        NVM_CRC16,        /** NvmBlockCRCType */
        /*
         * Bit 0:NvmWriteBlockOnce
         * Bit 1:NvmBlockWriteProt
         * Bit 2:NvmCalcRamBlockCrc
         * Bit 3:NvmResistantToChangedSw
         * Bit 4:NvmSelectBlockForReadall
         * Bit 5:NvmSelectBlockForWriteall
         * Bit 6:NvMStaticBlockIDCheck
         * Bit 7:NvMWriteVerification
         * Bit 8:NvMBlockUseAutoValidation
         * Bit 9:NvMBlockUseCRCCompMechanism
         * Bit 10:NvMBlockUseSetRamBlockStatus
         * Bit 11:NvMBlockUseSyncMechanism
         * Bit 12:NvMBswMBlockStatusInformation
         * Bit 13:NvMSelectBlockForFirstInitAll
         * BIt 14:NvMBlockUseCompression
         */
        0x538u, /** FlagGroup */
        4u,    /** NvmNvBlockBaseNumber */
        8u,    /** NvmNvBlockLength */
        0u, /** NvMWriteVerificationDataSize */
        0u, /** RepairIndex */
        /* PRQA S 3432, 0306++ */ /* VL_NvM_3432, VL_NvM_0306 */
        NvMCrcBuf_NvMBlock_AdminData,    /** NvmBlockCrcBuffAddress */
        (uint8*) &Dem_GetAdminData(),    /** NvMRamBlockDataAddress */
        NULL_PTR,       /** NvMRomBlockDataAddress */
        /* PRQA S 3432, 0306 -- */
        Dem_NvMInitAdminData,       /** NvMInitBlockCallback */
        Dem_NvMJobFinished,    /** NvmSingleBlockCallback */
        NULL_PTR,       /** NvM_ReadRamBlockFromNvmCallbackType */
        NULL_PTR,       /** NvM_WriteRamBlockToNvmCallbackType */
    },
    /** NvMBlock_EventStatusData */
    {
        0u,	        /** NvMNvramDeviceId */
        NVM_BLOCK_NATIVE,    /** NvmBlockManagementType */
        1u,    /** NvmNvBlockNum */
        0u,    /** NvmRomBlockNum */
        3u, /** NvMMaxNumOfReadRetries */
        3u,  /** NvMMaxNumOfWriteRetries */
        NVM_CRC16,        /** NvmBlockCRCType */
        /*
         * Bit 0:NvmWriteBlockOnce
         * Bit 1:NvmBlockWriteProt
         * Bit 2:NvmCalcRamBlockCrc
         * Bit 3:NvmResistantToChangedSw
         * Bit 4:NvmSelectBlockForReadall
         * Bit 5:NvmSelectBlockForWriteall
         * Bit 6:NvMStaticBlockIDCheck
         * Bit 7:NvMWriteVerification
         * Bit 8:NvMBlockUseAutoValidation
         * Bit 9:NvMBlockUseCRCCompMechanism
         * Bit 10:NvMBlockUseSetRamBlockStatus
         * Bit 11:NvMBlockUseSyncMechanism
         * Bit 12:NvMBswMBlockStatusInformation
         * Bit 13:NvMSelectBlockForFirstInitAll
         * BIt 14:NvMBlockUseCompression
         */
        0x538u, /** FlagGroup */
        5u,    /** NvmNvBlockBaseNumber */
        12u,    /** NvmNvBlockLength */
        0u, /** NvMWriteVerificationDataSize */
        0u, /** RepairIndex */
        /* PRQA S 3432, 0306++ */ /* VL_NvM_3432, VL_NvM_0306 */
        NvMCrcBuf_NvMBlock_EventStatusData,    /** NvmBlockCrcBuffAddress */
        (uint8*) &Dem_GetEventStatusData(),    /** NvMRamBlockDataAddress */
        NULL_PTR,       /** NvMRomBlockDataAddress */
        /* PRQA S 3432, 0306 -- */
        Dem_NvMInitStatusData,       /** NvMInitBlockCallback */
        Dem_NvMJobFinished,    /** NvmSingleBlockCallback */
        NULL_PTR,       /** NvM_ReadRamBlockFromNvmCallbackType */
        NULL_PTR,       /** NvM_WriteRamBlockToNvmCallbackType */
    },
};
/* PRQA S 1334 -- */
#define NVM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "NvM_MemMap.h"



#define NVM_START_SEC_VAR_CLEARED_8
#include "NvM_MemMap.h"
/**
 * @brief Buffer of NVRAM block @range NA
 */
/* PRQA S 1531,1533 ++ */ /* VL_QAC_OneRefSymbol */
uint8 NvM_RamMirrorBuffer[NVM_MAX_LENGTH_NV_BLOCK + NVM_NV_CRC_MAX_LENGTH];
/* PRQA S 1531,1533 -- */
#define NVM_STOP_SEC_VAR_CLEARED_8
#include "NvM_MemMap.h"

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

