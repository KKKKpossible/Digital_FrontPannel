/*
 * oledpp.cpp
 *
 *  Created on: 2021. 4. 9.
 *      Author: sungjinkim
 */


#include "oledpp.h"


Oledpp oledpp;


Oledpp::Oledpp()
{

}

bool Oledpp::OledppInit()
{
    bool ret = true;

//    oledpp.display.begin(SSD1306_SWITCHCAPVCC, 0x78);

//    display.clearDisplay();
//    display.display();
//    HAL_Delay(5000);
//    while(1);
//    display.clearDisplay();
//    display.display();

    return ret;
}

bool Oledpp::OledppPrint(char* format)
{
    bool ret = true;

    // oledpp.display.write(format);

    return ret;
}
