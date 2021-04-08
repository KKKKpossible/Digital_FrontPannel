/*
 * gpio.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "gpio.h"


bool GpioInit(void)
{
	bool ret = true;

	__HAL_RCC_GPIOD_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	return ret;
}
