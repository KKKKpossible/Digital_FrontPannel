/*
 * dma.c
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */


#include "dma.h"


bool DmaInit(void)
{
	bool ret = true;

	__HAL_RCC_DMA1_CLK_ENABLE();

	HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);

	return ret;
}
