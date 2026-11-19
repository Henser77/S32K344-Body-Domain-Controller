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
 * @description : MemAcc_Lcfg.h
 * @generator   : AUTOSAR classic Platform 2026-11-19 22:11:05
 * @toolVersion : R23-11
 **********************************************************************************************************************/

#ifndef MEMACC_LCFG_H
#define MEMACC_LCFG_H

/* =================================================== inclusions =================================================== */
#include "MemAcc_Cfg.h"
#include "MemAcc_MemApi.h"
#include "Mem_43_INFLS.h"
#include "SchM_Mem_43_INFLS.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
#if (CPU_TYPE == CPU_TYPE_64)
typedef uint64 MemAcc_UintPtrType; /** Define the exactly type of a pointer */
#else
typedef uint32 MemAcc_UintPtrType; /** Define the exactly type of a pointer */
#endif


#define MEMACC_MEM_DRIVER_IDLE 0xFFFFu /** The Mem driver is idle after initialization */

#define MEMACC_MEMDRIVER_ABI_VERSION        0x01u /** ABI version of the Mem driver binary */
#define MEMACC_MEMDRIVER_RELOCATABLE_BINARY 0x01u /** The Mem driver binary is relocatable */

/* ================================================ type definitions ================================================ */
/**
 * @brief          Function pointer for the lockNotication function
 * @reentrant      Non Reentrant
 * @synchronous    TRUE
 * @trace          CPD-PLACEHOLDER
 */
typedef void (*MemAcc_AppLockNotiType)(void);

/**
 * @brief          Function pointer for the EndNotification function
 * @param[in]      addressAreaId: Numeric identifier of address area
 * @param[in]      jobResult: Request job result
 * @reentrant      Non Reentrant
 * @synchronous    TRUE
 * @trace          CPD-PLACEHOLDER
 */
typedef void (*MemAcc_AddrAreaJobEndNotiType)(MemAcc_AddressAreaIdType addressAreaId, MemAcc_JobResultType jobResult);

/**
 * @brief     Internal job status type
 */
typedef enum
{
    MEMACC_REQJOB_STOP,       /**< The job is stop or no request job @range 0x00 */
    MEMACC_REQJOB_STARTING,   /**< The job is pending to be processed @range 0x01 */
    MEMACC_REQJOB_PROCESSING, /**< The job is being processed @range 0x02 */
    MEMACC_REQJOB_RETRYING,   /**< The job is attempting a retry after a failure @range 0x03 */
    MEMACC_REQJOB_SUSPENDING, /**< The job is being suspended @range 0x04 */
    MEMACC_REQJOB_RESUMING,   /**< The job is being resumed @range 0x05 */
    MEMACC_REQJOB_CANCELING   /**< The job is being canceled @range 0x06 */
} MemAcc_ReqJobStateType;

/**
 * @brief     Lock address area status type
 */
typedef enum
{
    MEMACC_UNLOCK,  /**< The address area is unlock @range 0x00 */
    MEMACC_LOCKING, /**< The address area is locking @range 0x01 */
    MEMACC_LOCKED   /**< The address area is locked @range 0x02 */
} MemAcc_LockStatusType;

/**
 * @brief     Lock address area status type
 */
typedef enum
{
    MEMACC_UNINIT, /**< @range 0x00 */
    MEMACC_INIT,   /**< @range 0x01 */
    MEMACC_DEINIT  /**< @range 0x02 */
} MemAcc_StatusType;

/**
 * @brief     Mem driver invocation type
 */
typedef enum
{
    MEMACC_DIRECT_STATIC, /**< Mem driver is linked with application. Mem_Init is called by EcuM and Mem_MainFunction is
                             triggered by SchM @range 0x00 */
    MEMACC_INDIRECT_DYNAMIC, /**< Mem driver is linked as a separate binary and is dynamically activated. Call of
                                Mem_Init and Mem_MainFunction is handled by MemAcc @range 0x01 */
    MEMACC_INDIRECT_STATIC /**< Mem driver is linked with application. Call of Mem_Init and Mem_MainFunction is handled
                              by MemAcc @range 0x02 */
} MemAcc_MemInvocationType;

/**
 * @brief     Block Descriptor Flag type enum type define
 */
typedef enum
{
    MEMACC_ERASE_BURST, /**< Defines erase burst type @range 0x00 */
    MEMACC_WRITE_BURST, /**< Defines write burst type @range 0x01 */
    MEMACC_READ_BURST   /**< Defines read burst type @range 0x02 */
} MemAcc_BurstFlagType;

/**
 * @brief     Lock notification union type definition
 */
/* PRQA S 0750 ++ */ /* VL_MemAcc_0750 */
typedef union MemAcc_LockNotiTypeTag
{
    void*                  generalPtr;      /**<  General pointer @range NA */
    MemAcc_AppLockNotiType lockNotiFuncPtr; /**< Pointer to lock nofitication function @range NA */
} MemAcc_LockNotiType;
/* PRQA S 0750 -- */

/**
 * @brief     Lock information definition
 */
typedef struct MemAcc_LockInfoTypeTag
{
    boolean                JobLocked;     /**< Lock status of request job @range 0..1 */
    MemAcc_LockStatusType  LockStatus;    /**< Lock status of the module @range NA */
    MemAcc_AppLockNotiType LockNotif;     /**< Lock notification function @range NA */
    MemAcc_AddressType     LockStartAddr; /**< Lock start address @range NA */
    MemAcc_LengthType      LockLength;    /**< Lock length @range NA */
} MemAcc_LockInfoType;

/**
 * @brief     Mem driver service functions information
 */
typedef struct MemAcc_MemBinaryHeaderTypeTag
{
    uint64                         UniqueId; /**< Unique ID @range 0..0xFFFFFFFFFFFFFFFF */
    uint64                         Flags;    /**< Header flags @range 0..0xFFFFFFFFFFFFFFFF */
    uint64                         Header;   /**< Address of Mem driver header structure @range 0..0xFFFFFFFFFFFFFFFF */
    uint64                         Delimiter; /**< Address of Mem driver delimiter field @range 0..0xFFFFFFFFFFFFFFFF */
    MemAcc_MemInitFuncType         InitFunc;  /**< Mem_Init function pointer @range NA */
    MemAcc_MemDeInitFuncType       DeInitFunc;           /**< Mem_DeInit function pointer @range NA */
    MemAcc_MemMainFuncType         MainFunc;             /**< Mem_Main function pointer @range NA */
    MemAcc_MemGetJobResultFuncType GetJobResultFunc;     /**< Mem_GetJobResult function pointer @range NA */
    MemAcc_MemReadFuncType         ReadFunc;             /**< Mem_Read function pointer @range NA */
    MemAcc_MemWriteFuncType        WriteFunc;            /**< Mem_Write function pointer @range NA */
    MemAcc_MemEraseFuncType        EraseFunc;            /**< Mem_Erase function pointer @range NA */
    MemAcc_MemPropagateErrorFuncType PropagateErrorFunc; /**< Mem_PropagateError function pointer @range NA */
    MemAcc_MemBlankCheckFuncType     BlankCheckFunc;     /**< Mem_BlankCheck function pointer @range NA */
    MemAcc_MemSuspendFuncType        SuspendFunc;        /**< Mem_Suspend function pointer @range NA */
    MemAcc_MemResumeFuncType         ResumeFunc;         /**< Mem_Resume function pointer @range NA */
    MemAcc_MemHwSpecificServiceFuncType
        HwSpecificServiceFunc; /**< Hardware specific service function pointer @range NA */
} MemAcc_MemBinaryHeaderType;

/**
 * @brief     UniqueID information of Mem driver
 */
typedef struct MemAcc_MemDriverUniqueIDTypeTag
{
    uint16 ABIVersion; /**< ABI version value @range 0..0xFFFF */
    uint16 VendorID;   /**< Vendor ID @range 0..0xFFFF */
    uint32 DriverID;   /**< Driver ID @range 0..0xFFFFFFFF */
} MemAcc_MemDriverUniqueIDType;

/**
 * @brief     Flag information of Mem driver
 */
typedef struct MemAcc_MemDriverFlagsTypeTag
{
    uint32 RelocatableBinary; /**< Relocatable binary value @range 0..0xFFFF */
    uint32 VendorSpecific;    /**< Vendor specific value @range 0..0xFFFF */
} MemAcc_MemDriverFlagsType;

/**
 * @brief     Binary Header information of Mem driver
 */
typedef struct MemAcc_MemDriverHeaderTypeTag
{
    MemAcc_MemDriverUniqueIDType UniqueID;      /**< Unique ID value @range NA */
    MemAcc_MemDriverFlagsType    Flags;         /**< Mem Driver Flag @range NA */
    uint64                       HeaderAddr;    /**< Header Address value @range NA */
    uint64                       DelimiterAddr; /**< Delimiter Address value @range NA */
} MemAcc_MemDriverHeaderType;

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for invocation type of the driver
 * @range NA
 */
extern const MemAcc_MemInvocationType MemAcc_InvocationCfg[MEMACC_DRIVER_NUM];
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

/**
 * @brief Container for Mem driver information
 * @range NA
 */
#define MEMACC_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"
extern MemAcc_MemBinaryHeaderType MemAcc_MemDriverApi[MEMACC_DRIVER_NUM];
#define MEMACC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

#ifdef __cplusplus
}
#endif
#endif
