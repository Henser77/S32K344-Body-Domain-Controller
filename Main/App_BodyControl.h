/**
 * App_BodyControl - 车身域控制器应用逻辑
 *
 * 输入（Com Rx）：
 *   Sig_VehicleSpeed / Sig_MotorTemp / Sig_SOC     ← CAN1 0x200 / 0x210
 *   Sig_DoorStatus / Sig_LightStatus               ← CAN2 0x100
 *
 * 输出（Com Tx）：
 *   Sig_TorqueLimitCmd                             → CAN1 0x201（扭矩限制）
 *   Sig_GwVehicleSpeed / GwDoorStatus / GwLightStatus / GwAliveCounter → CAN2 0x101
 */
#ifndef APP_BODYCONTROL_H
#define APP_BODYCONTROL_H

#include "Std_Types.h"

void App_BodyControl_Init(void);
void App_BodyControl_10ms(void);

#endif /* APP_BODYCONTROL_H */
