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
 * @file        : Rte_Dem_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Types Header File for SWC-Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_DEM_TYPE_H
#define RTE_DEM_TYPE_H
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
#ifndef DEM_CYCLE_STATE_START
#define DEM_CYCLE_STATE_START (0x00U)
#endif
#ifndef DEM_CYCLE_STATE_END
#define DEM_CYCLE_STATE_END (0x01U)
#endif
#ifndef DEM_UDS_STATUS_TF
#define DEM_UDS_STATUS_TF (0x01U)
#endif
#ifndef DEM_UDS_STATUS_TFTOC
#define DEM_UDS_STATUS_TFTOC (0x02U)
#endif
#ifndef DEM_UDS_STATUS_PDTC
#define DEM_UDS_STATUS_PDTC (0x04U)
#endif
#ifndef DEM_UDS_STATUS_CDTC
#define DEM_UDS_STATUS_CDTC (0x08U)
#endif
#ifndef DEM_UDS_STATUS_TNCSLC
#define DEM_UDS_STATUS_TNCSLC (0x10U)
#endif
#ifndef DEM_UDS_STATUS_TFSLC
#define DEM_UDS_STATUS_TFSLC (0x20U)
#endif
#ifndef DEM_UDS_STATUS_TNCTOC
#define DEM_UDS_STATUS_TNCTOC (0x40U)
#endif
#ifndef DEM_UDS_STATUS_WIR
#define DEM_UDS_STATUS_WIR (0x80U)
#endif
#ifndef DEM_INDICATOR_OFF
#define DEM_INDICATOR_OFF (0x00U)
#endif
#ifndef DEM_INDICATOR_CONTINUOUS
#define DEM_INDICATOR_CONTINUOUS (0x01U)
#endif
#ifndef DEM_INDICATOR_BLINKING
#define DEM_INDICATOR_BLINKING (0x02U)
#endif
#ifndef DEM_INDICATOR_BLINK_CONT
#define DEM_INDICATOR_BLINK_CONT (0x03U)
#endif
#ifndef DEM_INDICATOR_SLOW_FLASH
#define DEM_INDICATOR_SLOW_FLASH (0x04U)
#endif
#ifndef DEM_INDICATOR_FAST_FLASH
#define DEM_INDICATOR_FAST_FLASH (0x05U)
#endif
#ifndef DEM_INDICATOR_ON_DEMAND
#define DEM_INDICATOR_ON_DEMAND (0x06U)
#endif
#ifndef DEM_INDICATOR_SHORT
#define DEM_INDICATOR_SHORT (0x07U)
#endif
#ifndef DEM_IUMPR_DEN_STATUS_NOT_REACHED
#define DEM_IUMPR_DEN_STATUS_NOT_REACHED (0x00U)
#endif
#ifndef DEM_IUMPR_DEN_STATUS_REACHED
#define DEM_IUMPR_DEN_STATUS_REACHED (0x01U)
#endif
#ifndef DEM_IUMPR_DEN_STATUS_INHIBITED
#define DEM_IUMPR_DEN_STATUS_INHIBITED (0x02U)
#endif
#ifndef DEM_IUMPR_GENERAL_INDIVIDUAL_DENOMINATOR
#define DEM_IUMPR_GENERAL_INDIVIDUAL_DENOMINATOR (0x05U)
#endif
#ifndef DEM_IUMPR_GENERAL_OBDCOND
#define DEM_IUMPR_GENERAL_OBDCOND (0x06U)
#endif
#ifndef DEM_IUMPR_DEN_COND_COLDSTART_CMPL
#define DEM_IUMPR_DEN_COND_COLDSTART_CMPL (0x07U)
#endif
#ifndef DEM_IUMPR_DEN_COND_EVAP_CMPL
#define DEM_IUMPR_DEN_COND_EVAP_CMPL (0x08U)
#endif
#ifndef DEM_IUMPR_DEN_COND_500MI_CMPL
#define DEM_IUMPR_DEN_COND_500MI_CMPL (0x09U)
#endif
#ifndef DEM_IUMPR_DEN_COND_CSERS
#define DEM_IUMPR_DEN_COND_CSERS (0x10U)
#endif
#ifndef DEM_IUMPR_DEN_COND_EVAPPURGEFLOW_CMPL
#define DEM_IUMPR_DEN_COND_EVAPPURGEFLOW_CMPL (0x11U)
#endif
#ifndef DEM_INIT_MONITOR_CLEAR
#define DEM_INIT_MONITOR_CLEAR (0x01U)
#endif
#ifndef DEM_INIT_MONITOR_RESTART
#define DEM_INIT_MONITOR_RESTART (0x02U)
#endif
#ifndef DEM_INIT_MONITOR_REENABLED
#define DEM_INIT_MONITOR_REENABLED (0x03U)
#endif
#ifndef DEM_INIT_MONITOR_STORAGE_REENABLED
#define DEM_INIT_MONITOR_STORAGE_REENABLED (0x04U)
#endif
#ifndef DEM_DTC_FORMAT_OBD
#define DEM_DTC_FORMAT_OBD (0U)
#endif
#ifndef DEM_DTC_FORMAT_UDS
#define DEM_DTC_FORMAT_UDS (1U)
#endif
#ifndef DEM_DTC_FORMAT_J1939
#define DEM_DTC_FORMAT_J1939 (2U)
#endif
#ifndef DEM_DTC_FORMAT_OBD_3BYTE
#define DEM_DTC_FORMAT_OBD_3BYTE (3U)
#endif
#ifndef DEM_EVENT_STATUS_PASSED
#define DEM_EVENT_STATUS_PASSED (0x00U)
#endif
#ifndef DEM_EVENT_STATUS_FAILED
#define DEM_EVENT_STATUS_FAILED (0x01U)
#endif
#ifndef DEM_EVENT_STATUS_PREPASSED
#define DEM_EVENT_STATUS_PREPASSED (0x02U)
#endif
#ifndef DEM_EVENT_STATUS_PREFAILED
#define DEM_EVENT_STATUS_PREFAILED (0x03U)
#endif
#ifndef DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED
#define DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (0x04U)
#endif
#ifndef DEM_MONITOR_STATUS_TF
#define DEM_MONITOR_STATUS_TF (0x01U)
#endif
#ifndef DEM_MONITOR_STATUS_TNCTOC
#define DEM_MONITOR_STATUS_TNCTOC (0x02U)
#endif
#ifndef DEM_DEBOUNCE_STATUS_FREEZE
#define DEM_DEBOUNCE_STATUS_FREEZE (0x00U)
#endif
#ifndef DEM_DEBOUNCE_STATUS_RESET
#define DEM_DEBOUNCE_STATUS_RESET (0x01U)
#endif
#ifndef DEM_TEMPORARILY_DEFECTIVE
#define DEM_TEMPORARILY_DEFECTIVE (0x01U)
#endif
#ifndef DEM_FINALLY_DEFECTIVE
#define DEM_FINALLY_DEFECTIVE (0x02U)
#endif
#ifndef DEM_TEMPORARILY_HEALED
#define DEM_TEMPORARILY_HEALED (0x04U)
#endif
#ifndef DEM_TEST_COMPLETE
#define DEM_TEST_COMPLETE (0x08U)
#endif
#ifndef DEM_DTR_UPDATE
#define DEM_DTR_UPDATE (0x10U)
#endif
#ifndef DEM_DTR_CTL_NORMAL
#define DEM_DTR_CTL_NORMAL (0x00U)
#endif
#ifndef DEM_DTR_CTL_NO_MAX
#define DEM_DTR_CTL_NO_MAX (0x01U)
#endif
#ifndef DEM_DTR_CTL_NO_MIN
#define DEM_DTR_CTL_NO_MIN (0x02U)
#endif
#ifndef DEM_DTR_CTL_RESET
#define DEM_DTR_CTL_RESET (0x03U)
#endif
#ifndef DEM_DTR_CTL_INVISIBLE
#define DEM_DTR_CTL_INVISIBLE (0x04U)
#endif
#ifndef DEM_DTC_ORIGIN_PRIMARY_MEMORY
#define DEM_DTC_ORIGIN_PRIMARY_MEMORY (0x0001U)
#endif
#ifndef DEM_DTC_ORIGIN_PERMANENT_MEMORY
#define DEM_DTC_ORIGIN_PERMANENT_MEMORY (0x0003U)
#endif
#ifndef DEM_DTC_ORIGIN_OBD_RELEVANT_MEMORY
#define DEM_DTC_ORIGIN_OBD_RELEVANT_MEMORY (0x0004U)
#endif
#define Dem_EventIdType_LowerLimit (0U)
#define Dem_EventIdType_UpperLimit (65535U)
#define uint32_LowerLimit (0UL)
#define uint32_UpperLimit (4294967295UL)
#define uint8_LowerLimit (0U)
#define uint8_UpperLimit (255U)
#define uint16_LowerLimit (0U)
#define uint16_UpperLimit (65535U)
#define sint8_LowerLimit (-128)
#define sint8_UpperLimit (127)

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
#endif /* RTE_DEM_TYPE_H */
