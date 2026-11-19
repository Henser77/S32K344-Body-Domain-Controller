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
 * @file        : Rte_Dcm_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:04
 * @customer    : EasyXMen
 * @description : Application Types Header File for SWC-Dcm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_DCM_TYPE_H
#define RTE_DCM_TYPE_H
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
#ifndef DCM_POSITIVE_RESPONSE
#define DCM_POSITIVE_RESPONSE (0x00U)
#endif
#ifndef DCM_GENERAL_REJECT
#define DCM_GENERAL_REJECT (0x10U)
#endif
#ifndef DCM_BUSY_REPEAT_REQUEST
#define DCM_BUSY_REPEAT_REQUEST (0x21U)
#endif
#ifndef DCM_CONDITIONS_NOT_CORRECT
#define DCM_CONDITIONS_NOT_CORRECT (0x22U)
#endif
#ifndef DCM_FAILURE_PREVENTS_EXECUTION
#define DCM_FAILURE_PREVENTS_EXECUTION (0x26U)
#endif
#ifndef DCM_REQUEST_OUT_OF_RANGE
#define DCM_REQUEST_OUT_OF_RANGE (0x31U)
#endif
#ifndef DCM_RESPONSE_PENDING
#define DCM_RESPONSE_PENDING (0x78U)
#endif
#ifndef DCM_IDLE
#define DCM_IDLE (0xFFU)
#endif
#ifndef DCM_RETURN_CONTROL_TO_ECU
#define DCM_RETURN_CONTROL_TO_ECU (0x00U)
#endif
#ifndef DCM_RESET_TO_DEFAULT
#define DCM_RESET_TO_DEFAULT (0x01U)
#endif
#ifndef DCM_FREEZE_CURRENT_STATE
#define DCM_FREEZE_CURRENT_STATE (0x02U)
#endif
#ifndef DCM_SHORT_TERM_ADJUSTMENT
#define DCM_SHORT_TERM_ADJUSTMENT (0x03U)
#endif
#ifndef DCM_INITIAL
#define DCM_INITIAL (0x00U)
#endif
#ifndef DCM_PENDING
#define DCM_PENDING (0x01U)
#endif
#ifndef DCM_CANCEL
#define DCM_CANCEL (0x02U)
#endif
#ifndef DCM_FORCE_RCRRP_OK
#define DCM_FORCE_RCRRP_OK (0x03U)
#endif
#ifndef DCM_DEFAULT_SESSION
#define DCM_DEFAULT_SESSION (0x01U)
#endif
#ifndef DCM_PROGRAMMING_SESSION
#define DCM_PROGRAMMING_SESSION (0x02U)
#endif
#ifndef DCM_EXTENDED_DIAGNOSTIC_SESSION
#define DCM_EXTENDED_DIAGNOSTIC_SESSION (0x03U)
#endif
#ifndef DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION
#define DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION (0x04U)
#endif
#ifndef DCM_RES_POS_OK
#define DCM_RES_POS_OK (0x00U)
#endif
#ifndef DCM_RES_POS_NOT_OK
#define DCM_RES_POS_NOT_OK (0x01U)
#endif
#ifndef DCM_RES_NEG_OK
#define DCM_RES_NEG_OK (0x02U)
#endif
#ifndef DCM_RES_NEG_NOT_OK
#define DCM_RES_NEG_NOT_OK (0x03U)
#endif
#ifndef DCM_DID_SUPPORTED
#define DCM_DID_SUPPORTED (0x00U)
#endif
#ifndef DCM_DID_NOT_SUPPORTED
#define DCM_DID_NOT_SUPPORTED (0x01U)
#endif
#ifndef DCM_POS_RESP
#define DCM_POS_RESP (0x00U)
#endif
#ifndef DCM_E_GENERALREJECT
#define DCM_E_GENERALREJECT (0x10U)
#endif
#ifndef DCM_E_SERVICENOTSUPPORTED
#define DCM_E_SERVICENOTSUPPORTED (0x11U)
#endif
#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#define DCM_E_SUBFUNCTIONNOTSUPPORTED (0x12U)
#endif
#ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (0x13U)
#endif
#ifndef DCM_E_RESPONSETOOLONG
#define DCM_E_RESPONSETOOLONG (0x14U)
#endif
#ifndef DCM_E_BUSYREPEATREQUEST
#define DCM_E_BUSYREPEATREQUEST (0x21U)
#endif
#ifndef DCM_E_CONDITIONSNOTCORRECT
#define DCM_E_CONDITIONSNOTCORRECT (0x22U)
#endif
#ifndef DCM_E_REQUESTSEQUENCEERROR
#define DCM_E_REQUESTSEQUENCEERROR (0x24U)
#endif
#ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (0x25U)
#endif
#ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (0x26U)
#endif
#ifndef DCM_E_REQUESTOUTOFRANGE
#define DCM_E_REQUESTOUTOFRANGE (0x31U)
#endif
#ifndef DCM_E_SECURITYACCESSDENIED
#define DCM_E_SECURITYACCESSDENIED (0x33U)
#endif
#ifndef DCM_E_AUTHENTICATIONREQUIRED
#define DCM_E_AUTHENTICATIONREQUIRED (0x34U)
#endif
#ifndef DCM_E_INVALIDKEY
#define DCM_E_INVALIDKEY (0x35U)
#endif
#ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#define DCM_E_EXCEEDNUMBEROFATTEMPTS (0x36U)
#endif
#ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (0x37U)
#endif
#ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#define DCM_E_UPLOADDOWNLOADNOTACCEPTED (0x70U)
#endif
#ifndef DCM_E_TRANSFERDATASUSPENDED
#define DCM_E_TRANSFERDATASUSPENDED (0x71U)
#endif
#ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#define DCM_E_GENERALPROGRAMMINGFAILURE (0x72U)
#endif
#ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#define DCM_E_WRONGBLOCKSEQUENCECOUNTER (0x73U)
#endif
#ifndef DCM_E_RESPONSE_PENDING
#define DCM_E_RESPONSE_PENDING (0x78U)
#endif
#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (0x7EU)
#endif
#ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (0x7FU)
#endif
#ifndef DCM_E_RPMTOOHIGH
#define DCM_E_RPMTOOHIGH (0x81U)
#endif
#ifndef DCM_E_RPMTOOLOW
#define DCM_E_RPMTOOLOW (0x82U)
#endif
#ifndef DCM_E_ENGINEISRUNNING
#define DCM_E_ENGINEISRUNNING (0x83U)
#endif
#ifndef DCM_E_ENGINEISNOTRUNNING
#define DCM_E_ENGINEISNOTRUNNING (0x84U)
#endif
#ifndef DCM_E_ENGINERUNTIMETOOLOW
#define DCM_E_ENGINERUNTIMETOOLOW (0x85U)
#endif
#ifndef DCM_E_TEMPERATURETOOHIGH
#define DCM_E_TEMPERATURETOOHIGH (0x86U)
#endif
#ifndef DCM_E_TEMPERATURETOOLOW
#define DCM_E_TEMPERATURETOOLOW (0x87U)
#endif
#ifndef DCM_E_VEHICLESPEEDTOOHIGH
#define DCM_E_VEHICLESPEEDTOOHIGH (0x88U)
#endif
#ifndef DCM_E_VEHICLESPEEDTOOLOW
#define DCM_E_VEHICLESPEEDTOOLOW (0x89U)
#endif
#ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#define DCM_E_THROTTLE_PEDALTOOHIGH (0x8AU)
#endif
#ifndef DCM_E_THROTTLE_PEDALTOOLOW
#define DCM_E_THROTTLE_PEDALTOOLOW (0x8BU)
#endif
#ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (0x8CU)
#endif
#ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#define DCM_E_TRANSMISSIONRANGENOTINGEAR (0x8DU)
#endif
#ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#define DCM_E_BRAKESWITCH_NOTCLOSED (0x8FU)
#endif
#ifndef DCM_E_SHIFTERLEVERNOTINPARK
#define DCM_E_SHIFTERLEVERNOTINPARK (0x90U)
#endif
#ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#define DCM_E_TORQUECONVERTERCLUTCHLOCKED (0x91U)
#endif
#ifndef DCM_E_VOLTAGETOOHIGH
#define DCM_E_VOLTAGETOOHIGH (0x92U)
#endif
#ifndef DCM_E_VOLTAGETOOLOW
#define DCM_E_VOLTAGETOOLOW (0x93U)
#endif
#ifndef DCM_E_VMSCNC_0
#define DCM_E_VMSCNC_0 (0xF0U)
#endif
#ifndef DCM_E_VMSCNC_1
#define DCM_E_VMSCNC_1 (0xF1U)
#endif
#ifndef DCM_E_VMSCNC_2
#define DCM_E_VMSCNC_2 (0xF2U)
#endif
#ifndef DCM_E_VMSCNC_3
#define DCM_E_VMSCNC_3 (0xF3U)
#endif
#ifndef DCM_E_VMSCNC_4
#define DCM_E_VMSCNC_4 (0xF4U)
#endif
#ifndef DCM_E_VMSCNC_5
#define DCM_E_VMSCNC_5 (0xF5U)
#endif
#ifndef DCM_E_VMSCNC_6
#define DCM_E_VMSCNC_6 (0xF6U)
#endif
#ifndef DCM_E_VMSCNC_7
#define DCM_E_VMSCNC_7 (0xF7U)
#endif
#ifndef DCM_E_VMSCNC_8
#define DCM_E_VMSCNC_8 (0xF8U)
#endif
#ifndef DCM_E_VMSCNC_9
#define DCM_E_VMSCNC_9 (0xF9U)
#endif
#ifndef DCM_E_VMSCNC_A
#define DCM_E_VMSCNC_A (0xFAU)
#endif
#ifndef DCM_E_VMSCNC_B
#define DCM_E_VMSCNC_B (0xFBU)
#endif
#ifndef DCM_E_VMSCNC_C
#define DCM_E_VMSCNC_C (0xFCU)
#endif
#ifndef DCM_E_VMSCNC_D
#define DCM_E_VMSCNC_D (0xFDU)
#endif
#ifndef DCM_E_VMSCNC_E
#define DCM_E_VMSCNC_E (0xFEU)
#endif
#ifndef DCM_E_INVALIDTIMEPERIOD
#define DCM_E_INVALIDTIMEPERIOD (0x50U)
#endif
#ifndef DCM_E_INVALIDSIGNATURE
#define DCM_E_INVALIDSIGNATURE (0x51U)
#endif
#ifndef DCM_E_INVALIDCHAINOFTRUST
#define DCM_E_INVALIDCHAINOFTRUST (0x52U)
#endif
#ifndef DCM_E_INVALIDTYPE
#define DCM_E_INVALIDTYPE (0x53U)
#endif
#ifndef DCM_E_INVALIDFORMAT
#define DCM_E_INVALIDFORMAT (0x54U)
#endif
#ifndef DCM_E_INVALIDCONTENT
#define DCM_E_INVALIDCONTENT (0x55U)
#endif
#ifndef DCM_E_INVALIDSCOPE
#define DCM_E_INVALIDSCOPE (0x56U)
#endif
#ifndef DCM_E_INVALIDCERTIFICATE
#define DCM_E_INVALIDCERTIFICATE (0x57U)
#endif
#ifndef DCM_E_OWNERSHIPVERIFICATIONFAILED
#define DCM_E_OWNERSHIPVERIFICATIONFAILED (0x58U)
#endif
#ifndef DCM_E_CHALLENGECALCULATIONFAILED
#define DCM_E_CHALLENGECALCULATIONFAILED (0x59U)
#endif
#ifndef DCM_OBD_ON_CAN
#define DCM_OBD_ON_CAN (0x00U)
#endif
#ifndef DCM_OBD_ON_FLEXRAY
#define DCM_OBD_ON_FLEXRAY (0x01U)
#endif
#ifndef DCM_OBD_ON_IP
#define DCM_OBD_ON_IP (0x02U)
#endif
#ifndef DCM_UDS_ON_CAN
#define DCM_UDS_ON_CAN (0x03U)
#endif
#ifndef DCM_UDS_ON_FLEXRAY
#define DCM_UDS_ON_FLEXRAY (0x04U)
#endif
#ifndef DCM_UDS_ON_IP
#define DCM_UDS_ON_IP (0x05U)
#endif
#ifndef DCM_ROE_ON_CAN
#define DCM_ROE_ON_CAN (0x06U)
#endif
#ifndef DCM_ROE_ON_FLEXRAY
#define DCM_ROE_ON_FLEXRAY (0x07U)
#endif
#ifndef DCM_ROE_ON_IP
#define DCM_ROE_ON_IP (0x08U)
#endif
#ifndef DCM_PERIODICTRANS_ON_CAN
#define DCM_PERIODICTRANS_ON_CAN (0x09U)
#endif
#ifndef DCM_PERIODICTRANS_ON_FLEXRAY
#define DCM_PERIODICTRANS_ON_FLEXRAY (0x0AU)
#endif
#ifndef DCM_PERIODICTRANS_ON_IP
#define DCM_PERIODICTRANS_ON_IP (0x0BU)
#endif
#ifndef DCM_NO_ACTIVE_PROTOCOL
#define DCM_NO_ACTIVE_PROTOCOL (0x0CU)
#endif
#ifndef DCM_UDS_ON_LIN
#define DCM_UDS_ON_LIN (0x0DU)
#endif
#ifndef DCM_SUPPLIER_1
#define DCM_SUPPLIER_1 (0xF0U)
#endif
#ifndef DCM_SUPPLIER_2
#define DCM_SUPPLIER_2 (0xF1U)
#endif
#ifndef DCM_SUPPLIER_3
#define DCM_SUPPLIER_3 (0xF2U)
#endif
#ifndef DCM_SUPPLIER_4
#define DCM_SUPPLIER_4 (0xF3U)
#endif
#ifndef DCM_SUPPLIER_5
#define DCM_SUPPLIER_5 (0xF4U)
#endif
#ifndef DCM_SUPPLIER_6
#define DCM_SUPPLIER_6 (0xF5U)
#endif
#ifndef DCM_SUPPLIER_7
#define DCM_SUPPLIER_7 (0xF6U)
#endif
#ifndef DCM_SUPPLIER_8
#define DCM_SUPPLIER_8 (0xF7U)
#endif
#ifndef DCM_SUPPLIER_9
#define DCM_SUPPLIER_9 (0xF8U)
#endif
#ifndef DCM_SUPPLIER_10
#define DCM_SUPPLIER_10 (0xF9U)
#endif
#ifndef DCM_SUPPLIER_11
#define DCM_SUPPLIER_11 (0xFAU)
#endif
#ifndef DCM_SUPPLIER_12
#define DCM_SUPPLIER_12 (0xFBU)
#endif
#ifndef DCM_SUPPLIER_13
#define DCM_SUPPLIER_13 (0xFCU)
#endif
#ifndef DCM_SUPPLIER_14
#define DCM_SUPPLIER_14 (0xFDU)
#endif
#ifndef DCM_SUPPLIER_15
#define DCM_SUPPLIER_15 (0xFEU)
#endif
#ifndef DCM_SEC_LEV_LOCKED
#define DCM_SEC_LEV_LOCKED (0x00U)
#endif
#ifndef DCM_SEC_LEV_Level_2
#define DCM_SEC_LEV_Level_2 (0x02U)
#endif
#ifndef DCM_SEC_LEV_Level_3
#define DCM_SEC_LEV_Level_3 (0x03U)
#endif
#define uint8_LowerLimit (0U)
#define uint8_UpperLimit (255U)
#define uint16_LowerLimit (0U)
#define uint16_UpperLimit (65535U)

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

/* ============ Compat: Dcm 配置引用的通信控制切换函数 ============ */
/* RTE 未集成，声明在此，实现在 Compat/RteSwitch_Stub.c */
#include "Std_Types.h"
Std_ReturnType Rte_Switch_CommunicationControlModeSwitchInterface_ComMChannel_CAN0_communicationControl(uint8 mode);
#endif /* RTE_DCM_TYPE_H */
