/**
 * Compat: NvM exclusive area (bring-up shim)
 */
#ifndef SCHM_NVM_H
#define SCHM_NVM_H

static inline void SchM_NvM_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_NvM_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_NvM_Queue() SchM_NvM_EnterCritical()
#define SchM_Exit_NvM_Queue()  SchM_NvM_ExitCritical()

#endif /* SCHM_NVM_H */
