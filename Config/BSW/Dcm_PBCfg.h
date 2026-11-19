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
 * @file        : Dcm_PBCfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Postbuild Cfg Data Declarations
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef DCM_PBCFG_H_
#define DCM_PBCFG_H_
/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ================================================ type definitions ================================================ */
/**
 * @brief Dcm PB configuration
 */
typedef struct
{
    /* Allows to activate or deactivate the usage of a Subservice */
    const boolean* SubServiceUsed;
    /* Allows to activate or deactivate the usage of a Service */
    const boolean* ServiceUsed;
    /* Allows to activate or deactivate the usage of a Protocol */
    const boolean* ProtocolRowUsed;
    /* Allow to activate or deactivate the usage of a ComM channel to be controlled, for multi purpose ECUs */
    const boolean* ComControlAllChannelUsed;
    /* Allow to activate or deactivate the usage of a Subnet assigned to the ComM channel which will be controlled, for
     * multi purpose ECUs. */
    const boolean* ComControlSpecificChannelUsed;
    /* This parameter determines if a node control function is available or not. */
    const boolean* ComControlSubNodeUsed;
    /* Allow to activate or deactivate the usage of a DID, for multi purpose ECUs */
    const boolean* DidUsed;
    /* Allow to activate or deactivate the usage of a PID, for multi purpose ECUs */
    const boolean* PidUsed;
    /* Allow to activate or deactivate the usage of a Routine, for multi purpose ECUs */
    const boolean* RoutineUsed;
} Dcm_ConfigType;

/* =========================================== external data declarations =========================================== */
/**
 * @brief Dcm basic configuration, provided to BswM for initialization
 */
#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
extern const Dcm_ConfigType Dcm_Config;
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
#ifdef __cplusplus
}
#endif
#endif

