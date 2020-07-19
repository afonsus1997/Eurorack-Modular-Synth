/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern enum waves_e;
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_0
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_1
#define LED2_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_2
#define LED3_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_3
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_0
#define LED5_GPIO_Port GPIOA
#define LED6_Pin GPIO_PIN_1
#define LED6_GPIO_Port GPIOA
#define POT4_Pin GPIO_PIN_4
#define POT4_GPIO_Port GPIOA
#define GPIO_ADC_CS_Pin GPIO_PIN_4
#define GPIO_ADC_CS_GPIO_Port GPIOC
#define POT1_Pin GPIO_PIN_5
#define POT1_GPIO_Port GPIOC
#define POT3_Pin GPIO_PIN_0
#define POT3_GPIO_Port GPIOB
#define POT2_Pin GPIO_PIN_1
#define POT2_GPIO_Port GPIOB
#define DEMP1_Pin GPIO_PIN_7
#define DEMP1_GPIO_Port GPIOC
#define DEMP0_Pin GPIO_PIN_8
#define DEMP0_GPIO_Port GPIOC
#define DACFORMAT_Pin GPIO_PIN_9
#define DACFORMAT_GPIO_Port GPIOC
#define ENCB_Pin GPIO_PIN_10
#define ENCB_GPIO_Port GPIOA
#define ENCA_Pin GPIO_PIN_11
#define ENCA_GPIO_Port GPIOA
#define ENCSW_Pin GPIO_PIN_12
#define ENCSW_GPIO_Port GPIOA
#define AUDIO_OUT_2_SW_Pin GPIO_PIN_2
#define AUDIO_OUT_2_SW_GPIO_Port GPIOD
#define AUDIO_OUT_1_SW_Pin GPIO_PIN_5
#define AUDIO_OUT_1_SW_GPIO_Port GPIOB
#define PITCH_CV_SWITCH_Pin GPIO_PIN_6
#define PITCH_CV_SWITCH_GPIO_Port GPIOB
#define FM_CV_SWITCH_Pin GPIO_PIN_7
#define FM_CV_SWITCH_GPIO_Port GPIOB
#define PWM_SW_Pin GPIO_PIN_8
#define PWM_SW_GPIO_Port GPIOB
#define GATE_SW_Pin GPIO_PIN_9
#define GATE_SW_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
