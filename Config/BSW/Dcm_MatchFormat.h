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
 * @file        : Dcm_MatchFormat.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Dcm Match Format Function Declarations
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef DCM_MATCHFORMAT_H_
#define DCM_MATCHFORMAT_H_
/* PRQA S 4152 EOF */ /* VL_Dcm_4152 */
/* =================================================== inclusions =================================================== */
#include "Dcm_Type.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ========================================= external function declarations ========================================= */
/* PRQA S 1712 ++ */ /* VL_Dcm_1712 */
#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_GetSeed_Level1_matchFormat(
    const uint8* SecurityAccessDataRecord,
    Dcm_OpStatusType OpStatus,
    uint8* Seed,
    Dcm_NegativeResponseCodeType* ErrorCode);
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_ReadData_Vin_matchFormat(
    Dcm_OpStatusType OpStatus,
    uint8* Data,
    Dcm_NegativeResponseCodeType* ErrorCode);
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_WriteData_Vin_matchFormat(
    const uint8* Data,
    uint16 DataLength,
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode);
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

/* PRQA S 1712 -- */

#ifdef __cplusplus
}
#endif
#endif

