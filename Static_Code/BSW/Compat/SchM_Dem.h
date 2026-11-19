#ifndef SCHM_DEM_H
#define SCHM_DEM_H
#include "Std_Types.h"
static inline void SchM_Dem_Enter(void){ __asm__ volatile ("cpsid i" ::: "memory"); }
static inline void SchM_Dem_Exit(void){ __asm__ volatile ("cpsie i" ::: "memory"); }
#define SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0()  SchM_Dem_Enter()
#define SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0()   SchM_Dem_Exit()
#define SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1()  SchM_Dem_Enter()
#define SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1()   SchM_Dem_Exit()
#define SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2()  SchM_Dem_Enter()
#define SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2()   SchM_Dem_Exit()
#define SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_3()  SchM_Dem_Enter()
#define SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_3()   SchM_Dem_Exit()
#endif