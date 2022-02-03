//---------------------------------------------------------------------//
//Created:		Jan 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#ifndef HAL_HEATER_MODULE_INC_HEATER_H_
#define HAL_HEATER_MODULE_INC_HEATER_H_

#include "Dio.h"
#include "Heater_Config.h"
#include "Std_Types.h"
#include "LED.h"

//Function Prototypes
void Heater_Init(); //Initialize Heater pin as an output
void Heater_ON();	//Write 1 at the enable pin of the heater relay
void Heater_OFF();	//Write 0 at the enable pin of the heater relay

#endif /* HAL_HEATER_MODULE_INC_HEATER_H_ */
