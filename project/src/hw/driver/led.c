/*
 * led.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "led.h"


typedef struct Led_t
{
	GPIO_TypeDef* port;
	uint16_t      pin;
	GPIO_PinState on_pinstate;
	GPIO_PinState off_pinstate;
}Led_t;

Led_t led_arr[DEF_LED_CHANNEL_MAX] =
        {
                {GPIOB, GPIO_PIN_12, GPIO_PIN_RESET, GPIO_PIN_SET}
        };

bool LedInit(uint8_t ch)
{
	bool ret = true;
    GPIO_InitTypeDef GPIO_InitStruct = {0};

	switch(ch)
	{
	    case DEF_LED_CHANNEL_0:
	        HAL_GPIO_WritePin(led_arr[ch].port,
	                          led_arr[ch].pin,
	                          led_arr[ch].off_pinstate);

	        GPIO_InitStruct.Pin = led_arr[ch].pin;
	        GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	        GPIO_InitStruct.Pull = GPIO_NOPULL;
	        GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

	        HAL_GPIO_Init(led_arr[ch].port, &GPIO_InitStruct);
	        break;
	    default:
	        break;
	}

	return ret;
}

bool LedOn(uint8_t ch)
{
	bool ret = true;

    switch(ch)
    {
        case DEF_LED_CHANNEL_0:
            HAL_GPIO_WritePin(led_arr[ch].port,
                              led_arr[ch].pin,
                              led_arr[ch].on_pinstate);
            break;
        default:
            break;
    }

	return ret;
}

bool LedOff(uint8_t ch)
{
	bool ret = true;

    switch(ch)
    {
        case DEF_LED_CHANNEL_0:
            HAL_GPIO_WritePin(led_arr[ch].port,
                              led_arr[ch].pin,
                              led_arr[ch].off_pinstate);
            break;
        default:
            break;
    }

	return ret;
}

bool LedToggle(uint8_t ch)
{
	bool ret = true;

    switch(ch)
    {
        case DEF_LED_CHANNEL_0:
            HAL_GPIO_TogglePin(led_arr[ch].port,
                              led_arr[ch].pin);
            break;
        default:
            break;
    }

	return ret;
}
