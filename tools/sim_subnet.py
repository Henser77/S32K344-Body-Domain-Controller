#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
sim_subnet.py —— 动力/车身子网模拟器 + 网关输出监视

普通模式（一直发送）：
    D:\\tools\\python32\\python.exe sim_subnet.py

超时验证模式（发 2 秒、停 2 秒，循环）：
    D:\\tools\\python32\\python.exe sim_subnet.py --timeout-test

超时模式用来观察：
    停发 0.5 秒后 0x101 车速变成 0xFFFF（无效）
    停发 0.5 秒后 0x201 扭矩限制回到 1000（100%）

运行前必须关闭 USB_CAN Tool。
"""

import ctypes
import sys
import time

sys.path.insert(0, r"D:\tools")
import can_driver as cd

DEV_TYPE = 4
DEV_INDEX = 0
CH_CAN1 = 0
CH_CAN2 = 1
TIMING_500K = (0x00, 0x1C)
TIMING_125K = (0x03, 0x1C)
PERIOD_MS = 100


def le16(v):
    return [v & 0xFF, (v >> 8) & 0xFF]


def build_0x200(speed=6000, rpm=3000, gear=3, soc=80):
    d = [0] * 8
    d[0:2] = le16(speed)
    d[2:4] = le16(rpm)
    d[4] = gear & 0x0F
    d[5] = soc & 0xFF
    return d


def build_0x210(torque=0, limit=1000, temp_c=110, derate=100):
    d = [0] * 8
    d[0:2] = le16(torque)
    d[2:4] = le16(limit)
    d[4] = (temp_c + 40) & 0xFF
    d[5] = derate & 0xFF
    return d


def build_0x100(door=0x5, lock=2, light=3, wiper=1, battery=120, ignition=1):
    d = [0] * 8
    d[0] = (door & 0x0F) | ((lock & 0x03) << 4)
    d[1] = (light & 0x0F) | ((wiper & 0x03) << 4)
    d[2] = battery & 0xFF
    d[3] = ignition & 0x01
    return d


def build_0x110(light_cmd=2, turn=0, flash=0, level=80):
    d = [0] * 8
    d[0] = (light_cmd & 0x07) | ((turn & 0x03) << 3) | ((flash & 0x01) << 5)
    d[1] = level & 0xFF
    return d


def decode_0x101(data):
    if len(data) < 4:
        return None
    speed = data[0] | (data[1] << 8)
    door = data[2] & 0x0F
    light = (data[2] >> 4) & 0x0F
    cnt = data[3] & 0x0F
    return speed, door, light, cnt


def decode_0x201(data):
    if len(data) < 2:
        return None
    return data[0] | (data[1] << 8)


def main():
    timeout_test = "--timeout-test" in sys.argv
    dll = cd.load_dll()

    if dll.VCI_OpenDevice(DEV_TYPE, DEV_INDEX, 0) != 1:
        print("打开设备失败：请先关闭 USB_CAN Tool")
        return 1

    cfg = cd.VCI_INIT_CONFIG()
    cfg.AccCode = 0
    cfg.AccMask = 0xFFFFFFFF
    cfg.Filter = 0
    cfg.Mode = 0

    cfg.Timing0, cfg.Timing1 = TIMING_500K
    if dll.VCI_InitCAN(DEV_TYPE, DEV_INDEX, CH_CAN1, ctypes.byref(cfg)) != 1:
        print("CH1 500k 初始化失败")
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)
        return 1

    cfg.Timing0, cfg.Timing1 = TIMING_125K
    if dll.VCI_InitCAN(DEV_TYPE, DEV_INDEX, CH_CAN2, ctypes.byref(cfg)) != 1:
        print("CH2 125k 初始化失败")
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)
        return 1

    dll.VCI_StartCAN(DEV_TYPE, DEV_INDEX, CH_CAN1)
    dll.VCI_StartCAN(DEV_TYPE, DEV_INDEX, CH_CAN2)
    dll.VCI_ClearBuffer(DEV_TYPE, DEV_INDEX, CH_CAN1)
    dll.VCI_ClearBuffer(DEV_TYPE, DEV_INDEX, CH_CAN2)

    print("模拟器已启动：")
    if timeout_test:
        print("  超时验证模式：发送 2 秒 -> 停止 2 秒 -> 循环")
    else:
        print("  普通模式：持续发送（Ctrl+C 退出）")
    print("  CH1 500k : 发 0x200 / 0x210，收 0x201")
    print("  CH2 125k : 发 0x100 / 0x110，收 0x101\n")

    rx1 = (cd.VCI_CAN_OBJ * 256)()
    rx2 = (cd.VCI_CAN_OBJ * 256)()
    tx = cd.VCI_CAN_OBJ()

    def send(ch, can_id, data):
        tx.ID = can_id
        tx.SendType = 0
        tx.RemoteFlag = 0
        tx.ExternFlag = 0
        tx.DataLen = len(data)
        for i, v in enumerate(data):
            tx.Data[i] = v
        dll.VCI_Transmit(DEV_TYPE, DEV_INDEX, ch, ctypes.byref(tx), 1)

    def recv(ch, buf, timeout_ms):
        n = dll.VCI_Receive(DEV_TYPE, DEV_INDEX, ch, buf, 256, int(timeout_ms))
        out = []
        if n and n <= 256:
            for i in range(n):
                o = buf[i]
                out.append((o.ID, bytes(o.Data[:o.DataLen])))
        return out

    start = time.time()
    last_print = 0.0
    last_101 = None
    last_201 = None
    last_dm = None
    last_tx_state = None

    try:
        while True:
            elapsed = time.time() - start

            if timeout_test:
                phase = elapsed % 4.0
                tx_on = phase < 2.0
            else:
                tx_on = True

            if tx_on:
                send(CH_CAN1, 0x200, build_0x200())
                send(CH_CAN1, 0x210, build_0x210())
                send(CH_CAN2, 0x100, build_0x100())
                send(CH_CAN2, 0x110, build_0x110())

            for cid, data in recv(CH_CAN1, rx1, 0):
                if cid == 0x201:
                    last_201 = decode_0x201(data)
            for cid, data in recv(CH_CAN2, rx2, 0):
                if cid == 0x101:
                    last_101 = decode_0x101(data)
                elif cid == 0x7FD and len(data) >= 6:
                    last_dm = (data[0], data[1], data[2] | (data[3] << 8), data[4], data[5])

            now = time.time()
            if now - last_print >= 0.5:
                last_print = now
                if timeout_test:
                    state = "发送" if tx_on else "停止"
                    if state != last_tx_state:
                        print("\n===== 模拟器 %s =====" % state)
                        last_tx_state = state

                if last_101:
                    sp, door, light, cnt = last_101
                    if sp == 0xFFFF:
                        sp_txt = "INVALID"
                    else:
                        sp_txt = "%d.%02d km/h" % (sp // 100, sp % 100)
                    print("0x101  speed=%-10s door=0x%X  light=0x%X  cnt=%d"
                          % (sp_txt, door, light, cnt))
                else:
                    print("0x101  未收到")

                if last_201 is not None:
                    print("0x201  torque_limit=%d (%.1f%%)"
                          % (last_201, last_201 / 10.0))
                else:
                    print("0x201  未收到")
                if last_dm is not None:
                    print("0x7FD  RTSt=0x%02X DMFlag=0x%02X BaseDM=%d DMEn=%d"
                          % (last_dm[0], last_dm[1], last_dm[2], last_dm[4]))
                print("-" * 60)

            time.sleep(PERIOD_MS / 1000.0)
    except KeyboardInterrupt:
        print("\n退出")
    finally:
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)

    return 0


if __name__ == "__main__":
    sys.exit(main())
