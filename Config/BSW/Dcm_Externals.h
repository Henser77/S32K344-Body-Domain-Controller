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
 * @file        : Dcm_Externals.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Public Callout Functions Declaration
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef DCM_EXTERNALS_H_
#define DCM_EXTERNALS_H_
/* =================================================== inclusions =================================================== */
#include "Dcm_Type.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
#define DCM_UNUSED(a) (void)(a)
/* ================================================ type definitions ================================================ */
/* ========================================= external function declarations ========================================= */
#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_SetProgConditions(Dcm_OpStatusType OpStatus, const Dcm_ProgConditionsType* ProgConditions);
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Dcm_EcuStartModeType Dcm_GetProgConditions(Dcm_ProgConditionsType* ProgConditions);
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_GetSeed_Level1(
    Dcm_OpStatusType OpStatus,
    uint8* Seed,
    Dcm_NegativeResponseCodeType* ErrorCode);
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_CompareKey_Level1(
    const uint8* Key,
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode);
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_ReadData_Vin(
    Dcm_OpStatusType OpStatus,
    uint8* Data
    );
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_WriteData_Vin(
    const uint8* Data
    ,Dcm_OpStatusType OpStatus
    ,Dcm_NegativeResponseCodeType* ErrorCode
    );
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"







#ifdef DCM_NRC22_SPECIFIC_CAUSE_CODE
Std_ReturnType Dcm_SpecificNrc22CauseCode(
    uint8 SID,
    const uint8* RequestData,
    uint32 DataSize,
    uint8 ReqType,
    uint16 ConnectionId,
    uint8* specificCauseCode,
    Dcm_ProtocolType ProtocolType,
    uint16 TesterSourceAddress);
#endif

#ifdef __cplusplus
}
#endif
#endif
