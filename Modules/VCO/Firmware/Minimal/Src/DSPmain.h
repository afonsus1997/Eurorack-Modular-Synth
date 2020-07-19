/**
**********************************************************************************************************************************************************************************************************************************
* @file:	DSPmain.h
* @author:	Afonso Muralha
* @date:	2020年07月03日 23:23:16 Friday
* @brief:	
**********************************************************************************************************************************************************************************************************************************
**/
#ifndef __DSPMAIN_H
#define __DSPMAIN_H

#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "main.h"
#include <math.h>
// #include "wavetables.h"

#define INT32_OFFSET 2147483647

#define SAMPLING_FREQ 48000
#define NBITS_FOR_SINE_SIZE 5 //for 32 positions
#define SINE_SHIFT 16-1-NBITS_FOR_SINE_SIZE
#define SINE_SHIFT_MASK 0x1F //16-NBITS_FOR_SINE_SIZE all 1's

enum waves_e
{
    sine = 0,
    square = 1
};

extern const int32_t SineWave[];

int32_t NCO0(uint8_t wave, uint16_t freq);
uint32_t sineProcessor(int16_t integratorState);



#endif

