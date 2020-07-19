/**
**********************************************************************************************************************************************************************************************************************************
* @file:	PCM1781DBQR.c
* @author:	Afonso Muralha
* @date:	2020年07月04日 01:05:52 Saturday
* @brief:	
**********************************************************************************************************************************************************************************************************************************
**/

#include "PCM1781DBQR.h"

void DAC8551_Init(){
    HAL_GPIO_WritePin(DEMP0_GPIO_Port, DEMP0_Pin, DEMP0);
    HAL_GPIO_WritePin(DEMP1_GPIO_Port, DEMP1_Pin, DEMP1);
    HAL_GPIO_WritePin(DACFORMAT_GPIO_Port, DACFORMAT_Pin, FORMAT);
    // HAL_GPIO_WritePin() DAT MUTE not routed, but shoud be controlled in the future
}

void DAC8551_WriteSample(uint16_t ch0, uint16_t ch1){
    uint16_t samples[2] = {ch0, ch1};
    HAL_I2S_Transmit(&hi2s2, (uint16_t*)samples, 2, HAL_MAX_DELAY);
}

