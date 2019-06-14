/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define BUTTON_Pin GPIO_PIN_0
#define BUTTON_GPIO_Port GPIOA
#define ADC_BAT_Pin GPIO_PIN_4
#define ADC_BAT_GPIO_Port GPIOA
#define SX1276_SCK_Pin GPIO_PIN_5
#define SX1276_SCK_GPIO_Port GPIOA
#define SX1276_MISO_Pin GPIO_PIN_6
#define SX1276_MISO_GPIO_Port GPIOA
#define SX1276_MOSI_Pin GPIO_PIN_7
#define SX1276_MOSI_GPIO_Port GPIOA
#define SX1276_RESET_Pin GPIO_PIN_10
#define SX1276_RESET_GPIO_Port GPIOB
#define SX1276_DIO5_Pin GPIO_PIN_11
#define SX1276_DIO5_GPIO_Port GPIOB
#define SX1276_DIO0_Pin GPIO_PIN_6
#define SX1276_DIO0_GPIO_Port GPIOC
#define SX1276_DIO1_Pin GPIO_PIN_7
#define SX1276_DIO1_GPIO_Port GPIOC
#define SX1276_DIO2_Pin GPIO_PIN_8
#define SX1276_DIO2_GPIO_Port GPIOC
#define SX1276_DIO3_Pin GPIO_PIN_9
#define SX1276_DIO3_GPIO_Port GPIOC
#define SX1276_DIO4_Pin GPIO_PIN_8
#define SX1276_DIO4_GPIO_Port GPIOA
#define SX1276_CS_Pin GPIO_PIN_15
#define SX1276_CS_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
