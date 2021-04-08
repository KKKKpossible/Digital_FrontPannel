/*
 * lcd.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "oled.h"
#include "i2c.h"


extern I2C_HandleTypeDef hi2c1;


#define OLED_TR_BUF_SIZE (100)


typedef struct Oled_t
{
    I2C_HandleTypeDef* com;
    uint8_t            tr_buffer[OLED_TR_BUF_SIZE];
}Oled_t;


Oled_t oled_arr[DEF_OLED_CHANNEL_MAX];

bool OledInit(uint8_t ch)
{
	bool ret = true;

	switch(ch)
	{
	    case DEF_OLED_CHANNEL_0:
	        oled_arr[ch].com = &hi2c1;
	        memset(oled_arr[ch].tr_buffer, 0, OLED_TR_BUF_SIZE);
	        break;
	    default:
	        break;
	}

	return ret;
}

bool OledPrint(uint8_t ch, uint8_t* str)
{
	bool ret = true;

    switch(ch)
    {
        case DEF_OLED_CHANNEL_0:
            break;
        default:
            break;
    }

	return ret;
}

bool OledRead(uint8_t ch)
{
	bool ret = true;

    switch(ch)
    {
        case DEF_OLED_CHANNEL_0:
            break;
        default:
            break;
    }

	return ret;
}

