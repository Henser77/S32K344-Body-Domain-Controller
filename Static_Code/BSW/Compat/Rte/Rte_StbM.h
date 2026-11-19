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
 * @file        : Rte_StbM.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Header File for SWC-StbM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
 

#ifndef RTE_STBM_H
#define RTE_STBM_H

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
#include "Rte_StbM_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/* Application Errors */
#define RTE_E_GlobalTime_Master_StbMSynchronizedTimeBase_Master_E_OK 0U
#define RTE_E_GlobalTime_Master_StbMSynchronizedTimeBase_Master_E_NOT_OK 1U
#define RTE_E_GlobalTime_Slave_StbMSynchronizedTimeBase_Master_E_OK 0U
#define RTE_E_GlobalTime_Slave_StbMSynchronizedTimeBase_Master_E_NOT_OK 1U
#define RTE_E_GlobalTime_Slave_StbMSynchronizedTimeBase_Slave_E_OK 0U
#define RTE_E_GlobalTime_Slave_StbMSynchronizedTimeBase_Slave_E_NOT_OK 1U


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



/* RTE-Component Interface. */ 
#ifndef RTE_CORE



#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 0624 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_SetCloningOffset StbM_SetCloningOffset   
#define RTE_RUNNABLE_SetGlobalTime StbM_SetGlobalTime   
#define RTE_RUNNABLE_SetRateCorrection StbM_SetRateCorrection   
#define RTE_RUNNABLE_SetUserData StbM_SetUserData   
#define RTE_RUNNABLE_TriggerTimeTransmission StbM_TriggerTimeTransmission   
#define RTE_RUNNABLE_UpdateGlobalTime StbM_UpdateGlobalTime   
#define RTE_RUNNABLE_GetCurrentTime StbM_GetCurrentTime   
#define RTE_RUNNABLE_GetRateDeviation StbM_GetRateDeviation   
#define RTE_RUNNABLE_GetTimeBaseStatus StbM_GetTimeBaseStatus   
#define RTE_RUNNABLE_GetTimeLeap StbM_GetTimeLeap   

/* PRQA S 1512, 1513 ++ */ /* VL_Rte_Redeclaration_BswFunction */
/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
Std_ReturnType StbM_SetCloningOffset(StbM_SynchronizedTimeBaseType timeBaseId, const StbM_TimeStampType* timeOffset);
Std_ReturnType StbM_SetGlobalTime(StbM_SynchronizedTimeBaseType timeBaseId, const StbM_TimeStampType* timeStamp, const StbM_UserDataType* userData);
Std_ReturnType StbM_SetRateCorrection(StbM_SynchronizedTimeBaseType timeBaseId, StbM_RateDeviationType rateDeviation);
Std_ReturnType StbM_SetUserData(StbM_SynchronizedTimeBaseType timeBaseId, const StbM_UserDataType* userData);
Std_ReturnType StbM_TriggerTimeTransmission(StbM_SynchronizedTimeBaseType timeBaseId);
Std_ReturnType StbM_UpdateGlobalTime(StbM_SynchronizedTimeBaseType timeBaseId, const StbM_TimeStampType* timeStamp, const StbM_UserDataType* userData);
Std_ReturnType StbM_GetCurrentTime(StbM_SynchronizedTimeBaseType timeBaseId, StbM_TimeTupleType* timeTuple, StbM_UserDataType* userData);
Std_ReturnType StbM_GetRateDeviation(StbM_SynchronizedTimeBaseType timeBaseId, StbM_RateDeviationType* rateDeviation);
Std_ReturnType StbM_GetTimeBaseStatus(StbM_SynchronizedTimeBaseType timeBaseId, StbM_TimeBaseStatusType* syncTimeBaseStatus);
Std_ReturnType StbM_GetTimeLeap(StbM_SynchronizedTimeBaseType timeBaseId, StbM_TimeDiffType* timeJump);
/* PRQA S 1709, 1707 -- */
/* PRQA S 1512, 1513 -- */
/* PRQA S 0624 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_STBM_H */
