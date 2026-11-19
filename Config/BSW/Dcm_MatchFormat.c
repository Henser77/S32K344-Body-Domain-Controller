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
 * @file        : Dcm_MatchFormat.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Dcm Match Format Function Definitions
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 4152, 2784, 3673, 1532, 6510 EOF */ /* VL_Dcm_4152, VL_Dcm_2784, VL_QAC_3673, VL_QAC_OneFunRef, VL_MTR_Dcm_CONF */
/* =================================================== inclusions =================================================== */
#include "Dcm_MatchFormat.h"
#include "Dcm_Internal.h"
/* ========================================== external function definitions ========================================= */
#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_GetSeed_Level1_matchFormat(
    const uint8* SecurityAccessDataRecord,
    Dcm_OpStatusType OpStatus,
    uint8* Seed,
    Dcm_NegativeResponseCodeType* ErrorCode)
{
    DCM_UNUSED(SecurityAccessDataRecord);
    return Dcm_GetSeed_Level1(OpStatus, Seed, ErrorCode);
}
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_ReadData_Vin_matchFormat(
    Dcm_OpStatusType OpStatus,
    uint8* Data,
    Dcm_NegativeResponseCodeType* ErrorCode)
{
    Std_ReturnType result;

    DCM_UNUSED(ErrorCode);

    result = Dcm_ReadData_Vin(OpStatus, Data);

    return result;
}
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_Dcm_WriteData_Vin_matchFormat(
    const uint8* Data,
    uint16 DataLength,
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode)
{
    DCM_UNUSED(DataLength);

    return Dcm_WriteData_Vin(Data, OpStatus, ErrorCode);
}
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"

