/*
 * lcd.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_HW_INC_OLED_H_
#define SRC_COMMON_HW_INC_OLED_H_


#ifdef __cplusplus
extern "C"{
#endif


#include "hw.h"

#ifdef  HW_OLED_USE
#define DEF_OLED_CHANNEL_MAX HW_OLED_CHANNEL_MAX


bool OledInit  (uint8_t ch); // not clear
bool OledPrint (uint8_t ch, uint8_t* str); // not clear
bool OledRead  (uint8_t ch); // not clear


#endif


#ifdef __cplusplus
}
#endif


#endif /* SRC_COMMON_HW_INC_OLED_H_ */
