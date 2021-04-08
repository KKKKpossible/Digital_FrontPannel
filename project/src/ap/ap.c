/*
 * ap.c
 *
 *  Created on: Apr 8, 2021
 *      Author: sungjinkim
 */


#include "ap.h"


bool ApInit(void)
{
	bool ret = true;

	return ret;
}

bool ApMain(void)
{
	bool ret = true;

	uint32_t mill = 0;

	while(true)
	{
	    if(millis() - mill > 1000)
	    {
	        mill = millis();
	        LedToggle(DEF_LED_CHANNEL_0);
	    }
	}

	return ret;
}
