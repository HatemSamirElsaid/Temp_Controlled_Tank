/*
 * Heater.h
 *
 *  Created on: Jan 19, 2022
 *      Author: htmsa
 */

#ifndef HAL_HEATER_MODULE_INC_HEATER_H_
#define HAL_HEATER_MODULE_INC_HEATER_H_

#include "Dio.h"
#include "Heater_Config.h"
#include "Std_Types.h"
#include "LED.h"

//Function Prototypes
void Heater_Init();
void Heater_ON();
void Heater_OFF();

#endif /* HAL_HEATER_MODULE_INC_HEATER_H_ */
