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
 * @file        : Rte_WdgM.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Application Header File for SWC-WdgM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
 

#ifndef RTE_WDGM_H
#define RTE_WDGM_H

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
#include "Rte_WdgM_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/* Application Errors */
#define RTE_E_WdgM_GlobalSupervision_E_OK 0U
#define RTE_E_WdgM_GlobalSupervision_E_NOT_OK 1U
#define RTE_E_WdgM_LocalSupervisionStatus_E_OK 0U
#define RTE_E_WdgM_LocalSupervisionStatus_E_NOT_OK 1U
#define RTE_E_WdgM_LocalSupervision_E_OK 0U
#define RTE_E_WdgM_LocalSupervision_E_NOT_OK 1U


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
Std_ReturnType Rte_Switch_mode_WdgMSupervisedEntity_0_currentMode_WdgM(WdgM_ModeType mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
Std_ReturnType Rte_Switch_globalmode_currentMode_WdgM(WdgM_ModeType mode);
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


/* RTE-Component Interface. */ 
#ifndef RTE_CORE

/* Mode API Mapping */
#define Rte_Switch_mode_WdgMSupervisedEntity_0_currentMode   Rte_Switch_mode_WdgMSupervisedEntity_0_currentMode_WdgM
#define Rte_Switch_globalmode_currentMode   Rte_Switch_globalmode_currentMode_WdgM


#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 0624 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_WdgM_GetFirstExpiredSEID WdgM_GetFirstExpiredSEID   
#define RTE_RUNNABLE_WdgM_GetGlobalStatus WdgM_GetGlobalStatus   
#define RTE_RUNNABLE_WdgM_GetMode WdgM_GetMode   
#define RTE_RUNNABLE_WdgM_PerformReset WdgM_PerformReset   
#define RTE_RUNNABLE_WdgM_SetMode WdgM_SetMode   
#define RTE_RUNNABLE_WdgM_GetLocalStatus WdgM_GetLocalStatus   
#define RTE_RUNNABLE_WdgM_CheckpointReached WdgM_CheckpointReached   

/* PRQA S 1512, 1513 ++ */ /* VL_Rte_Redeclaration_BswFunction */
/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
Std_ReturnType WdgM_GetFirstExpiredSEID(WdgM_SupervisedEntityIdType* SEID);
Std_ReturnType WdgM_GetGlobalStatus(WdgM_GlobalStatusType* Status);
Std_ReturnType WdgM_GetMode(WdgM_ModeType* Mode);
void WdgM_PerformReset(void);
Std_ReturnType WdgM_SetMode(WdgM_ModeType Mode);
Std_ReturnType WdgM_GetLocalStatus(WdgM_SupervisedEntityIdType WdgMSupervisedEntityId, WdgM_LocalStatusType* Status);
Std_ReturnType WdgM_CheckpointReached(WdgM_SupervisedEntityIdType WdgMSupervisedEntityId, WdgM_CheckpointIdType WdgMCheckpointId);
/* PRQA S 1709, 1707 -- */
/* PRQA S 1512, 1513 -- */
/* PRQA S 0624 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_WDGM_H */
