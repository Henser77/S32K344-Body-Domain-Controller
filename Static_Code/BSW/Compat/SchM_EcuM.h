/**
 * 临时兼容头 (bring-up shim)：SchM（BSW 调度器）的 EcuM 接口。
 * 类型与函数声明复用 Compat/Rte（Rte_Main.h / Rte_PBcfg.h）。
 */
#ifndef SCHM_ECUM_H
#define SCHM_ECUM_H

#include "Rte_Main.h"

extern void DisableAllInterrupts(void);
extern void EnableAllInterrupts(void);

#define SchM_Enter_EcuM_GlobalClock() DisableAllInterrupts()
#define SchM_Exit_EcuM_GlobalClock()  EnableAllInterrupts()
#define SchM_Enter_EcuM_WkEv()        DisableAllInterrupts()
#define SchM_Exit_EcuM_WkEv()         EnableAllInterrupts()

#endif /* SCHM_ECUM_H */