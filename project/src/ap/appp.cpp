/*
 * ap_pp.cpp
 *
 *  Created on: 2021. 4. 9.
 *      Author: sungjinkim
 */


#include "appp.h"
#include "ap.h"


ApPp appp;


ApPp::ApPp()
{

}

bool ApPp::ApPpInit()
{
    bool ret = true;

    ApInit();

    return ret;
}

bool ApPp::ApPpMain()
{
    bool ret = true;
    uint32_t mil = millis();

    while(true)
    {
        if(millis() - mil > 1000)
        {
            mil = millis();
            ApMain();
        }
    }
    return ret;
}
