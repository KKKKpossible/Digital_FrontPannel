/*
 * sensor.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "sensor.h"
#include "adc.h"


extern ADC_HandleTypeDef hadc1;
extern DMA_HandleTypeDef hdma_adc1;


typedef struct Sensor_t
{
    uint16_t* read_data;
}Sensor_t;

volatile uint16_t dma_adc_buffer[DEF_SENSOR_CHANNEL_MAX] = {0, };

Sensor_t sensor_arr[DEF_SENSOR_CHANNEL_MAX] = {0, };


bool SensorInit(uint8_t ch)
{
	bool ret = true;
	static bool call_before = false;
	if(call_before == false)
	{
	    call_before = true;
	    HAL_ADCEx_Calibration_Start(&hadc1);
	    HAL_ADC_Start_DMA(&hadc1, (uint16_t*)dma_adc_buffer, 3);
	}

	switch(ch)
	{
	    case DEF_SENSOR_CHANNEL_0:
	        sensor_arr[ch].read_data = (uint16_t*)&dma_adc_buffer[DEF_SENSOR_CHANNEL_0];
	        break;
        case DEF_SENSOR_CHANNEL_1:
            sensor_arr[ch].read_data = (uint16_t*)&dma_adc_buffer[DEF_SENSOR_CHANNEL_1];
            break;
        case DEF_SENSOR_CHANNEL_2:
            sensor_arr[ch].read_data = (uint16_t*)&dma_adc_buffer[DEF_SENSOR_CHANNEL_2];
            break;
        default:
            break;
	}

	return ret;
}

uint16_t ReadSensor(uint8_t ch)
{
    uint16_t ret = 0;

    switch(ch)
    {
        case DEF_SENSOR_CHANNEL_0:
            ret = sensor_arr[ch].read_data;
            break;
        case DEF_SENSOR_CHANNEL_1:
            ret = sensor_arr[ch].read_data;
            break;
        case DEF_SENSOR_CHANNEL_2:
            ret = sensor_arr[ch].read_data;
            break;
        default:
            break;
    }
	return ret;
}

bool WriteSensor(void)
{
	bool ret = true;

	return ret;
}
