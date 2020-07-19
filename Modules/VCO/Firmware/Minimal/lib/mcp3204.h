/**
**********************************************************************************************************************************************************************************************************************************
* @file:	mcp3204.h
* @author:	Afonso Muralha
* @date:	2020年07月03日 23:23:03 Friday
* @brief:	
**********************************************************************************************************************************************************************************************************************************
**/
#ifndef __MCP3204_H
#define __MCP3204_H

#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "main.h"

#define DEFAULT_TIMEOUT HAL_MAX_DELAY//5000
#define BUFF1 0x06

#define ADC_CH0 0x08
#define ADC_CH1 0x09
#define ADC_CH2 0x0A
#define ADC_CH3 0x0B


extern SPI_HandleTypeDef hspi1;

void adcInit();
uint16_t adcRead(uint8_t channel);
uint16_t adcReadAll( uint16_t *valChan0, uint16_t *valChan1, uint16_t *valChan2, uint16_t *valChan3 );



#endif