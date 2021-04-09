/*
 * hwpp.cpp
 *
 *  Created on: 2021. 4. 9.
 *      Author: sungjinkim
 */


#include "hwpp.h"
#include "hw.h"


extern Oledpp oledpp;

Hwpp hwpp;

Hwpp::Hwpp()
{

}

bool Hwpp::HwInit(void)
{
    bool ret = true;

    oledpp.OledppInit();

    return ret;
}
