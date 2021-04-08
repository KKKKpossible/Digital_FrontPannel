/*
 * led.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "led.h"


bool LedInit(void)
{
	bool ret = true;

	GPIO_InitTypeDef GPIO_InitStruct = {0};

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);

	GPIO_InitStruct.Pin = GPIO_PIN_12;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	return ret;
}

bool LedOn(void)
{
	bool ret = true;

	return ret;
}

bool LedOff(void)
{
	bool ret = true;

	return ret;
}

bool LedToggle(void)
{
	bool ret = true;

	return ret;
}
