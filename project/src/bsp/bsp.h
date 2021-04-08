/*
 * bsp.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "stm32f1xx_hal.h"


void     SystemClock_Config (void);
void     Error_Handler      (void);

void     BspInit (void);
void     delay   (uint32_t ms);
uint32_t millis  (void);


#endif /* SRC_BSP_BSP_H_ */
