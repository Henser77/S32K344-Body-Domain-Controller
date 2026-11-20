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
 * @file        : MemMap.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:08
 * @customer    : EasyXMen
 * @description : Configuration parameter of MemMap
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/**
  \page ISOFT_MISRA_Exceptions  MISRA-C:2012 Compliance Exceptions
    ModeName:MemMap<br>
  RuleSorce:puhua_rules-2024.12.rcf

    \li VL_MemMap_3116
    Reason: This segment is unused in the current module.
    Risk: It depends on the user configuration, no risk.
    Prevention: Check reference validity through additional verification methods.

    \li VL_MemMap_2053
    Reason: The complexity of engineering integration makes it impossible to require external code to comply with the internal memmap fields.
    Risk: The occurrence of memory segments prone to errors
    Prevention: The internal modules are strictly checked according to the fields and integrated into the CI process.

    \li VL_MemMap_0299
    Reason: #pragma directives containing characters which are not members of the basic source character set.
    Risk: The @ symbol conforms to the compiler instruction format, no risk  
    Prevention: Check if the compiler manual supports the @ symbol.
 */

/* PRQA S 0883,0793,3116 ++ */ /* VL_QAC_include,VL_QAC_MacroLength,VL_MemMap_3116 */

#define MEMMAP_H_ERROR

#if defined(START_WITH_IF)
#undef MEMMAP_H_ERROR

#endif

#if defined MEMMAP_H_ERROR
/* #error "MemMap.h, wrong pragma command" */ /* PRQA S 2053 */ /* VL_MemMap_2053 */
#endif

/* PRQA S 0883,0793,3116 -- */
