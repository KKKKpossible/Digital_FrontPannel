/*
 * led.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_HW_INC_LED_H_
#define SRC_COMMON_HW_INC_LED_H_


#include "hw.h"


#ifdef  HW_LED_USE
#define DEF_LED_CHANNEL_MAX HW_LED_CHANNEL_MAX


bool LedInit   (uint8_t ch);
bool LedOn     (uint8_t ch); // not clear
bool LedOff    (uint8_t ch); // not clear
bool LedToggle (uint8_t ch); // not clear


#endif /* SRC_COMMON_HW_INC_LED_H_ */


#endif
