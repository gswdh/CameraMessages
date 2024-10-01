#include "messages.h"

uint32_t messages_msg_len(topic_t mid)
{
	switch (mid)
	{
	case MSGButtonPress_MID:
		return MSGButtonPress_LEN;
		break;
	case MSGSensorSettings_MID:
		return MSGSensorSettings_LEN;
		break;
	case MSGGUIActions_MID:
		return MSGGUIActions_LEN;
		break;
	case MSGTick_MID:
		return MSGTick_LEN;
		break;
	case MSGBatteryStats_MID:
		return MSGBatteryStats_LEN;
		break;
	case MSGChargingStats_MID:
		return MSGChargingStats_LEN;
		break;
	case MSGSystemStats_MID:
		return MSGSystemStats_LEN;
		break;
	case MSGUSBPDStats_MID:
		return MSGUSBPDStats_LEN;
		break;
	case MSGPowerButton_MID:
		return MSGPowerButton_LEN;
		break;
	default:
		return 0;
		break;
	}
}
