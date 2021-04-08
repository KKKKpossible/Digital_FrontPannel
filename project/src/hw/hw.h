/*
 * hw.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_

#ifdef __cplusplus
extern "C"{
#endif


#include "hw_def.h"

#include "led.h"
#include "oled.h"
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


#ifdef __cplusplus
}
#endif


#endif /* SRC_HW_HW_H_ */
