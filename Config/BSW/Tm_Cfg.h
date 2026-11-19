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
 * @generator   : AUTOSAR classic Platform 2026-11-19 22:11:06
 * @toolVersion : R24-11
 **********************************************************************************************************************/
#ifndef TM_CFG_H_
#define TM_CFG_H_

/******************************************************************************
**                      Includes                                             **
******************************************************************************/
#include "Std_Types.h"

/* Enable/disable the development error detection */
#define TM_DEV_ERROR_DETECT     STD_ON
/* Enable/disable the version info API */
#define TM_VERSIONINFO_API      STD_OFF
/* The number of predefined timer instance */
#define TM_TIMER_INSTANCE_NUM 1u

#define TmPreDefTimerInstance_0 0u
#define TmConf_TmPreDefTimerInstance_TmPreDefTimerInstance_0 TmPreDefTimerInstance_0

#endif /* TM_CFG_H_ */
