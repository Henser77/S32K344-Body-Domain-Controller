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
 * @file        : Det_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:03
 * @customer    : EasyXMen
 * @description : config definitions for DET module
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/

#ifndef DET_CFG_H_
#define DET_CFG_H_

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */

/*******************************************************************************
*                          General Configuration
*******************************************************************************/

/* Indicate the number of non-BSW module configured by the Det user */
#define DET_SIZE_OF_NON_BSW_MODULE_CFG              (0U)

/* Check if get software version information from the DET module is enabled. */
#define DET_VERSION_INFO_API                        STD_OFF

/* Used to error logging messages forward into the communication bus via DLT */
/* Pre-restriction: Check if the compiler macro switch of Dlt_DetForwardErrorTrace is enabled */
#define DET_FORWARD_TO_DLT                          STD_OFF

#define DET_SIZE_OF_ERROR_HOOK_TABLE                (0U)

#define DET_SIZE_OF_RUNTIME_ERROR_CALLOUT_TABLE     (0U)

/* Used to calculate the number of callout notification functions for transient fault */
#define DET_SIZE_OF_TRANSIENT_FAULT_CALLOUT_TABLE   (0U)

/* ================================================ type definitions ================================================ */
/* The type of function pointer used to call error hook callback in the DET module report development error */
typedef Std_ReturnType (*Det_ErrorHookFncType)(uint16 moduleId, uint8 instanceId, uint8 apiId, uint8 errorId);
/* The type of function pointer used by the DET module to call Callout callback in case of runtime error */
typedef Std_ReturnType (*Det_RuntimeErrorHookFncType)(uint16 moduleId, uint8 instanceId, uint8 apiId, uint8 errorId);
/* The type of function pointer used by the DET module to call Callout callback in case of transient fault */
typedef Std_ReturnType (*Det_TransientFaultrHookFncType)(uint16 moduleId, uint8 instanceId, uint8 apiId, uint8 faultId);


/* The type is used to describe the module configuration in the DET module */
typedef struct
{
    uint16 ModuleConfigNbr;
} Det_ConfigType;

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */



/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif  /* DET_CFG_H_ */
