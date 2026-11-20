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
 * @file        : 
 * @licence     : 
 * @date        : Time Service Configuration Parameters
 * @customer    : EasyXMen
 * @description : Tm_Cfg.h
 * @generator   : AUTOSAR classic Platform 2026-11-20 13:51:02
 * @toolVersion : R24-11
 **********************************************************************************************************************/


#include "Tm.h"

#define TM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Tm_MemMap.h"
static const Tm_PreDefTimerType Tm_PreDefTimer[TM_TIMER_INSTANCE_NUM] = 
{
    {
        0u,
        TM_PREDEF_TIMER_1US_32BIT,
    },
};
#define TM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Tm_MemMap.h"

#define TM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Tm_MemMap.h"
const Tm_ConfigType Tm_Config = {Tm_PreDefTimer};   /* PRQA S 1502 */ /* VL_Tm_1502 */
#define TM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Tm_MemMap.h"
