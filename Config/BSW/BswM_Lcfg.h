
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
 * @file        : BswM_Lcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Link-Time Configuration parameter of BswM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef BSWM_LCFG__H
#define BSWM_LCFG__H


/* =================================================== inclusions =================================================== */
#include "BswM_Internal.h"

/* PRQA S 1712 EOF */ /* VL_BswM_1712 */

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */



/* PRQA S 0793 ++ */ /* VL_BswM_0793 */
/* BswMConfig*/
#define BSWM_AL_Core0_Par0_List_StartComm      0u
#define BSWM_AL_Core0_Par0_List_StopComm      1u

/* PRQA S 0793 -- */
/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
/* BswMConfig */
/* PRQA S 0777, 1712 ++ */ /* VL_QAC_DiffIdentifier, VL_BswM_1712 */
/* Declare the PC configuration for each partition */
#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
extern const BswM_PartitionPCCfgType BswM_PartitionPCCfg_Core0_Par0;
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
/* Declare the LC configuration for each partition */
#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
extern const BswM_PartitionLCfgType BswM_PartitionLCfg_Core0_Par0;
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
/* PRQA S 0777, 1712 -- */

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
extern const BswM_PCCfgType BswM_CorePCCfg_Core0;
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"

/* ========================================= external function declarations ========================================= */
/* BswMConfig */


#ifdef __cplusplus
}
#endif

#endif /* BSWM_LCFG__H */
