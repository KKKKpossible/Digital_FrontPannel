/*
 * usb.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_HW_INC_USB_H_
#define SRC_COMMON_HW_INC_USB_H_


#ifdef __cplusplus
extern "C"{
#endif


#include "hw.h"


bool UsbInit  (void); // not clear
bool ReadUsb  (void); // not clear
bool WriteUsb (void); // not clear


#ifdef __cplusplus
}
#endif


#endif /* SRC_COMMON_HW_INC_USB_H_ */
