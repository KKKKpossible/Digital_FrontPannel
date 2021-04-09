/*
 * main.c
 *
 *  Created on: Apr 8, 2021
 *      Author: sungjinkim
 */


#include "main.h"


extern ApPp appp;
extern Hwpp hwpp;


int main()
{
    HwInit();

    hwpp.HwInit();

    appp.ApPpInit();
    appp.ApPpMain();

    return 0;
}
