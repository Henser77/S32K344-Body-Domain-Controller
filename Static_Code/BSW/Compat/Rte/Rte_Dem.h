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
 * @file        : Rte_Dem.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Header File for SWC-Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
 

#ifndef RTE_DEM_H
#define RTE_DEM_H

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
#include "Rte_Dem_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/* Application Errors */
#define RTE_E_DataServices_DemDataElementClass_0x0110_E_OK 0U
#define RTE_E_DataServices_DemDataElementClass_0x0110_E_NOT_OK 1U
#define RTE_E_DataServices_DemDataElementClass_0x0111_E_OK 0U
#define RTE_E_DataServices_DemDataElementClass_0x0111_E_NOT_OK 1U
#define RTE_E_OperationCycle_E_OK 0U
#define RTE_E_OperationCycle_E_NOT_OK 1U
#define RTE_E_EnableCondition_E_OK 0U
#define RTE_E_EnableCondition_E_NOT_OK 1U
#define RTE_E_DiagnosticMonitor_E_OK 0U
#define RTE_E_DiagnosticMonitor_E_NOT_OK 1U
#define RTE_E_DiagnosticInfo_E_OK 0U
#define RTE_E_DiagnosticInfo_E_NOT_OK 1U
#define RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE 10U
#define RTE_E_DiagnosticInfo_DEM_E_NO_FDC_AVAILABLE 14U
#define RTE_E_DiagnosticInfo_DEM_BUFFER_TOO_SMALL 21U
#define RTE_E_DiagnosticInfo_DEM_NO_SUCH_ELEMENT 48U
#define RTE_E_DTCSuppression_E_OK 0U
#define RTE_E_DTCSuppression_E_NOT_OK 1U
#define RTE_E_DTCSuppression_DEM_PENDING 4U
#define RTE_E_DTCSuppression_DEM_WRONG_DTC 8U
#define RTE_E_DTCSuppression_DEM_WRONG_DTCORIGIN 9U
#define RTE_E_EventStatus_E_OK 0U
#define RTE_E_EventStatus_E_NOT_OK 1U
#define RTE_E_EventAvailable_E_OK 0U
#define RTE_E_EventAvailable_E_NOT_OK 1U


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
Std_ReturnType Rte_Call_DataServices_DemDataElementClass_0x0110_ReadData_Dem(Dem_DataArrayType_DemDataElementClass_0x0110 Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Call_DataServices_DemDataElementClass_0x0111_ReadData_Dem(Dem_DataArrayType_DemDataElementClass_0x0111 Data);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


/* RTE-Component Interface. */ 
#ifndef RTE_CORE
/* Client-Server API Mapping */
#define Rte_Call_DataServices_DemDataElementClass_0x0110_ReadData Rte_Call_DataServices_DemDataElementClass_0x0110_ReadData_Dem
#define Rte_Call_DataServices_DemDataElementClass_0x0111_ReadData Rte_Call_DataServices_DemDataElementClass_0x0111_ReadData_Dem


#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 0624 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_Dem_MainFunction Dem_MainFunction   
#define RTE_RUNNABLE_GetCycleQualified Dem_GetCycleQualified   
#define RTE_RUNNABLE_RestartOperationCycle Dem_RestartOperationCycle   
#define RTE_RUNNABLE_SetCycleQualified Dem_SetCycleQualified   
#define RTE_RUNNABLE_SetEnableCondition Dem_SetEnableCondition   
#define RTE_RUNNABLE_ResetEventDebounceStatus Dem_ResetEventDebounceStatus   
#define RTE_RUNNABLE_ResetEventStatus Dem_ResetEventStatus   
#define RTE_RUNNABLE_ResetMonitorStatus Dem_ResetMonitorStatus   
#define RTE_RUNNABLE_SetEventStatus Dem_SetEventStatus   
#define RTE_RUNNABLE_GetDTCOfEvent Dem_GetDTCOfEvent   
#define RTE_RUNNABLE_GetDebouncingOfEvent Dem_GetDebouncingOfEvent   
#define RTE_RUNNABLE_GetEventAvailable Dem_GetEventAvailable   
#define RTE_RUNNABLE_GetEventExtendedDataRecordEx Dem_GetEventExtendedDataRecordEx   
#define RTE_RUNNABLE_GetEventFreezeFrameDataEx Dem_GetEventFreezeFrameDataEx   
#define RTE_RUNNABLE_GetEventUdsStatus Dem_GetEventUdsStatus   
#define RTE_RUNNABLE_GetMonitorStatus Dem_GetMonitorStatus   
#define RTE_RUNNABLE_GetFaultDetectionCounter Dem_GetFaultDetectionCounter   
#define RTE_RUNNABLE_GetDTCSuppression Dem_GetDTCSuppression   
#define RTE_RUNNABLE_SetDTCSuppression Dem_SetDTCSuppression   
#define RTE_RUNNABLE_SetWIRStatus Dem_SetWIRStatus   
#define RTE_RUNNABLE_SetEventAvailable Dem_SetEventAvailable   

/* PRQA S 1512, 1513 ++ */ /* VL_Rte_Redeclaration_BswFunction */
/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
void Dem_MainFunction(void);
Std_ReturnType Dem_GetCycleQualified(uint8 OperationCycleId, boolean* isQualified);
Std_ReturnType Dem_RestartOperationCycle(uint8 OperationCycleId);
Std_ReturnType Dem_SetCycleQualified(uint8 OperationCycleId);
Std_ReturnType Dem_SetEnableCondition(uint8 EnableConditionId, boolean ConditionFulfilled);
Std_ReturnType Dem_ResetEventDebounceStatus(Dem_EventIdType EventId, Dem_DebounceResetStatusType DebounceResetStatus);
Std_ReturnType Dem_ResetEventStatus(Dem_EventIdType EventId);
Std_ReturnType Dem_ResetMonitorStatus(Dem_EventIdType EventId);
Std_ReturnType Dem_SetEventStatus(Dem_EventIdType EventId, Dem_EventStatusType EventStatus);
Std_ReturnType Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32* DTCOfEvent);
Std_ReturnType Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, Dem_DebouncingStateType* DebouncingState);
Std_ReturnType Dem_GetEventAvailable(Dem_EventIdType EventId, boolean* AvailableStatus);
Std_ReturnType Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, Dem_MaxDataValueType DestBuffer, uint16* Bufsize);
Std_ReturnType Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, Dem_MaxDataValueType DestBuffer, uint16* BufSize);
Std_ReturnType Dem_GetEventUdsStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType* UDSStatusByte);
Std_ReturnType Dem_GetMonitorStatus(Dem_EventIdType EventId, Dem_MonitorStatusType* MonitorStatus);
Std_ReturnType Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8* FaultDetectionCounter);
Std_ReturnType Dem_GetDTCSuppression(uint8 ClientID, boolean* SuppressionStatus);
Std_ReturnType Dem_SetDTCSuppression(uint8 ClientID, boolean SuppressionStatus);
Std_ReturnType Dem_SetWIRStatus(Dem_EventIdType EventId, boolean WIRStatus);
Std_ReturnType Dem_SetEventAvailable(Dem_EventIdType EventId, boolean AvailableStatus);
/* PRQA S 1709, 1707 -- */
/* PRQA S 1512, 1513 -- */
/* PRQA S 0624 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_DEM_H */
