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

	GpioInit();
	DmaInit();
	I2cInit();
	SpiInit();
	UsartInit();
	AdcInit();

    LedInit(DEF_LED_CHANNEL_0);
    OledInit();
    SensorInit();
    SwitchInit();
    UsbInit();
    VvaInit();

    return ret;
}
