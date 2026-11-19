#ifndef SCHM_CANTP_H
#define SCHM_CANTP_H
#include "Std_Types.h"
static inline void SchM_CanTp_Enter(void){ __asm__ volatile ("cpsid i" ::: "memory"); }
static inline void SchM_CanTp_Exit(void){ __asm__ volatile ("cpsie i" ::: "memory"); }
#define SchM_Enter_CanTp_ExclusiveArea()  SchM_CanTp_Enter()
#define SchM_Exit_CanTp_ExclusiveArea()   SchM_CanTp_Exit()
#endif