/**
 * Compat: NvM RAM block buffers (user provided, AutoFill disabled)
 */
#ifndef NVM_USERBUFFER_H
#define NVM_USERBUFFER_H

#include "Std_Types.h"

extern uint8 g_NvMConfigIdBuf[8];    /* NvMBlock_ConfigID RAM block */
extern uint8 g_NvMVinBuffer[24];     /* NvMBlock_VIN RAM block      */

#endif /* NVM_USERBUFFER_H */
