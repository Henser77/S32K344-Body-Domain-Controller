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
 * @file        : Rte_WdgM_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Application Types Header File for SWC-WdgM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_WDGM_TYPE_H
#define RTE_WDGM_TYPE_H
/* PRQA S 1710 EOF */ /* VL_Rte_SimilarIdentifier */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Type.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/* Enumeration Data Types */
#ifndef WDGM_GLOBAL_STATUS_OK
#define WDGM_GLOBAL_STATUS_OK (0U)
#endif
#ifndef WDGM_GLOBAL_STATUS_FAILED
#define WDGM_GLOBAL_STATUS_FAILED (1U)
#endif
#ifndef WDGM_GLOBAL_STATUS_EXPIRED
#define WDGM_GLOBAL_STATUS_EXPIRED (2U)
#endif
#ifndef WDGM_GLOBAL_STATUS_STOPPED
#define WDGM_GLOBAL_STATUS_STOPPED (3U)
#endif
#ifndef WDGM_GLOBAL_STATUS_DEACTIVATED
#define WDGM_GLOBAL_STATUS_DEACTIVATED (4U)
#endif
#ifndef WDGM_LOCAL_STATUS_OK
#define WDGM_LOCAL_STATUS_OK (0U)
#endif
#ifndef WDGM_LOCAL_STATUS_FAILED
#define WDGM_LOCAL_STATUS_FAILED (1U)
#endif
#ifndef WDGM_LOCAL_STATUS_EXPIRED
#define WDGM_LOCAL_STATUS_EXPIRED (2U)
#endif
#ifndef WDGM_LOCAL_STATUS_DEACTIVATED
#define WDGM_LOCAL_STATUS_DEACTIVATED (4U)
#endif
#define WdgM_SupervisedEntityIdType_LowerLimit (0U)
#define WdgM_SupervisedEntityIdType_UpperLimit (65535U)
#define WdgM_GlobalStatusType_LowerLimit (0U)
#define WdgM_GlobalStatusType_UpperLimit (255U)
#define WdgM_ModeType_LowerLimit (0U)
#define WdgM_ModeType_UpperLimit (255U)
#define WdgM_LocalStatusType_LowerLimit (0U)
#define WdgM_LocalStatusType_UpperLimit (255U)

/* Implementation Data Type symbols */
      
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
} /* extern "C" */
#endif 
#endif /* RTE_WDGM_TYPE_H */
