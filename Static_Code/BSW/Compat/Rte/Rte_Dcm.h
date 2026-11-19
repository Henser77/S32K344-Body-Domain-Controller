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
 * @file        : Rte_Dcm.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Header File for SWC-Dcm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
 

#ifndef RTE_DCM_H
#define RTE_DCM_H

/* PRQA S 0789, 0779, 0791, 0793, 4152 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1335, 1336, 3001 EOF */ /* VL_Rte_NoFuncParaIdentifier */
/* PRQA S 3451, 3449, 1501, 1510, 1707, 1709, 1758, 1756 EOF */ /* VL_Rte_Redeclaration */
/* PRQA S 0787, 1710, 1712, 0786 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1753 EOF */ /* VL_Rte_NoDefination */
/* PRQA S 1507, 1506 EOF */ /* VL_Rte_Mutitypedef */
/* PRQA S 3472 EOF */ /* VL_Rte_MaCroDefExpression */
/* PRQA S 0844 EOF */ /* VL_Rte_UniqueDefinition */

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error "Multiple application header files included."
#endif
#define RTE_APPLICATION_HEADER_FILE
#endif

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Dcm_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/* Application Errors */
#define RTE_E_SecurityAccess_Level_2_E_OK 0U
#define RTE_E_SecurityAccess_Level_2_E_NOT_OK 1U
#define RTE_E_SecurityAccess_Level_2_DCM_E_PENDING 10U
#define RTE_E_SecurityAccess_Level_2_DCM_E_COMPARE_KEY_FAILED 11U
#define RTE_E_SecurityAccess_Level_3_E_OK 0U
#define RTE_E_SecurityAccess_Level_3_E_NOT_OK 1U
#define RTE_E_SecurityAccess_Level_3_DCM_E_PENDING 10U
#define RTE_E_SecurityAccess_Level_3_DCM_E_COMPARE_KEY_FAILED 11U
#define RTE_E_DataServices_Data_0xF186_DID_0xF186_E_OK 0U
#define RTE_E_DataServices_Data_0xF186_DID_0xF186_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0xF186_DID_0xF186_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0xF121_DID_0xF121_E_OK 0U
#define RTE_E_DataServices_Data_0xF121_DID_0xF121_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0xF121_DID_0xF121_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0xF181_DID_0xF181_E_OK 0U
#define RTE_E_DataServices_Data_0xF181_DID_0xF181_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0xF181_DID_0xF181_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0x0110_DID_0x0110_E_OK 0U
#define RTE_E_DataServices_Data_0x0110_DID_0x0110_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0x0110_DID_0x0110_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0x0111_DID_0x0111_E_OK 0U
#define RTE_E_DataServices_Data_0x0111_DID_0x0111_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0x0111_DID_0x0111_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0x0120_DID_0x0120_E_OK 0U
#define RTE_E_DataServices_Data_0x0120_DID_0x0120_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0x0120_DID_0x0120_DCM_E_PENDING 10U
#define RTE_E_DataServices_Data_0x0121_DID_0x0121_E_OK 0U
#define RTE_E_DataServices_Data_0x0121_DID_0x0121_E_NOT_OK 1U
#define RTE_E_DataServices_Data_0x0121_DID_0x0121_DCM_E_PENDING 10U
#define RTE_E_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_E_OK 0U
#define RTE_E_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_E_NOT_OK 1U
#define RTE_E_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_DCM_E_PENDING 10U
#define RTE_E_RoutineServices_Routine_0x0203_E_OK 0U
#define RTE_E_RoutineServices_Routine_0x0203_E_NOT_OK 1U
#define RTE_E_RoutineServices_Routine_0x0203_DCM_E_PENDING 10U
#define RTE_E_RoutineServices_Routine_0x0203_DCM_E_FORCE_RCRRP 12U
#define RTE_E_RoutineServices_Routine_0x0200_E_OK 0U
#define RTE_E_RoutineServices_Routine_0x0200_E_NOT_OK 1U
#define RTE_E_RoutineServices_Routine_0x0200_DCM_E_PENDING 10U
#define RTE_E_RoutineServices_Routine_0x0200_DCM_E_FORCE_RCRRP 12U
#define RTE_E_RoutineServices_Routine_0x0201_E_OK 0U
#define RTE_E_RoutineServices_Routine_0x0201_E_NOT_OK 1U
#define RTE_E_RoutineServices_Routine_0x0201_DCM_E_PENDING 10U
#define RTE_E_RoutineServices_Routine_0x0201_DCM_E_FORCE_RCRRP 12U
#define RTE_E_DCMServices_E_OK 0U
#define RTE_E_DCMServices_E_NOT_OK 1U


/*******************************************************************************
**                      External Variable                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/



/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_2_CompareKey_Dcm(const Dcm_KeyArray_Level_2Type Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_2_GetSecurityAttemptCounter_Dcm(Dcm_OpStatusType OpStatus, uint8* AttemptCounter);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_2_SetSecurityAttemptCounter_Dcm(Dcm_OpStatusType OpStatus, uint8 AttemptCounter);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_2_GetSeed_Dcm(Dcm_OpStatusType OpStatus, Dcm_SeedArray_Level_2Type Seed, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_3_CompareKey_Dcm(const Dcm_KeyArray_Level_3Type Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_3_GetSecurityAttemptCounter_Dcm(Dcm_OpStatusType OpStatus, uint8* AttemptCounter);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_3_SetSecurityAttemptCounter_Dcm(Dcm_OpStatusType OpStatus, uint8 AttemptCounter);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_SecurityAccess_Level_3_GetSeed_Dcm(Dcm_OpStatusType OpStatus, Dcm_SeedArray_Level_3Type Seed, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF186_DID_0xF186_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF186_DID_0xF186_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0xF186_DID_0xF186_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF121_DID_0xF121_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF121_DID_0xF121_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0xF121_DID_0xF121_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF181_DID_0xF181_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0xF181_DID_0xF181_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0xF181_DID_0xF181_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0110_DID_0x0110_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0110_DID_0x0110_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0x0110_DID_0x0110_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0111_DID_0x0111_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0111_DID_0x0111_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0x0111_DID_0x0111_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0120_DID_0x0120_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0x0120_DID_0x0120_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0120_DID_0x0120_ResetToDefault_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReturnControlToEcu_Dcm(Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0120_DID_0x0120_ShortTermAdjustment_Dcm(const Dcm_DataArrayTypeUint8_Data_0x0120_DID_0x0120Type ControlStateInfo, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0121_DID_0x0121_ConditionCheckRead_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReadData_Dcm(Dcm_OpStatusType OpStatus, Dcm_DataElement_Data_0x0121_DID_0x0121_ArrayType Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0121_DID_0x0121_ResetToDefault_Dcm(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReturnControlToEcu_Dcm(Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_Data_0x0121_DID_0x0121_ShortTermAdjustment_Dcm(const Dcm_DataArrayTypeUint8_Data_0x0121_DID_0x0121Type ControlStateInfo, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidData_Dcm(uint16 DID, Dcm_RangeArray_DcmDspDidRange_0x5101_0x51FFType Data, Dcm_OpStatusType OpStatus, uint16 DataLength, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidRangeDataLength_Dcm(uint16 DID, Dcm_OpStatusType OpStatus, uint16* DataLength);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_RoutineServices_Routine_0x0203_Start_Dcm(Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Routine_0x0203_StartRoutineOutSignal_0x0203_RID_0x0203_DataArrayType DataOut_StartRoutineOutSignal_0x0203_RID_0x0203_Data, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_RoutineServices_Routine_0x0200_Start_Dcm(const Dcm_StartDataIn_Routine_0x0200_StartRoutineInSignal_0x0200_RID_0x0200_Control_DataArrayType DataIn_StartRoutineInSignal_0x0200_RID_0x0200_Control_Data, Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Routine_0x0200_StartRoutineOutSignal_0x0200_RID_0x0200_Status_DataArrayType DataOut_StartRoutineOutSignal_0x0200_RID_0x0200_Status_Data, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_RoutineServices_Routine_0x0201_Start_Dcm(const Dcm_StartDataIn_Routine_0x0201_StartRoutineInSignal_0x0201_RID_0x0201_Control_DataArrayType DataIn_StartRoutineInSignal_0x0201_RID_0x0201_Control_Data, Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Routine_0x0201_StartRoutineOutSignal_0x0201_RID_0x0200_Status_DataArrayType DataOut_StartRoutineOutSignal_0x0201_RID_0x0200_Status_Data, Dcm_NegativeResponseCodeType* ErrorCode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_DiagnosticSessionControlModeSwitchInterface_diagnosticSession_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_EcuResetModeSwitchInterface_ecuReset_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_ModeRapidPowerShutDownModeSwitchInterface_modeRapidPowerShutDown_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_CommunicationControlModeSwitchInterface_ComMCh_ECU_communicationControl_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_ControlDTCSettingModeSwitchInterface_controlDTCSetting_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_SecurityAccessModeSwitchInterface_securityAccess_Dcm(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


/* RTE-Component Interface. */ 
#ifndef RTE_CORE
/* Client-Server API Mapping */
#define Rte_Call_SecurityAccess_Level_2_CompareKey Rte_Call_SecurityAccess_Level_2_CompareKey_Dcm
#define Rte_Call_SecurityAccess_Level_2_GetSecurityAttemptCounter Rte_Call_SecurityAccess_Level_2_GetSecurityAttemptCounter_Dcm
#define Rte_Call_SecurityAccess_Level_2_SetSecurityAttemptCounter Rte_Call_SecurityAccess_Level_2_SetSecurityAttemptCounter_Dcm
#define Rte_Call_SecurityAccess_Level_2_GetSeed Rte_Call_SecurityAccess_Level_2_GetSeed_Dcm
#define Rte_Call_SecurityAccess_Level_3_CompareKey Rte_Call_SecurityAccess_Level_3_CompareKey_Dcm
#define Rte_Call_SecurityAccess_Level_3_GetSecurityAttemptCounter Rte_Call_SecurityAccess_Level_3_GetSecurityAttemptCounter_Dcm
#define Rte_Call_SecurityAccess_Level_3_SetSecurityAttemptCounter Rte_Call_SecurityAccess_Level_3_SetSecurityAttemptCounter_Dcm
#define Rte_Call_SecurityAccess_Level_3_GetSeed Rte_Call_SecurityAccess_Level_3_GetSeed_Dcm
#define Rte_Call_DataServices_Data_0xF186_DID_0xF186_ConditionCheckRead Rte_Call_DataServices_Data_0xF186_DID_0xF186_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0xF186_DID_0xF186_ReadData Rte_Call_DataServices_Data_0xF186_DID_0xF186_ReadData_Dcm
#define Rte_Call_DataServices_Data_0xF121_DID_0xF121_ConditionCheckRead Rte_Call_DataServices_Data_0xF121_DID_0xF121_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0xF121_DID_0xF121_ReadData Rte_Call_DataServices_Data_0xF121_DID_0xF121_ReadData_Dcm
#define Rte_Call_DataServices_Data_0xF181_DID_0xF181_ConditionCheckRead Rte_Call_DataServices_Data_0xF181_DID_0xF181_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0xF181_DID_0xF181_ReadData Rte_Call_DataServices_Data_0xF181_DID_0xF181_ReadData_Dcm
#define Rte_Call_DataServices_Data_0x0110_DID_0x0110_ConditionCheckRead Rte_Call_DataServices_Data_0x0110_DID_0x0110_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0x0110_DID_0x0110_ReadData Rte_Call_DataServices_Data_0x0110_DID_0x0110_ReadData_Dcm
#define Rte_Call_DataServices_Data_0x0111_DID_0x0111_ConditionCheckRead Rte_Call_DataServices_Data_0x0111_DID_0x0111_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0x0111_DID_0x0111_ReadData Rte_Call_DataServices_Data_0x0111_DID_0x0111_ReadData_Dcm
#define Rte_Call_DataServices_Data_0x0120_DID_0x0120_ConditionCheckRead Rte_Call_DataServices_Data_0x0120_DID_0x0120_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReadData Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReadData_Dcm
#define Rte_Call_DataServices_Data_0x0120_DID_0x0120_ResetToDefault Rte_Call_DataServices_Data_0x0120_DID_0x0120_ResetToDefault_Dcm
#define Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReturnControlToEcu Rte_Call_DataServices_Data_0x0120_DID_0x0120_ReturnControlToEcu_Dcm
#define Rte_Call_DataServices_Data_0x0120_DID_0x0120_ShortTermAdjustment Rte_Call_DataServices_Data_0x0120_DID_0x0120_ShortTermAdjustment_Dcm
#define Rte_Call_DataServices_Data_0x0121_DID_0x0121_ConditionCheckRead Rte_Call_DataServices_Data_0x0121_DID_0x0121_ConditionCheckRead_Dcm
#define Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReadData Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReadData_Dcm
#define Rte_Call_DataServices_Data_0x0121_DID_0x0121_ResetToDefault Rte_Call_DataServices_Data_0x0121_DID_0x0121_ResetToDefault_Dcm
#define Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReturnControlToEcu Rte_Call_DataServices_Data_0x0121_DID_0x0121_ReturnControlToEcu_Dcm
#define Rte_Call_DataServices_Data_0x0121_DID_0x0121_ShortTermAdjustment Rte_Call_DataServices_Data_0x0121_DID_0x0121_ShortTermAdjustment_Dcm
#define Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidData Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidData_Dcm
#define Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidRangeDataLength Rte_Call_DataServices_DIDRange_DcmDspDidRange_0x5101_0x51FF_ReadDidRangeDataLength_Dcm
#define Rte_Call_RoutineServices_Routine_0x0203_Start Rte_Call_RoutineServices_Routine_0x0203_Start_Dcm
#define Rte_Call_RoutineServices_Routine_0x0200_Start Rte_Call_RoutineServices_Routine_0x0200_Start_Dcm
#define Rte_Call_RoutineServices_Routine_0x0201_Start Rte_Call_RoutineServices_Routine_0x0201_Start_Dcm

/* Mode API Mapping */
#define Rte_Switch_DiagnosticSessionControlModeSwitchInterface_diagnosticSession   Rte_Switch_DiagnosticSessionControlModeSwitchInterface_diagnosticSession_Dcm
#define Rte_Switch_EcuResetModeSwitchInterface_ecuReset   Rte_Switch_EcuResetModeSwitchInterface_ecuReset_Dcm
#define Rte_Switch_ModeRapidPowerShutDownModeSwitchInterface_modeRapidPowerShutDown   Rte_Switch_ModeRapidPowerShutDownModeSwitchInterface_modeRapidPowerShutDown_Dcm
#define Rte_Switch_CommunicationControlModeSwitchInterface_ComMCh_ECU_communicationControl   Rte_Switch_CommunicationControlModeSwitchInterface_ComMCh_ECU_communicationControl_Dcm
#define Rte_Switch_ControlDTCSettingModeSwitchInterface_controlDTCSetting   Rte_Switch_ControlDTCSettingModeSwitchInterface_controlDTCSetting_Dcm
#define Rte_Switch_SecurityAccessModeSwitchInterface_securityAccess   Rte_Switch_SecurityAccessModeSwitchInterface_securityAccess_Dcm


#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 0624 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction   
#define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel   
#define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType   
#define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession   
#define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic   

/* PRQA S 1512, 1513 ++ */ /* VL_Rte_Redeclaration_BswFunction */
/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
void Dcm_MainFunction(void);
Std_ReturnType Dcm_GetSecurityLevel(Dcm_SecLevelType* SecLevel);
Std_ReturnType Dcm_GetSesCtrlType(Dcm_SesCtrlType* SesCtrlType);
Std_ReturnType Dcm_ResetToDefaultSession(void);
Std_ReturnType Dcm_SetActiveDiagnostic(boolean active);
/* PRQA S 1709, 1707 -- */
/* PRQA S 1512, 1513 -- */
/* PRQA S 0624 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_DCM_H */
