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
 * @file        : Rte_EcuM.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Header File for SWC-EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
 

#ifndef RTE_ECUM_H
#define RTE_ECUM_H

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
#include "Rte_EcuM_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/* Application Errors */
#define RTE_E_EcuM_Time_E_OK 0U
#define RTE_E_EcuM_Time_E_NOT_OK 1U
#define RTE_E_EcuM_StateRequest_E_OK 0U
#define RTE_E_EcuM_StateRequest_E_NOT_OK 1U
#define RTE_E_EcuM_ShutdownTarget_E_OK 0U
#define RTE_E_EcuM_ShutdownTarget_E_NOT_OK 1U
#define RTE_E_EcuM_BootTarget_E_OK 0U
#define RTE_E_EcuM_BootTarget_E_NOT_OK 1U


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
Std_ReturnType Rte_Switch_currentMode_currentMode_EcuM(uint8 mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_SwitchAck_currentMode_currentMode_EcuM(void);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


/* RTE-Component Interface. */ 
#ifndef RTE_CORE

/* Mode API Mapping */
#define Rte_Switch_currentMode_currentMode   Rte_Switch_currentMode_currentMode_EcuM
#define Rte_SwitchAck_currentMode_currentMode  Rte_SwitchAck_currentMode_currentMode_EcuM


#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 0624 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_EcuM_Time_GetCurrentTime EcuM_GetCurrentTime   
#define RTE_RUNNABLE_EcuM_Time_GetWakeupTime EcuM_GetWakeupTime   
#define RTE_RUNNABLE_EcuM_StateRequest_ReleasePOSTRUN EcuM_ReleasePOST_RUN   
#define RTE_RUNNABLE_EcuM_StateRequest_ReleaseRUN EcuM_ReleaseRUN   
#define RTE_RUNNABLE_EcuM_StateRequest_RequestPOSTRUN EcuM_RequestPOST_RUN   
#define RTE_RUNNABLE_EcuM_StateRequest_RequestRUN EcuM_RequestRUN   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetLastShutdownTarget EcuM_GetLastShutdownTarget   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetShutdownCause EcuM_GetShutdownCause   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetShutdownTarget EcuM_GetShutdownTarget   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_SelectShutdownCause EcuM_SelectShutdownCause   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_SelectShutdownTarget EcuM_SelectShutdownTarget   
#define RTE_RUNNABLE_EcuM_BootTarget_GetBootTarget EcuM_GetBootTarget   
#define RTE_RUNNABLE_EcuM_BootTarget_SelectBootTarget EcuM_SelectBootTarget   

/* PRQA S 1512, 1513 ++ */ /* VL_Rte_Redeclaration_BswFunction */
/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
Std_ReturnType EcuM_GetCurrentTime(EcuM_TimeType* time);
Std_ReturnType EcuM_GetWakeupTime(EcuM_TimeType* time);
Std_ReturnType EcuM_ReleasePOST_RUN(EcuM_UserType User);
Std_ReturnType EcuM_ReleaseRUN(EcuM_UserType User);
Std_ReturnType EcuM_RequestPOST_RUN(EcuM_UserType User);
Std_ReturnType EcuM_RequestRUN(EcuM_UserType User);
Std_ReturnType EcuM_GetLastShutdownTarget(EcuM_ShutdownTargetType* shutdownTarget, EcuM_ShutdownModeType* shutdownMode);
Std_ReturnType EcuM_GetShutdownCause(EcuM_ShutdownCauseType* shutdownCause);
Std_ReturnType EcuM_GetShutdownTarget(EcuM_ShutdownTargetType* shutdownTarget, EcuM_ShutdownModeType* shutdownMode);
Std_ReturnType EcuM_SelectShutdownCause(EcuM_ShutdownCauseType shutdownCause);
Std_ReturnType EcuM_SelectShutdownTarget(EcuM_ShutdownTargetType shutdownTarget, EcuM_ShutdownModeType shutdownMode);
Std_ReturnType EcuM_GetBootTarget(EcuM_BootTargetType* target);
Std_ReturnType EcuM_SelectBootTarget(EcuM_BootTargetType target);
/* PRQA S 1709, 1707 -- */
/* PRQA S 1512, 1513 -- */
/* PRQA S 0624 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_ECUM_H */
