[Uploading README.md…]()
# S32K344 车身域控制器（三路 CAN 网关）

基于 NXP S32K344 的车身域控制器 Demo：MCAL 用 EB tresos 配置，上层 BSW 用
开源小满（EasyXMen V26.10）配置生成，OS 使用 FreeRTOS。

项目目标不是“能收能发”，而是做一个**能理解信号、做决策、再重新打包**的域控制器，
同时保留报文级网关能力。

---

## 1. 硬件与工具链

| 项 | 内容 |
|---|---|
| MCU | NXP S32K344（Cortex-M7） |
| 调试/烧录 | S32DS + J-Link |
| MCAL 配置 | EB tresos（Can / Port / Mcu / Gpt / Fls / Mem 等） |
| BSW 配置 | 小满 EasyXMen V26.10（CanIf / PduR / Com / CanTp / Dcm / Dem / NvM / Fee / MemAcc / CanSM / ComM / CanNm / Nm / BswM / EcuM） |
| OS | FreeRTOS（SysTick 1ms） |
| 上位机 | USB-CAN（2 通道）+ Python 模拟器 |

---

## 2. 三路 CAN 划分

| 通道 | 波特率 | 定位 | 主要报文 |
|---|---|---|---|
| CAN0 | 500 kbps | 诊断 / OTA | 0x7E0 / 0x7E8、0x500、0x120 / 0x123 |
| CAN1 | 500 kbps | 动力子网 | 0x200、0x210、0x201、0x123、0x500 |
| CAN2 | 125 kbps | 车身子网 | 0x100、0x110、0x101、0x123、0x500 |

三个网络各自独立：独立的 CanSM 网络、ComM 通道、CanNm 通道。

---

## 3. 软件架构

```
                 ┌─────────────────────────────┐
                 │        应用层 App            │
                 │  App_BodyControl_10ms        │
                 │  扭矩保护 / 状态汇总 / 计数   │
                 └──────────────┬──────────────┘
                                │ Com_ReceiveSignal / Com_SendSignal
                 ┌──────────────▼──────────────┐
                 │            Com              │
                 │  Rx：0x200/0x210/0x100/0x110 │
                 │  Tx：0x101/0x201/0x123       │
                 └──────────────┬──────────────┘
                                │
                 ┌──────────────▼──────────────┐
                 │           PduR              │
                 │  Com↔CanIf / CanTp↔Dcm       │
                 │  CanIf→CanIf（报文网关）      │
                 └───┬──────────┬──────────┬───┘
                     │          │          │
                ┌────▼───┐ ┌────▼───┐ ┌────▼───┐
                │ CanIf  │ │ CanTp  │ │ CanNm  │
                └────┬───┘ └────┬───┘ └────┬───┘
                     │          │          │
           ┌─────────▼──────────▼──────────▼─────────┐
           │      CanSM（三通道）/ ComM（三通道）       │
           └─────────────────┬───────────────────────┘
                             │
           ┌─────────────────▼───────────────────────┐
           │  Can 驱动：CAN0 / CAN1 / CAN2            │
           └─────────────────────────────────────────┘
```

任务划分（FreeRTOS）：

| 任务 | 周期 | 内容 |
|---|---|---|
| Task_1ms | 1 ms | Fee / MemAcc / Mem_43_INFLS |
| Task_5ms | 5 ms | CanTp / Dcm / CanSM ×3 |
| Task_10ms | 10 ms | Com / CanNm ×3 / ComM ×3 / EcuM / BswM / NvM / Dem / wakeup / 应用 |

---

## 4. 通信矩阵

### 4.1 接收（子网 → 域控制器）

| 报文 | 通道 | 周期 | 信号（起始位/长度） |
|---|---|---|---|
| 0x200 PT_Status | CAN1 | 100 ms | VehicleSpeed 0/16、EngineSpeed 16/16、Gear 32/4、SOC 40/8 |
| 0x210 PT_Torque | CAN1 | 100 ms | ActualTorque 0/16、TorqueLimit 16/16、MotorTemp 32/8（offset -40）、Derating 40/8 |
| 0x100 Body_Status | CAN2 | 100 ms | Door 0/4、Lock 4/2、Light 8/4、Wiper 12/2、Trunk 14/1、Hood 15/1、Battery 16/8、Ignition 24/1 |
| 0x110 Light_Cmd | CAN2 | 100 ms | LightCmd 0/3、Turn 3/2、Flash 5/1、LightLevel 8/8 |

所有接收信号配置 0.5 s 超时，超时替换为无效值（0xFFFF / 0xFF / 0xF）。

### 4.2 发送（域控制器 → 子网）

| 报文 | 通道 | 周期 | 信号 |
|---|---|---|---|
| 0x201 PT_Cmd | CAN1 | 100 ms（MIXED） | TorqueLimitCmd 0/16，0~1000 对应 0~100% |
| 0x101 Body_GwStatus | CAN2 | 100 ms | GwVehicleSpeed 0/16、GwDoorStatus 16/4、GwLightStatus 20/4、GwAliveCounter 24/4 |
| 0x123 GW_Test | CAN1/CAN2 | 事件（由 0x120 触发） | 报文级转发，内容原样复制 |

### 4.3 诊断与网络管理

| 报文 | 通道 | 说明 |
|---|---|---|
| 0x7E0 / 0x7E8 | CAN0 | UDS 物理请求/响应 |
| 0x500 | 三通道 | NM 报文：CAN0/CAN1 周期 0.5 s，CAN2 周期 1.0 s |

---

## 5. 已实现功能

### 5.1 信号级网关

| 输入 | 处理 | 输出 |
|---|---|---|
| 0x200 车速 | 解包后重新打包 | 0x101 GwVehicleSpeed |
| 0x100 车门状态 | 取低 4 位 | 0x101 GwDoorStatus |
| 0x110 灯光命令 | 取低 3 位 | 0x101 GwLightStatus |
| 0x210 电机温度 | raw-40 换算物理值 | 0x201 扭矩限制 |
| 0x210 SOC | 低电量判断 | 0x201 扭矩限制 |

扭矩保护策略：

```
温度 > 100℃ → 限扭 50%
温度 > 120℃ → 限扭 0%
SOC  < 10%  → 限扭 30%
信号无效     → 不降扭（保持 100%）
```

### 5.2 报文级网关

```
CAN0 0x120 → PduR → CAN1 0x123
                  → CAN2 0x123
```

### 5.3 网络管理

- 三通道 CanNm，周期发送 0x500
- 三通道 ComM / CanSM 联动
- 本地睡眠：释放所有用户 → Ready Sleep → Prepare Bus-Sleep → Bus-Sleep
- 本地唤醒：重新请求 FULL → Repeat Message 连发 3 帧 → Normal Operation
- 唤醒快速连发：3 帧，10 ms 间隔

### 5.4 诊断

| 服务 | 说明 |
|---|---|
| 0x10 | 会话切换（默认/扩展） |
| 0x11 | ECU 复位（硬复位/软复位） |
| 0x22 F190 | 读 VIN |
| 0x27 | 安全访问 Level 1（固定种子/密钥） |
| 0x2E F190 | 写 VIN（NvM 持久化） |
| 0x3E | Tester Present |

诊断链路：
```
CAN → CanIf → CanTp → PduR → Dcm
Dcm → PduR → CanTp → CanIf → CAN
```

### 5.5 存储

```
D-Flash → Mem_43_INFLS → MemAcc → Fee → MemIf(Compat) → NvM → Dem/Dcm
```

VIN 通过 NvM 块持久化，上电 `NvM_ReadAll` 恢复。

---

## 6. 目录结构

```
Config/
  BSW/        小满生成的 BSW 配置
  Mcal/       EB 生成的 MCAL 配置
  FreeRTOS/   FreeRTOSConfig.h
Main/
  main.c             任务、初始化、NM 演示
  App_BodyControl.c  信号处理与扭矩保护
Static_Code/
  BSW/        小满静态代码（含 Compat 适配层）
  Mcal/       MCAL 静态代码
tools/
  sim_subnet.py          双通道子网模拟器
  fix_after_regenerate.ps1  小满生成后的修复脚本
Project_Settings/  链接脚本、调试配置
```

---

## 7. 构建与测试

### 7.1 构建

1. EB tresos 生成 MCAL 配置，替换 `Config/Mcal`
2. 小满生成 BSW 配置，替换 `Config/BSW`
3. 运行修复脚本：

```powershell
powershell -ExecutionPolicy Bypass -File tools\fix_after_regenerate.ps1
```

4. 注意：小满生成会清空 `EcuM_Callout_Stubs.c` 的 USERBLOCK，
   需要保留项目中的初始化代码（Fee 就绪等待、NvM_ReadAll、ComM 请求等）。
5. S32DS Clean + Build，烧录 `Debug_FLASH/S32K344_Gateway.elf`

### 7.2 信号网关测试

接线：

```
USB-CAN CH1（500k）→ CAN1
USB-CAN CH2（125k）→ CAN2
```

运行：

```powershell
D:\tools\python32\python.exe tools\sim_subnet.py
```

预期：

```
0x101  speed=60.00 km/h  door=0x5  light=0x2  cnt=...
0x201  torque_limit=500 (50.0%)
```

### 7.3 超时测试

```powershell
D:\tools\python32\python.exe tools\sim_subnet.py --timeout-test
```

停发 0.5 s 后：

```
0x101  speed=INVALID     door=0xF  light=0x7
0x201  torque_limit=1000 (100.0%)
```

### 7.4 网络管理测试

烧录后运行模拟器，观察 30 秒：

| 时间 | 现象 |
|---|---|
| 0~10 s | 0x500、0x101、0x201 正常 |
| 10 s | 0x500 停止 |
| 10~13 s | 0x101/0x201 停止（NM 超时 + 总线安静） |
| 20 s | 0x500 连发 3 帧，随后恢复周期 |

---

## 8. 关键设计点

| 问题 | 处理 |
|---|---|
| CAN 控制器无法启动 | CanSM 由 ComM 驱动，三通道独立网络 |
| 报文 ID 为 0 | CanIf Tx PDU 必须配置 CanIfTxPduCanId |
| HardFault 在 Com_Init | 生成的 Com 配置缺少 IpduGroupRefPtr，导致指针错位 |
| Dcm 卡在 0x78 | NvM 写不完成；根因是 Mem_43_INFLS_Init 必须传 NULL_PTR |
| 接收超时不生效 | ① Rx IPdu 必须加入 Com IPdu 组；② 必须调用 Com_EnableReceptionDM |
| 温度判断错误 | Com_ReceiveSignal 返回原始值，需按 offset -40 换算 |

---

## 9. 已知限制 / 后续可做

- 远程总线唤醒（收发器低功耗唤醒）未验证
- 部分网络（Partial Networking / PNC）未实现
- Nm Coordinator 未启用（三通道当前独立睡眠）
- Bus-Off 恢复已配置但未做故障注入演示
- Bootloader / OTA（0x34/36/37）未集成
- DBC 文件尚未整理为正式通信矩阵

---

## 10. 版本

| 版本 | 内容 |
|---|---|
| v0.1 | MCAL 三路 CAN、HOH 配置 |
| v0.2 | CanIf / PduR / Com 三通道 |
| v0.3 | 报文级网关（0x120 → 0x123） |
| v0.4 | 信号级网关 + 应用层扭矩保护 |
| v0.5 | 诊断栈（0x10/0x11/0x22/0x27/0x2E/0x3E） |
| v0.6 | NvM VIN 持久化 |
| v0.7 | 三通道网络管理与睡眠/唤醒 |
