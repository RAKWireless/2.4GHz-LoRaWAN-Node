#ifndef TX_RX_TEST_H
#define TX_RX_TEST_H
#include "am_mcu_apollo.h"

typedef struct
{
	uint8_t dev_eui[8];
	uint8_t join_eui[8];
	uint8_t app_key[16];
	uint32_t devaddr;
	uint8_t nwkskey[16];
	uint8_t appskey[16];
	uint8_t class;
	uint8_t dr;
	uint8_t confirm;
	uint32_t interval; 
	uint8_t retry;
	uint8_t join_mode;
} LoRaWAN_Params;

extern LoRaWAN_Params lora_params;

#endif