//---------------------------------------------------------------------//
//Created:		Jan 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#ifndef HAL_COOLER_MODULE_INC_COOLER_H_
#define HAL_COOLER_MODULE_INC_COOLER_H_

#include "Dio.h"
#include "Cooler_Config.h"
#include "Std_Types.h"
#include "LED.h"

//Function Prototypes
void Cooler_Init();	//Initialize Cooler pin as an output
void Cooler_ON();	//Write 1 at the enable pin of the Cooler relay
void Cooler_OFF();	//Write 0 at the enable pin of the Cooler relay

#endif /* HAL_COOLER_MODULE_INC_COOLER_H_ */
