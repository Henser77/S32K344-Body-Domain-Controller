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
 * @description : MemAcc_Lcfg.c
 * @generator   : AUTOSAR classic Platform 2026-11-20 13:51:02
 * @toolVersion : R23_11
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "MemAcc_Lcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

#define MEMACC_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for Mem driver information
 * @range NA
 */
MemAcc_MemBinaryHeaderType MemAcc_MemDriverApi[MEMACC_DRIVER_NUM] =
{
    {
        0u, /** Not suport Unique Id */
        0u, /** Not suport Flags */
        0u, /** Not suport Header */
        0u, /** Not suport Delimiter */
        (MemAcc_MemInitFuncType)Mem_43_INFLS_Init, /** Point to init func */
        (MemAcc_MemDeInitFuncType)Mem_43_INFLS_DeInit, /** Point to de-init func */
        NULL_PTR, /** Point to main func */
        (MemAcc_MemGetJobResultFuncType)Mem_43_INFLS_GetJobResult, /** Point to getjob func */
        (MemAcc_MemReadFuncType)Mem_43_INFLS_Read, /** Point to read func */
        (MemAcc_MemWriteFuncType)Mem_43_INFLS_Write, /** Point to write func */
        (MemAcc_MemEraseFuncType)Mem_43_INFLS_Erase, /** Point to erase func */
        (MemAcc_MemPropagateErrorFuncType)Mem_43_INFLS_PropagateError, /** Point to propagate error func */
        (MemAcc_MemBlankCheckFuncType)Mem_43_INFLS_BlankCheck, /** Point to blank check func */
        (MemAcc_MemSuspendFuncType)Mem_43_INFLS_Suspend, /** Point to suspend func */
        (MemAcc_MemResumeFuncType)Mem_43_INFLS_Resume, /** Point to resume func */
        (MemAcc_MemHwSpecificServiceFuncType)Mem_43_INFLS_HwSpecificService, /** Point to hwspecific service func */
    },
};
#define MEMACC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/**
 * @brief Container for invocation type of the driver
 * @range NA
 */
const MemAcc_MemInvocationType MemAcc_InvocationCfg[MEMACC_DRIVER_NUM] =
{
    MEMACC_DIRECT_STATIC, /** Invocation type of driver */
};
#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
