import ctypes

from message_base import CStructBase


class MSGButtonPress(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("button_state", ctypes.c_uint32),
    ]

    def __init__(self, button_state):
        self.button_state = button_state


class MSGSensorSettings(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("sensitivity_iso", ctypes.c_float),
        ("shutter_speed", ctypes.c_float),
    ]

    def __init__(self, sensitivity_iso, shutter_speed):
        self.sensitivity_iso = sensitivity_iso
        self.shutter_speed = shutter_speed


class MSGGUIActions(CStructBase):
    fields = [("mid", ctypes.c_uint32), ("action", ctypes.c_uint32)]

    def __init__(self, action):
        self.action = action


class MSGTick(CStructBase):
    fields = [("mid", ctypes.c_uint32), ("time", ctypes.c_uint32)]

    def __init__(self, time):
        self.time = time


class MSGBatteryStats(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("voltage", ctypes.c_float),
        ("current", ctypes.c_float),
        ("soc", ctypes.c_float),
    ]

    def __init__(self, voltage, current, soc):
        self.voltage = voltage
        self.current = current
        self.soc = soc


class MSGChargingStats(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("input_voltage", ctypes.c_float),
        ("input_current", ctypes.c_float),
        ("output_voltage", ctypes.c_float),
        ("output_current", ctypes.c_float),
        ("chrgr_temp", ctypes.c_float),
        ("charging", ctypes.c_uint32),
    ]

    def __init__(
        self,
        input_voltage,
        input_current,
        output_voltage,
        output_current,
        chrgr_temp,
        charging,
    ):
        self.input_voltage = input_voltage
        self.input_current = input_current
        self.output_voltage = output_voltage
        self.output_current = output_current
        self.chrgr_temp = chrgr_temp
        self.charging = charging


class MSGSystemStats(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("bus_voltage", ctypes.c_float),
        ("bus_current", ctypes.c_float),
        ("bus_power", ctypes.c_float),
        ("pmc_temp", ctypes.c_float),
    ]

    def __init__(self, bus_voltage, bus_current, bus_power, pmc_temp):
        self.bus_voltage = bus_voltage
        self.bus_current = bus_current
        self.bus_power = bus_power
        self.pmc_temp = pmc_temp


class MSGUSBPDStats(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("bus_voltage", ctypes.c_float),
        ("bus_current", ctypes.c_float),
        ("attached", ctypes.c_uint32),
    ]

    def __init__(self, bus_voltage, bus_current, attached):
        self.bus_voltage = bus_voltage
        self.bus_current = bus_current
        self.bus_power = attached


MSGS = {
    0x1001: MSGButtonPress,
    0x1002: MSGSensorSettings,
    0x1003: MSGGUIActions,
    0x1004: MSGTick,
    0x1005: MSGBatteryStats,
    0x1006: MSGChargingStats,
    0x1007: MSGSystemStats,
    0x1008: MSGUSBPDStats,
}
