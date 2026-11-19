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
 * @file        : Crc_Cfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : configuration parameter of Crc
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef CRC_CFG_H_
#define CRC_CFG_H_
/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */
/* req<sws_crc_00040></sws_crc_00040> */
/* calculation method of Crc mode */
#define CRC_HARDWARE       0
#define CRC_RUNTIME        1
#define CRC_TABLE          2
#define CRC_TABLE_SIZE_16  0
#define CRC_TABLE_SIZE_256 1

/* CRC8 (SAE J1850) algorithm calculation switch */
#define CRC8_ALGORITHM              STD_OFF

/* CRC8 (2Fh polynomial) algorithm calculation switch */
#define CRC8H2F_ALGORITHM           STD_OFF

/* CRC16 (CCITT) algorithm calculation switch */
#define CRC16_ALGORITHM             STD_ON

/* CRC16 (ARC) algorithm calculation switch */
#define CRC16ARC_ALGORITHM             STD_OFF

/* CRC32 (Ethernet) algorithm calculation switch */
#define CRC32_ALGORITHM             STD_OFF

/* CRC32 (0xF4ACFB13 polynomial) algorithm calculation switch */
#define CRC32P4_ALGORITHM            STD_OFF

/* CRC64 algorithm calculation switch */
#define CRC64_ALGORITHM             STD_OFF




/* Switch to select one of the available CRC 16-bit (CCITT) calculation methods
 * req<ecuc_crc_00025>*/
#define CRC16_MODE   CRC_TABLE
#define CRC16_TABLE_SIZE CRC_TABLE_SIZE_256





/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif
