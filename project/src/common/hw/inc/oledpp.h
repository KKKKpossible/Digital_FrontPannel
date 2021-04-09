/*
 * oledpp.h
 *
 *  Created on: 2021. 4. 9.
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_HW_INC_OLEDPP_H_
#define SRC_COMMON_HW_INC_OLEDPP_H_


#include "hwpp.h"
#include "hw.h"

#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"



class Oledpp
{
    Adafruit_SSD1306 display;

public:

#ifdef  HWPP_OLED_USE
#define DEF_OLEDPP_CHANNEL_MAX HWPP_OLED_CHANNEL_MAX


    Oledpp();
    bool OledppInit();
    bool OledppPrint(char* format);


#endif
};


#endif /* SRC_COMMON_HW_INC_OLEDPP_H_ */
