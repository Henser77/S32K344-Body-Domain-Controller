/**
 * Compat: VIN <-> NvM block adapter
 *
 * Keeps the Dcm callouts independent from NvM headers.
 * Called from Dcm_Callout.c USERBLOCKs.
 *
 * OpStatus values (values of Dcm_OpStatusType):
 *   0 = DCM_INITIAL, 1 = DCM_PENDING, 2 = DCM_CANCEL
 * Return value 10 = DCM_E_PENDING.
 */
#ifndef NVM_VINIF_H
#define NVM_VINIF_H

#include "Std_Types.h"

Std_ReturnType NvMVin_Read(uint8* Data, uint8 OpStatus);
Std_ReturnType NvMVin_Write(const uint8* Data, uint8 OpStatus);

#endif /* NVM_VINIF_H */
