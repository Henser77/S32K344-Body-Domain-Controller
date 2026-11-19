/**
 * Compat: NvM RAM block buffer definitions
 */
#include "Std_Types.h"

uint8 g_NvMConfigIdBuf[8]  __attribute__((aligned(8)));
uint8 g_NvMVinBuffer[24]   __attribute__((aligned(8)));
