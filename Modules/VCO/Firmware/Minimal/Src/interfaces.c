/**
**********************************************************************************************************************************************************************************************************************************
* @file:	interfaces.c
* @author:	Afonso Muralha
* @date:	2020年07月20日 21:10:31 Monday
* @brief:	
**********************************************************************************************************************************************************************************************************************************
**/ 

#include "interfaces.h"

uint8_t jackStatus[6];

void updateJackStatus(){
    jackStatus[GateJack] = HAL_GPIO_ReadPin(GATE_SW_GPIO_Port, GATE_SW_Pin);
    jackStatus[FMJack] = HAL_GPIO_ReadPin(FM_CV_SWITCH_GPIO_Port, FM_CV_SWITCH_Pin);
    jackStatus[CVJack] = HAL_GPIO_ReadPin(PITCH_CV_SWITCH_GPIO_Port, PITCH_CV_SWITCH_Pin);
    jackStatus[PWMJack] = HAL_GPIO_ReadPin(PWM_SW_GPIO_Port, PWM_SW_Pin);
    jackStatus[Out1Jack] = HAL_GPIO_ReadPin(AUDIO_OUT_1_SW_GPIO_Port, AUDIO_OUT_1_SW_Pin);
    jackStatus[Out2Jack] = HAL_GPIO_ReadPin(AUDIO_OUT_2_SW_GPIO_Port, AUDIO_OUT_2_SW_Pin);
    updateJackLEDs();
}

void updateJackLEDs(){
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, jackStatus[GateJack]);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, jackStatus[PWMJack]);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, jackStatus[FMJack]);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, jackStatus[CVJack]);
    HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, jackStatus[Out1Jack]);
    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, jackStatus[Out2Jack]);
    // HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, jackStatus[Out2Jack]);
}
