
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
 * @file        : EcuM_MemMap.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:08
 * @customer    : EasyXMen
 * @description : Configuration parameter of MemMap
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* PRQA S 0883,0793,3116,0299 ++ */ /* VL_QAC_include,VL_QAC_MacroLength,VL_MemMap_3116,VL_MemMap_0299 */

#define MEMMAP_ERROR

/* Total section items: 13 */
#if defined(START_WITH_IF)
#undef MEMMAP_ERROR

/*Index:0  Section name : CALLOUT_CODE*/
#elif defined ECUM_START_SEC_CALLOUT_CODE
#undef ECUM_START_SEC_CALLOUT_CODE
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CALLOUT_CODE_NO_MATCH
#define START_SEC_CALLOUT_CODE

#elif defined ECUM_STOP_SEC_CALLOUT_CODE
#undef ECUM_STOP_SEC_CALLOUT_CODE
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CALLOUT_CODE_NO_MATCH
#undef ECUM_START_SEC_CALLOUT_CODE_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CALLOUT_CODE

/*Index:1  Section name : CODE_FAST*/
#elif defined ECUM_START_SEC_CODE_FAST
#undef ECUM_START_SEC_CODE_FAST
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CODE_FAST_NO_MATCH
#define START_SEC_CODE_FAST

#elif defined ECUM_STOP_SEC_CODE_FAST
#undef ECUM_STOP_SEC_CODE_FAST
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CODE_FAST_NO_MATCH
#undef ECUM_START_SEC_CODE_FAST_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CODE_FAST

/*Index:2  Section name : CODE*/
#elif defined ECUM_START_SEC_CODE
#undef ECUM_START_SEC_CODE
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CODE_NO_MATCH
#define START_SEC_CODE

#elif defined ECUM_STOP_SEC_CODE
#undef ECUM_STOP_SEC_CODE
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CODE_NO_MATCH
#undef ECUM_START_SEC_CODE_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CODE

/*Index:3  Section name : CONFIG_DATA_16*/
#elif defined ECUM_START_SEC_CONFIG_DATA_16
#undef ECUM_START_SEC_CONFIG_DATA_16
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CONFIG_DATA_16_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined ECUM_STOP_SEC_CONFIG_DATA_16
#undef ECUM_STOP_SEC_CONFIG_DATA_16
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CONFIG_DATA_16_NO_MATCH
#undef ECUM_START_SEC_CONFIG_DATA_16_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:4  Section name : CONFIG_DATA_8*/
#elif defined ECUM_START_SEC_CONFIG_DATA_8
#undef ECUM_START_SEC_CONFIG_DATA_8
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CONFIG_DATA_8_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined ECUM_STOP_SEC_CONFIG_DATA_8
#undef ECUM_STOP_SEC_CONFIG_DATA_8
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CONFIG_DATA_8_NO_MATCH
#undef ECUM_START_SEC_CONFIG_DATA_8_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:5  Section name : CONFIG_DATA_UNSPECIFIED*/
#elif defined ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#undef ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#undef ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#undef ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:6  Section name : CONST_32*/
#elif defined ECUM_START_SEC_CONST_32
#undef ECUM_START_SEC_CONST_32
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_CONST_32_NO_MATCH
#define START_SEC_CONST

#elif defined ECUM_STOP_SEC_CONST_32
#undef ECUM_STOP_SEC_CONST_32
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_CONST_32_NO_MATCH
#undef ECUM_START_SEC_CONST_32_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONST

/*Index:7  Section name : VAR_CLEARED_16*/
#elif defined ECUM_START_SEC_VAR_CLEARED_16
#undef ECUM_START_SEC_VAR_CLEARED_16
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_CLEARED_16_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined ECUM_STOP_SEC_VAR_CLEARED_16
#undef ECUM_STOP_SEC_VAR_CLEARED_16
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_CLEARED_16_NO_MATCH
#undef ECUM_START_SEC_VAR_CLEARED_16_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:8  Section name : VAR_CLEARED_32*/
#elif defined ECUM_START_SEC_VAR_CLEARED_32
#undef ECUM_START_SEC_VAR_CLEARED_32
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_CLEARED_32_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined ECUM_STOP_SEC_VAR_CLEARED_32
#undef ECUM_STOP_SEC_VAR_CLEARED_32
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_CLEARED_32_NO_MATCH
#undef ECUM_START_SEC_VAR_CLEARED_32_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:9  Section name : VAR_CLEARED_UNSPECIFIED*/
#elif defined ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED
#undef ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined ECUM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#undef ECUM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#undef ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:10  Section name : VAR_FAST_CLEARED_UNSPECIFIED*/
#elif defined ECUM_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#undef ECUM_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
#define START_SEC_VAR_FAST_CLEARED

#elif defined ECUM_STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#undef ECUM_STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
#undef ECUM_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_FAST_CLEARED

/*Index:11  Section name : VAR_FAST_CLEARED_BOOLEAN*/
#elif defined ECUM_START_SEC_VAR_FAST_CLEARED_BOOLEAN
#undef ECUM_START_SEC_VAR_FAST_CLEARED_BOOLEAN
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
#define START_SEC_VAR_FAST_CLEARED

#elif defined ECUM_STOP_SEC_VAR_FAST_CLEARED_BOOLEAN
#undef ECUM_STOP_SEC_VAR_FAST_CLEARED_BOOLEAN
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
#undef ECUM_START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_FAST_CLEARED

/*Index:12  Section name : VAR_POWER_ON_CLEARED_UNSPECIFIED*/
#elif defined ECUM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#undef ECUM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "EcuM_MemMap.h, section is used consecutively many times."
#endif
#define ECUM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
#define START_SEC_VAR_POWER_ON_CLEARED

#elif defined ECUM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#undef ECUM_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef ECUM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
#undef ECUM_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
#else
#error "EcuM_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_POWER_ON_CLEARED


#endif /* START_WITH_IF */


#if defined MEMMAP_ERROR
#error "EcuM_MemMap.h, wrong pragma command"
#endif

/* PRQA S 0883,0793,3116,0299 -- */
