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
 * @file        : Fee_Lcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Link time declaration of Fee
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef FEE_LCFG_H
#define FEE_LCFG_H
/* =================================================== inclusions =================================================== */
#include "Fee_Cfg.h"
#include "Fee_InternalTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */
/**
 * @brief Fee module Cluster config type
 */
typedef struct
{
    Fee_AddressType FeeClusterStartAddr; /* Start address of the Cluster */
    Fee_LengthType FeeClusterLength;     /* The Cluster length */
} Fee_ClusterConfigType;

typedef struct
{
    const Fee_ClusterConfigType* ClusterPtr; /**< Pointer to array of Fee cluster configurations */
    uint32 ClusterCount;                     /**< Number of clusters in cluster group */
} Fee_ClusterGroupType;

/**
 * @brief Fee module block config type
 */
typedef struct
{
    boolean FeeImmediateData; /* Marker for high priority data */
    uint16 AddressAreaId; /* Referenced MemAcc address area id in MemAccAddressAreaConfiguration */
    uint16 FeeBlockNumber;    /* Block identifier (handle) */
    uint16 FeeBlockSize;      /* Size of a logical block in bytes */
    uint8 ClusterGrp;         /*Index of Cluster group the Fee block belongs to */
} Fee_BlockConfigType;

/**
 * @brief     Fee module config type
 */
typedef struct
{
    uint16 FeeBlockSum;                     /* Block identifier (handle) */
    const Fee_BlockConfigType* FeeBlockRef; /* Every block configuration */
} Fee_ConfigType;

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
#define FEE_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"
extern Fee_ClusterManageType Fee_ClusterGrpInfo[1u];
#define FEE_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"

/**
 * @brief Used to record the management data of each Block
 */
#define FEE_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"
extern Fee_BlockManageType Fee_BlockInfo[7]; /* PRQA S 3132 */ /* VL_Fee_3132 */
#define FEE_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Fee_MemMap.h"

/**
 * @brief Container for cluster group information
 */
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
extern const Fee_ClusterGroupType Fee_ClusterGroupConfig[1];
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/**
 * @brief Container for config information
 */
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
extern const Fee_ConfigType     Fee_Config;
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
/**
 * @brief        Get the address area Id
 * @param[in]    blockId: The uniquely block identifier
 * @reentrant    Non Reentrant
 * @synchronous  TRUE
 * @return       uint16
 */
FEE_LOCAL_INLINE uint16 Fee_GetAddrAreaId(uint16 blockId)
{
    return Fee_Config.FeeBlockRef[blockId].AddressAreaId;
}


/**
 * @brief        alignment to virtual page size
 * @param[in]    BlockSize: request block size
 * @return       Fee_LengthType
 * @reentrant    Non Reentrant
 * @synchronous  TRUE
 */
FEE_LOCAL_INLINE Fee_LengthType Fee_AlignToVirtualPageSize(Fee_LengthType BlockSize)
{
    Fee_LengthType Retval = 0U;

    /** Check whether the block size is integer multiple of FEE_VIRTUALPAGE_SIZE */
    if (0U == (BlockSize % FEE_VIRTUALPAGE_SIZE))
    {
        /** block size is an integer multiple of FEE_VIRTUALPAGE_SIZE */
        Retval = BlockSize;
    }
    else
    {
        Retval = ((BlockSize / FEE_VIRTUALPAGE_SIZE) + 1U) * FEE_VIRTUALPAGE_SIZE;
    }

    return Retval;
}

/**
 * @brief        Request read job to low layer
 * @param[in]    areaId: Numeric identifier of address area
 * @param[in]    SourceAddress: Read address in logical address space
 * @param[in]    Length: Read length in bytes (aligned to read page size)
 * @param[out]   TargetAddressPtr: Destination memory pointer to store the read data
 * @return       Std_ReturnType
 * @retval       E_OK: The requested job has been accepted by the module
 * @retval       E_NOT_OK: The requested job has not been accepted by the module
 * @reentrant    Non Reentrant
 * @synchronous  FALSE
 */
FEE_LOCAL_INLINE Std_ReturnType
    Fee_ReadJobReq(uint16 areaId, Fee_AddressType SourceAddress, uint8* TargetAddressPtr, Fee_LengthType Length)
{
    Std_ReturnType retVal;
    Fee_LengthType alignLength = Fee_AlignToVirtualPageSize(Length);
    retVal = MemAcc_Read(areaId, SourceAddress, (MemAcc_DataType*)TargetAddressPtr, alignLength);
    return retVal;
}

/**
 * @brief        Request write job to low layer
 * @param[in]    areaId: Numeric identifier of address area
 * @param[in]    TargetAddress: Write address in logical address space
 * @param[in]    SourceAddressPtr: Source data pointer (aligned to BufferAlignmentValue)
 * @param[in]    Length: Write length in bytes (aligned to page size)
 * @return       Std_ReturnType
 * @retval       E_OK: The requested job has been accepted by the module
 * @retval       E_NOT_OK: The requested job has not been accepted by the module
 * @reentrant    Non Reentrant
 * @synchronous  FALSE
 */
FEE_LOCAL_INLINE Std_ReturnType
    Fee_WriteJobReq(uint16 areaId, Fee_AddressType TargetAddress, const uint8* SourceAddressPtr, Fee_LengthType Length)
{
    Std_ReturnType retVal;
    Fee_LengthType alignLength = Fee_AlignToVirtualPageSize(Length);
    retVal = MemAcc_Write(areaId, TargetAddress, (MemAcc_DataType*)SourceAddressPtr, alignLength);
    return retVal;
}

/**
 * @brief        Request erase job to low layer
 * @param[in]    areaId: Numeric identifier of address area
 * @param[in]    TargetAddress: Erase address in logical address space
 * @param[in]    Length: Erase length in bytes (aligned to sector size)
 * @return       Std_ReturnType
 * @retval       E_OK: The requested job has been accepted by the module
 * @retval       E_NOT_OK: The requested job has not been accepted by the module
 * @reentrant    Non Reentrant
 * @synchronous  FALSE
 */
FEE_LOCAL_INLINE Std_ReturnType Fee_EraseJobReq(uint16 areaId, Fee_AddressType TargetAddress, Fee_LengthType Length)
{
    Std_ReturnType retVal;
    Fee_LengthType alignLength = Fee_AlignToVirtualPageSize(Length);
    retVal = MemAcc_Erase(areaId, TargetAddress, alignLength);
    return retVal;
}


/**
 * @brief        Get job result from low layer
 * @param[in]    areaId: Numeric identifier of address area
 * @return       MemIf_JobResultType
 * @retval       MEMIF_JOB_OK: The job has been finished successfully
 * @retval       MEMIF_JOB_FAILED: The job has not been finished successfully
 * @retval       MEMIF_JOB_PENDING: The job has not yet been finished
 * @retval       MEMIF_JOB_CANCELED: The job has been canceled
 * @retval       MEMIF_BLOCK_INCONSISTENT: The requested block is inconsistent
 * @retval       MEMIF_BLOCK_INVALID: The requested block has been marked as invalid
 * @reentrant    Non Reentrant
 * @synchronous  TRUE
 */
FEE_LOCAL_INLINE MemIf_JobResultType Fee_GetJobResultJobReq(uint16 areaId)
{
    MemIf_JobResultType jobResult;
    MemAcc_JobStatusType jobMemAccStatus = MemAcc_GetJobStatus(areaId);
    if (jobMemAccStatus == MEMACC_JOB_PENDING)
    {
        /** The Mem driver job is still processing */
        jobResult = MEMIF_JOB_PENDING;
    }
    else
    {
        MemAcc_JobResultType jobMemAccResult = MemAcc_GetJobResult(areaId);
        jobResult = ((jobMemAccResult == MEMACC_OK) || (jobMemAccResult == MEMACC_ECC_CORRECTED))
                        ? MEMIF_JOB_OK
                        : (((jobMemAccResult == MEMACC_FAILED) || (jobMemAccResult == MEMACC_ECC_UNCORRECTED))
                               ? MEMIF_JOB_FAILED
                               : ((jobMemAccResult == MEMACC_CANCELED)
                                      ? MEMIF_JOB_CANCELED
                                      : ((jobMemAccResult == MEMACC_INCONSISTENT) ? MEMIF_BLOCK_INCONSISTENT
                                                                                  : (MEMIF_BLOCK_INVALID))));
    }
    return jobResult;
}

#ifdef __cplusplus
}
#endif
#endif
