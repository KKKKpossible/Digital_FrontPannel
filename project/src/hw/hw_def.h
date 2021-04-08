/*
 * hw_def.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "bsp.h"
#include "def.h"

// driver define
#define HW_LED_USE
#define 	HW_LED_CHANNEL_MAX    (1U)
#define HW_OLED_USE
#define     HW_LCD_CHANNEL_MAX    (1U)
#define HW_SENSOR_USE
#define		HW_SENSOR_CHANNEL_MAX (3U)
#define HW_SWITCH_USE
#define 	HW_SWITCH_CHANNEL_MAX (4U)
#define HW_USB_USE
#define 	HW_USB_CHANNEL_MAX    (1U)
#define HW_VVA_USE
#define 	HW_VVA_CHANNEL_MAX    (1U)

// raw define
#define HW_ADC_USE
#define 	HW_ADC_CHANNEL_MAX   (6U)
#define HW_DMA_USE
#define 	HW_DMA_CHANNEL_MAX   (1U)
#define HW_GPIO_USE
#define 	HW_GPIO_CHANNEL_MAX  (3U)
#define HW_I2C_USE
#define 	HW_I2C_CHANNEL_MAX   (1U)
#define HW_SPI_USE
#define		HW_SPI_CHANEEL_MAX   (1U)
#define HW_USART_USE
#define 	HW_USART_CHANNEL_MAX (1U)

#endif /* SRC_HW_HW_DEF_H_ */
