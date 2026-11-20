
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
 * @file        : Nm_MemMap.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:08
 * @customer    : EasyXMen
 * @description : Configuration parameter of MemMap
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* PRQA S 0883,0793,3116,0299 ++ */ /* VL_QAC_include,VL_QAC_MacroLength,VL_MemMap_3116,VL_MemMap_0299 */

#define MEMMAP_ERROR

/* Total section items: 9 */
#if defined(START_WITH_IF)
#undef MEMMAP_ERROR

/*Index:0  Section name : CONFIG_DATA_PTR*/
#elif defined NM_START_SEC_CONFIG_DATA_PTR
#undef NM_START_SEC_CONFIG_DATA_PTR
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_CONFIG_DATA_PTR_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined NM_STOP_SEC_CONFIG_DATA_PTR
#undef NM_STOP_SEC_CONFIG_DATA_PTR
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_CONFIG_DATA_PTR_NO_MATCH
#undef NM_START_SEC_CONFIG_DATA_PTR_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:1  Section name : CONFIG_DATA_UNSPECIFIED*/
#elif defined NM_START_SEC_CONFIG_DATA_UNSPECIFIED
#undef NM_START_SEC_CONFIG_DATA_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined NM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#undef NM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#undef NM_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:2  Section name : CONFIG_DATA_32*/
#elif defined NM_START_SEC_CONFIG_DATA_32
#undef NM_START_SEC_CONFIG_DATA_32
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_CONFIG_DATA_32_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined NM_STOP_SEC_CONFIG_DATA_32
#undef NM_STOP_SEC_CONFIG_DATA_32
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_CONFIG_DATA_32_NO_MATCH
#undef NM_START_SEC_CONFIG_DATA_32_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:3  Section name : CONFIG_DATA_8*/
#elif defined NM_START_SEC_CONFIG_DATA_8
#undef NM_START_SEC_CONFIG_DATA_8
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_CONFIG_DATA_8_NO_MATCH
#define START_SEC_CONFIG_DATA

#elif defined NM_STOP_SEC_CONFIG_DATA_8
#undef NM_STOP_SEC_CONFIG_DATA_8
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_CONFIG_DATA_8_NO_MATCH
#undef NM_START_SEC_CONFIG_DATA_8_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA

/*Index:4  Section name : VAR_CLEARED_16*/
#elif defined NM_START_SEC_VAR_CLEARED_16
#undef NM_START_SEC_VAR_CLEARED_16
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_VAR_CLEARED_16_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined NM_STOP_SEC_VAR_CLEARED_16
#undef NM_STOP_SEC_VAR_CLEARED_16
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_VAR_CLEARED_16_NO_MATCH
#undef NM_START_SEC_VAR_CLEARED_16_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:5  Section name : CODE*/
#elif defined NM_START_SEC_CODE
#undef NM_START_SEC_CODE
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_CODE_NO_MATCH
#define START_SEC_CODE

#elif defined NM_STOP_SEC_CODE
#undef NM_STOP_SEC_CODE
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_CODE_NO_MATCH
#undef NM_START_SEC_CODE_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CODE

/*Index:6  Section name : VAR_CLEARED_8*/
#elif defined NM_START_SEC_VAR_CLEARED_8
#undef NM_START_SEC_VAR_CLEARED_8
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_VAR_CLEARED_8_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined NM_STOP_SEC_VAR_CLEARED_8
#undef NM_STOP_SEC_VAR_CLEARED_8
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_VAR_CLEARED_8_NO_MATCH
#undef NM_START_SEC_VAR_CLEARED_8_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:7  Section name : VAR_CLEARED_BOOLEAN*/
#elif defined NM_START_SEC_VAR_CLEARED_BOOLEAN
#undef NM_START_SEC_VAR_CLEARED_BOOLEAN
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined NM_STOP_SEC_VAR_CLEARED_BOOLEAN
#undef NM_STOP_SEC_VAR_CLEARED_BOOLEAN
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
#undef NM_START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED

/*Index:8  Section name : VAR_CLEARED_UNSPECIFIED*/
#elif defined NM_START_SEC_VAR_CLEARED_UNSPECIFIED
#undef NM_START_SEC_VAR_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "Nm_MemMap.h, section is used consecutively many times."
#endif
#define NM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#define START_SEC_VAR_CLEARED

#elif defined NM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#undef NM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef NM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#undef NM_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
#else
#error "Nm_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED


#endif /* START_WITH_IF */


#if defined MEMMAP_ERROR
#error "Nm_MemMap.h, wrong pragma command"
#endif

/* PRQA S 0883,0793,3116,0299 -- */
