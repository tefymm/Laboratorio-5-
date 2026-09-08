/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define Contador1_LED4_Pin GPIO_PIN_0
#define Contador1_LED4_GPIO_Port GPIOC
#define Contador1_LED3_Pin GPIO_PIN_1
#define Contador1_LED3_GPIO_Port GPIOC
#define Boton_Jugador1_Pin GPIO_PIN_0
#define Boton_Jugador1_GPIO_Port GPIOA
#define Boton_Jugador1_EXTI_IRQn EXTI0_IRQn
#define Boton_Jugador2_Pin GPIO_PIN_1
#define Boton_Jugador2_GPIO_Port GPIOA
#define Boton_Jugador2_EXTI_IRQn EXTI1_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define Contador1_LED1_Pin GPIO_PIN_4
#define Contador1_LED1_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define Contador2_LED4_Pin GPIO_PIN_6
#define Contador2_LED4_GPIO_Port GPIOA
#define Contador2_LED3_Pin GPIO_PIN_7
#define Contador2_LED3_GPIO_Port GPIOA
#define Contador1_LED2_Pin GPIO_PIN_0
#define Contador1_LED2_GPIO_Port GPIOB
#define Semaforo_Amarillo_Pin GPIO_PIN_10
#define Semaforo_Amarillo_GPIO_Port GPIOB
#define Contador2_LED1_Pin GPIO_PIN_7
#define Contador2_LED1_GPIO_Port GPIOC
#define Semaforo_Rojo_Pin GPIO_PIN_8
#define Semaforo_Rojo_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Semaforo_Verde_Pin GPIO_PIN_4
#define Semaforo_Verde_GPIO_Port GPIOB
#define Contador2_LED2_Pin GPIO_PIN_6
#define Contador2_LED2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
