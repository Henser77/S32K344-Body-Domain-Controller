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
 * @file        : 3.0.0
 * @licence     : 
 * @date        : Configuration parameter of MemAcc
 * @customer    : EasyXMen
 * @description : MemAcc_Cfg.h
 * @generator   : AUTOSAR classic Platform 2026-11-20 13:51:02
 * @toolVersion : R23-11
 **********************************************************************************************************************/

#ifndef MEMACC_CFG_H
#define MEMACC_CFG_H

/* =================================================== inclusions =================================================== */

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
#define MEMACC_DEV_ERROR_DETECT STD_ON /** Switch the development error detection on or off */

#define MEMACC_64BIT_SUPPORT STD_OFF /** Defines the address type shall be implemented in 64Bit */

#define MEMACC_COMPARE_API STD_OFF /** Defines Comparison function enables/disables */

#define MEMACC_MEMDRIVER_DIRECT_STATIC_ENABLE STD_ON /** DIRECT_STATIC invocation is enable */

#define MEMACC_USE_MEM_FUNCPTR_TABLE STD_OFF /** Defines pointer table to call the Mem driver */

#define MEMACC_MAX_ADDRAREA_NUM 1u /** Defines the max number of MemAccAddressAreaConfiguration */

#define MEMACC_MAX_SUBADDRAREA_NUM 1u /** Defines the max number of MemAccAddressAreaConfiguration */

#define MEMACC_DRIVER_NUM 1u /** Defines the number of Mem hardware driver */

/** The following definitions used to index MemAcc address area ID for SW */
#define MemAccConf_MemAccAddressAreaConfiguration 0u

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

#ifdef __cplusplus
}
#endif
#endif
