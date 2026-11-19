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
 * @file        : Rte_Main.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:02
 * @customer    : EasyXMen
 * @description : Lifecycle Header File.
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_MAIN_H
#define RTE_MAIN_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                       **
*******************************************************************************/
/* RTE Life-Cycle API */

/* SchM Life-Cycle API */
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Init (const SchM_ConfigType * ConfigPtr);/* PRQA S 3451, 3449, 1512, 1513 */ /* VL_QAC_MultiDeclaration */
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Start (void); /* PRQA S 1512 */ /* VL_QAC_MultiDeclaration */
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_StartTiming (void); /* PRQA S 1512 */ /* VL_QAC_MultiDeclaration */
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Deinit (void); /* PRQA S 1512 */ /* VL_QAC_MultiDeclaration */
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#endif /*RTE_MAIN_H*/
