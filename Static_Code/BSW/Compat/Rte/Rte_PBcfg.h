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
 * @file        : Rte_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Header File for Rte Postbuild Cfg Data
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 0388, 0914  EOF */ /* VL_Rte_Standard */

#ifndef Rte_PBCFG_H
#define Rte_PBCFG_H

#include "Std_Types.h"

typedef struct {
    uint8 VarCri_DemoVariantCriterion;

} SchM_ConfigType;

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" 
extern const SchM_ConfigType Rte_Config;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"


#endif /*Rte_PBCFG_H*/
