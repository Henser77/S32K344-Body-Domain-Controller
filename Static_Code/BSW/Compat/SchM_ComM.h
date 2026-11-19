#ifndef SCHM_COMM_H
#define SCHM_COMM_H
#include "Std_Types.h"
static inline void SchM_ComM_Enter(void){ __asm__ volatile ("cpsid i" ::: "memory"); }
static inline void SchM_ComM_Exit(void){ __asm__ volatile ("cpsie i" ::: "memory"); }
#define SchM_Enter_ComM_Channel()                  SchM_ComM_Enter()
#define SchM_Exit_ComM_Channel()                   SchM_ComM_Exit()
#define SchM_Enter_ComM_CommunicationInhibition()  SchM_ComM_Enter()
#define SchM_Exit_ComM_CommunicationInhibition()   SchM_ComM_Exit()
#define SchM_Enter_ComM_Global()                   SchM_ComM_Enter()
#define SchM_Exit_ComM_Global()                    SchM_ComM_Exit()
#define SchM_Enter_ComM_Pnc()                      SchM_ComM_Enter()
#define SchM_Exit_ComM_Pnc()                       SchM_ComM_Exit()
#endif