#ifndef __MESSAGES_H__
#define __MESSAGES_H__

#include <stdint.h>

#include "topic.h"

typedef struct __attribute__((packed))
{
	uint32_t mid;
	uint32_t button_state;
} MSGButtonPress_t;
#define MSGButtonPress_MID (0x1001)
#define MSGButtonPress_LEN (sizeof(MSGButtonPress_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	float sensitivity_iso;
	float shutter_speed;
} MSGSensorSettings_t;
#define MSGSensorSettings_MID (0x1002)
#define MSGSensorSettings_LEN (sizeof(MSGSensorSettings_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	uint32_t action;
} MSGGUIActions_t;
#define MSGGUIActions_MID (0x1003)
#define MSGGUIActions_LEN (sizeof(MSGGUIActions_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	uint32_t time;
} MSGTick_t;
#define MSGTick_MID (0x1004)
#define MSGTick_LEN (sizeof(MSGTick_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	float voltage;
	float current;
	float soc;
} MSGBatteryStats_t;
#define MSGBatteryStats_MID (0x1005)
#define MSGBatteryStats_LEN (sizeof(MSGBatteryStats_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	float input_voltage;
	float input_current;
	float output_voltage;
	float output_current;
	float chrgr_temp;
	uint32_t charging;
} MSGChargingStats_t;
#define MSGChargingStats_MID (0x1006)
#define MSGChargingStats_LEN (sizeof(MSGChargingStats_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	float bus_voltage;
	float bus_current;
	float bus_power;
	float pmc_temp;
} MSGSystemStats_t;
#define MSGSystemStats_MID (0x1007)
#define MSGSystemStats_LEN (sizeof(MSGSystemStats_t))

typedef struct __attribute__((packed))
{
	uint32_t mid;
	float bus_voltage;
	float bus_current;
	uint32_t attached;
} MSGUSBPDStats_t;
#define MSGUSBPDStats_MID (0x1008)
#define MSGUSBPDStats_LEN (sizeof(MSGUSBPDStats_t))

uint32_t messages_msg_len(topic_t mid);

#endif
