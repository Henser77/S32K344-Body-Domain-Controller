#ifndef SCHM_DCM_H
#define SCHM_DCM_H
#include "Std_Types.h"
static inline void SchM_Dcm_Enter(void){ __asm__ volatile ("cpsid i" ::: "memory"); }
static inline void SchM_Dcm_Exit(void){ __asm__ volatile ("cpsie i" ::: "memory"); }
#define SchM_Enter_Dcm_ExclusiveArea()  SchM_Dcm_Enter()
#define SchM_Exit_Dcm_ExclusiveArea()   SchM_Dcm_Exit()
#define SchM_Switch_Dcm_DcmControlDTCSetting(x)        ((void)(x))
#define SchM_Switch_Dcm_DcmDiagnosticSessionControl(x) ((void)(x))
#define SchM_Switch_Dcm_DcmEcuReset(x)                 ((void)(x))
#define SchM_Switch_Dcm_DcmSecurityAccess(x)           ((void)(x))
#endif