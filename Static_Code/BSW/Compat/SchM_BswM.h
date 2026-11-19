/**
 * 临时兼容头 (bring-up shim)：BswM 临界区。
 */
#ifndef SCHM_BSWM_H
#define SCHM_BSWM_H

#include "Rte_Main.h"

extern void DisableAllInterrupts(void);
extern void EnableAllInterrupts(void);

#define SchM_Enter_BswM() DisableAllInterrupts()
#define SchM_Exit_BswM()  EnableAllInterrupts()

#endif /* SCHM_BSWM_H */