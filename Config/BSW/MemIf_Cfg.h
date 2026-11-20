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
 * @file        : MemIf_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:03
 * @customer    : EasyXMen
 * @description : Pre-compile time definitions of MemIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef MEMIF_CFG_H
#define MEMIF_CFG_H

/* =================================================== inclusions =================================================== */
#include "MemIf_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
/* PRQA S 1513,1512 EOF */ /* VL_Fee_1513,VL_Fee_1512 */
/* PRQA S 5004 ++ */ /* VL_QAC_FuncPtr */
/** Switches the development error detection and notification on or off.
 * True: detection and notification is enabled.
 * False (Default): detection and notification is disabled. */
/** MemIf/MemIfGeneral/MemIfDevErrorDetect */
#define MEMIF_DEV_ERROR_DETECT STD_OFF

/** Concrete number of underlying memory abstraction modules.
 * Calculation Formula: Count number of configured EA and FEE modules. */
/** MemIf/MemIfGeneral/MemIfNumberOfDevices */
#define MEMIF_NUMBER_OF_DEVICES 1u

/** Pre-processor switch to enable / disable the API to read out the modules version information.
 * True: Version info API enabled.
 * False (Default):  Version info API disabled. */
/** MemIf/MemIfGeneral/MemIfVersionInfoApi */
#define MEMIF_VERSION_INFO_API STD_OFF


/* Macro mappings of driver API calls */
/** Declare the corresponding function to avoid loops when it is referenced by the lower-layer module */
extern Std_ReturnType Fee_Read(uint16 BlockNumber, uint16 BlockOffset, uint8* DataBufferPtr, uint16 Length);
extern Std_ReturnType Fee_Write(uint16 BlockNumber, const uint8* DataBufferPtr);
extern Std_ReturnType Fee_EraseImmediateBlock(uint16 BlockNumber);
extern Std_ReturnType Fee_InvalidateBlock(uint16 BlockNumber);
extern void Fee_Cancel(void);
extern MemIf_StatusType Fee_GetStatus(void);
extern MemIf_JobResultType Fee_GetJobResult(void);

/**
 * @brief       Invokes the "Read" function of the underlying memory abstraction module selected by the parameter
 *              DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @param[in]   BlockNumber: number of logic block
 * @param[in]   BlockOffset: Read address offset inside the block
 * @param[in]   Length: Number of bytes to read
 * @param[out]  DataBufferPtr: Pointer to data buffer
 * @return      Std_ReturnType
 * @retval      E_OK    : The requested job has been accepted by the module
 * @retval      E_NOT_OK: The requested job has not been accepted by the module.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61233
 */
#define MemIf_Read(DeviceIndex, BlockNumber, BlockOffset, DataBufferPtr, Length) Fee_Read(BlockNumber, BlockOffset, DataBufferPtr, Length)

/**
 * @brief       Invokes the "Write" function of the underlying memory abstraction module selected by the parameter
 *              DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @param[in]   BlockNumber: number of logic block
 * @param[in]   DataBufferPtr: Pointer to data buffer
 * @return      Std_ReturnType
 * @retval      E_OK    : The requested job has been accepted by the module
 * @retval      E_NOT_OK: The requested job has not been accepted by the module.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61232
 */
#define MemIf_Write(DeviceIndex, BlockNumber, DataBufferPtr) Fee_Write(BlockNumber, DataBufferPtr)

/**
 * @brief       Invokes the "EraseImmediateBlock" function of the underlying memory abstraction module selected by the
 *              parameter DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @param[in]   BlockNumber: number of logic block
 * @return      Std_ReturnType
 * @retval      E_OK    : The requested job has been accepted by the module
 * @retval      E_NOT_OK: The requested job has not been accepted by the module.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61226
 */
#define MemIf_EraseImmediateBlock(DeviceIndex, BlockNumber) Fee_EraseImmediateBlock(BlockNumber)

/**
 * @brief       Invokes the "InvalidateBlock" function of the underlying memory abstraction module selected by the
 *              parameter DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @param[in]   BlockNumber: number of logic block
 * @return      Std_ReturnType
 * @retval      E_OK    : The requested job has been accepted by the module
 * @retval      E_NOT_OK: The requested job has not been accepted by the module.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61228
 */
#define MemIf_InvalidateBlock(DeviceIndex, BlockNumber) Fee_InvalidateBlock(BlockNumber)

/**
 * @brief       Invokes the "Cancel" function of the underlying memory abstraction module selected by the parameter
 *              DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61231
 */
#define MemIf_Cancel(DeviceIndex) Fee_Cancel()

/**
 * @brief       Invokes the "GetStatus" function of the underlying memory abstraction module selected by the parameter
 *              DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @return      MemIf_StatusType
 * @retval      MEMIF_UNINIT: The underlying abstraction module or device driver has not been initialized (yet).
 * @retval      MEMIF_IDLE: The underlying abstraction module or device driver is currently idle.
 * @retval      MEMIF_BUSY: The underlying abstraction module or device driver is currently busy.
 * @retval      MEMIF_BUSY_INTERNAL: The underlying abstraction module is busy with internal management operations. The
 *                                   underlying device driver can be busy or idle.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61230
 */
#define MemIf_GetStatus(DeviceIndex) Fee_GetStatus()

/**
 * @brief       Invokes the "GetJobResult" function of the underlying memory abstraction module selected by the
 *              parameter DeviceIndex.
 * @param[in]   DeviceIndex: index number of device
 * @return      MemIf_StatusType
 * @retval      MEMIF_JOB_OK: The job has been finished successfully
 * @retval      MEMIF_JOB_FAILED: The job has not been finished successfully
 * @retval      MEMIF_JOB_PENDING: The job has not yet been finished.
 * @retval      MEMIF_JOB_CANCELED: The job has been canceled.
 * @retval      MEMIF_BLOCK_INCONSISTENT: 1. The requested block is inconsistent, it may contain corrupted data.
 *                                        2. Block is NOT found.
 * @retval      MEMIF_BLOCK_INVALID: The requested block has been marked as invalid, the requested operation can not be
 *                                   performed.
 * @reentrant   Non Reentrant
 * @synchronous Synchronous
 * @trace       CPD-61229
 */
#define MemIf_GetJobResult(DeviceIndex) Fee_GetJobResult()
/* PRQA S 5004 -- */

#ifdef __cplusplus
}
#endif
#endif
