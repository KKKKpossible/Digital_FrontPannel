/*
 * hw.c
 *
 *  Created on: Apr 8, 2021
 *      Author: sungjinkim
 */


#include "hw_def.h"
#include "hw.h"


bool HwInit(void)
{
	bool ret = true;

    BspInit();

    AdcInit();
    DmaInit();
    GpioInit();
    I2cInit();
    SpiInit();
    UsartInit();

    LcdInit();
    LedInit();
    SensorInit();
    SwitchInit();
    VvaInit();

    return ret;
}
