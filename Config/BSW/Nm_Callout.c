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
 * @file        : Nm_Callout.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile configuration parameter of Nm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "Nm_Internal.h"
#include "Nm.h"

/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK Nm_Callout Inclusion>
*/
/* inlcude other header file */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/
/* ============================================ internal data definitions =========================================== */
/* ========================================== external function definitions ========================================= */


#define NM_START_SEC_CODE
#include "Nm_MemMap.h"
/**
 *   Service to indicate that an NM message with set Repeat
 *   Message Request Bit has been received
 */
void Nm_RepeatMessageIndication(NetworkHandleType nmNetworkHandle)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Nm_RepeatMessageIndication>
    */
    NM_UNUSED(nmNetworkHandle);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define NM_STOP_SEC_CODE
#include "Nm_MemMap.h"

#if (STD_ON == NM_PDU_RX_INDICATION_ENABLED)
#define NM_START_SEC_CODE
#include "Nm_MemMap.h"
/**
 *   Notification that a NM message has been received.
 */
void Nm_PduRxIndication(NetworkHandleType nmNetworkHandle)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Nm_PduRxIndication>
    */
    NM_UNUSED(nmNetworkHandle);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define NM_STOP_SEC_CODE
#include "Nm_MemMap.h"
#endif

#define NM_START_SEC_CODE
#include "Nm_MemMap.h"
/**
 *   Service to indicate that an attempt to send an NM message
 *   failed.
 */
void Nm_TxTimeoutException(NetworkHandleType nmNetworkHandle)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Nm_TxTimeoutException>
    */
    NM_UNUSED(nmNetworkHandle);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define NM_STOP_SEC_CODE
#include "Nm_MemMap.h"

