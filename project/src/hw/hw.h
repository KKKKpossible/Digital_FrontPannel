/*
 * hw.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#include "hw_def.h"

#include "lcd.h"
#include "led.h"
#include "sensor.h"
#include "switch.h"
#include "usb.h"
#include "vva.h"

#include "adc.h"
#include "dma.h"
#include "gpio.h"
#include "i2c.h"
#include "spi.h"
#include "usart.h"


bool HwInit(void);


#endif /* SRC_HW_HW_H_ */
