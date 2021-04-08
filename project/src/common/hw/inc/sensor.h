/*
 * sensor.h
 *
 *  Created on: Apr 7, 2021
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_HW_INC_SENSOR_H_
#define SRC_COMMON_HW_INC_SENSOR_H_


#ifdef __cplusplus
extern "C"{
#endif


#include "hw.h"


#ifdef  HW_SENSOR_USE
#define DEF_SENSOR_CHANNEL_MAX HW_SENSOR_CHANNEL_MAX


bool SensorInit  (void); // not clear
bool ReadSensor  (void); // not clear
bool WriteSensor (void); // not clear


#endif


#ifdef __cplusplus
}
#endif

#endif /* SRC_COMMON_HW_INC_SENSOR_H_ */
