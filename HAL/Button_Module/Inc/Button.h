//---------------------------------------------------------------------//
//Created:		Nov 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#ifndef HAL_BUTTON_H_
#define HAL_BUTTON_H_

#include "Button_Config.h"
#include "Button_Types.h"
#include "Dio.h"

//Button Module functions prototypes
void Button_Init(Button_ID);	//Initialize Button Pins as inputs
Buttom_Status Button_READ(Button_ID);	//Read Input Coming from Buttons
void Button_Pullup_Enable(Button_ID);	//Making buttons active LOW
void Button_Pullup_Disable(Button_ID);	////Making buttons active HIGH (Default)

#endif /* HAL_BUTTON_H_ */
