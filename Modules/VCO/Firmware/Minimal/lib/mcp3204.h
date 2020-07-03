#ifndef __MCP3204_H
#define __MCP3204_H

#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "main.h"

#define DEFAULT_TIMEOUT 5000
#define BUFF1 0x06

extern SPI_HandleTypeDef hspi1;

uint16_t readADC(uint8_t channel);



#endif