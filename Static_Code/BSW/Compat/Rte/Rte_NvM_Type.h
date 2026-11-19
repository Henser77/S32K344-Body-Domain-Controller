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
 * @file        : Rte_NvM_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Application Types Header File for SWC-NvM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_NVM_TYPE_H
#define RTE_NVM_TYPE_H
/* PRQA S 1710 EOF */ /* VL_Rte_SimilarIdentifier */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Type.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/* Enumeration Data Types */
#ifndef NVM_REQ_OK
#define NVM_REQ_OK (0x00U)
#endif
#ifndef NVM_REQ_NOT_OK
#define NVM_REQ_NOT_OK (0x01U)
#endif
#ifndef NVM_REQ_PENDING
#define NVM_REQ_PENDING (0x02U)
#endif
#ifndef NVM_REQ_INTEGRITY_FAILED
#define NVM_REQ_INTEGRITY_FAILED (0x03U)
#endif
#ifndef NVM_REQ_BLOCK_SKIPPED
#define NVM_REQ_BLOCK_SKIPPED (0x04U)
#endif
#ifndef NVM_REQ_NV_INVALIDATED
#define NVM_REQ_NV_INVALIDATED (0x05U)
#endif
#ifndef NVM_REQ_CANCELED
#define NVM_REQ_CANCELED (0x06U)
#endif
#ifndef NVM_REQ_RESTORED_FROM_ROM
#define NVM_REQ_RESTORED_FROM_ROM (0x08U)
#endif
#ifndef NVM_READ_BLOCK
#define NVM_READ_BLOCK (0x00U)
#endif
#ifndef NVM_WRITE_BLOCK
#define NVM_WRITE_BLOCK (0x01U)
#endif
#ifndef NVM_RESTORE_BLOCK_DEFAULTS
#define NVM_RESTORE_BLOCK_DEFAULTS (0x02U)
#endif
#ifndef NVM_ERASE_NV_BLOCK
#define NVM_ERASE_NV_BLOCK (0x03U)
#endif
#ifndef NVM_INVALIDATE_NV_BLOCK
#define NVM_INVALIDATE_NV_BLOCK (0x04U)
#endif
#ifndef NVM_READ_ALL_BLOCK
#define NVM_READ_ALL_BLOCK (0x05U)
#endif
#ifndef NVM_INIT_READ_BLOCK
#define NVM_INIT_READ_BLOCK (0x00U)
#endif
#ifndef NVM_INIT_RESTORE_BLOCK_DEFAULTS
#define NVM_INIT_RESTORE_BLOCK_DEFAULTS (0x01U)
#endif
#ifndef NVM_INIT_READ_ALL_BLOCK
#define NVM_INIT_READ_ALL_BLOCK (0x02U)
#endif
#ifndef NVM_INIT_FIRST_INIT_ALL
#define NVM_INIT_FIRST_INIT_ALL (0x03U)
#endif
#define NvM_BlockIdType_LowerLimit (0U)
#define NvM_BlockIdType_UpperLimit (255U)
#define NvM_RequestResultType_LowerLimit (0U)
#define NvM_RequestResultType_UpperLimit (255U)
#define NvM_BlockRequestType_LowerLimit (0U)
#define NvM_BlockRequestType_UpperLimit (255U)
#define NvM_InitBlockRequestType_LowerLimit (0U)
#define NvM_InitBlockRequestType_UpperLimit (255U)

/* Implementation Data Type symbols */
      
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
} /* extern "C" */
#endif 
#endif /* RTE_NVM_TYPE_H */
