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
 * @file        : Dcm_Callout.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Callout File
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 6040,3673, 1532 EOF */ /* VL_MTR_Dcm_STPAR,VL_QAC_3673, VL_QAC_OneFunRef */
/* =================================================== inclusions =================================================== */
#include "Dcm_Internal.h"
/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK Dcm_Callout Inclusion>
*/
/* custom code.... */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/
/* ============================================ internal data definitions =========================================== */
/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK Dcm_Callout Data Definitions>
*/
/* custom code.... */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/
/* ========================================== external function definitions ========================================= */
#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_SetProgConditions(Dcm_OpStatusType OpStatus, const Dcm_ProgConditionsType* ProgConditions)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_SetProgConditions>
    */
    DCM_UNUSED(OpStatus);
    DCM_UNUSED(ProgConditions);
    return E_OK;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Dcm_EcuStartModeType Dcm_GetProgConditions(Dcm_ProgConditionsType* ProgConditions)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_GetProgConditions>
    */
    DCM_UNUSED(ProgConditions);
    return DCM_COLD_START;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_GetSeed_Level1(
    Dcm_OpStatusType OpStatus,
    uint8* Seed,
    Dcm_NegativeResponseCodeType* ErrorCode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_GetSeed_Level1>
    */
    extern void DcmCompat_GetSeed(uint8* Seed);
    DCM_UNUSED(OpStatus);
    DCM_UNUSED(ErrorCode);
    DcmCompat_GetSeed(Seed);
    return E_OK;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_CompareKey_Level1(
    const uint8* Key,
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_CompareKey_Level1>
    */
    extern boolean DcmCompat_CheckKey(const uint8* Key);
    DCM_UNUSED(OpStatus);
    if (TRUE == DcmCompat_CheckKey(Key))
    {
        return E_OK;
    }
    if (NULL_PTR != ErrorCode)
    {
        *ErrorCode = (Dcm_NegativeResponseCodeType)0x35U;
    }
    return E_NOT_OK;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_ReadData_Vin(
    Dcm_OpStatusType OpStatus,
    uint8* Data
    )
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_ReadData_Vin>
    */
    extern Std_ReturnType NvMVin_Read(uint8* Data, uint8 OpStatus);
    return NvMVin_Read(Data, (uint8)OpStatus);

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_WriteData_Vin(
    const uint8* Data
    ,Dcm_OpStatusType OpStatus
    ,Dcm_NegativeResponseCodeType* ErrorCode
    )
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_WriteData_Vin>
    */
    extern Std_ReturnType NvMVin_Write(const uint8* Data, uint8 OpStatus);
    DCM_UNUSED(ErrorCode);
    return NvMVin_Write(Data, (uint8)OpStatus);

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */

}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"








#ifdef DCM_NRC22_SPECIFIC_CAUSE_CODE
#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
Std_ReturnType Dcm_SpecificNrc22CauseCode(
    uint8 SID,
    const uint8* RequestData,
    uint32 DataSize,
    uint8 ReqType,
    uint16 ConnectionId,
    uint8* specificCauseCode,
    Dcm_ProtocolType ProtocolType,
    uint16 TesterSourceAddress)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Dcm_SpecificNrc22CauseCode>
    */
    DCM_UNUSED(SID);
    DCM_UNUSED(RequestData);
    DCM_UNUSED(DataSize);
    DCM_UNUSED(ReqType);
    DCM_UNUSED(ConnectionId);
    DCM_UNUSED(ProtocolType);
    DCM_UNUSED(TesterSourceAddress);
    *specificCauseCode = 0xFFu;
    return E_OK;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"
#endif
