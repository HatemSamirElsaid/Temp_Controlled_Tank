/*
 * Button.h
 *
 *  Created on: Nov 19, 2021
 *      Author: HatemSamir
 */

#ifndef HAL_BUTTON_H_
#define HAL_BUTTON_H_

#include "Button_Config.h"
#include "Button_Types.h"
#include "Dio.h"

//Button Module functions prototypes
void Button_Init(Button_ID);
Buttom_Status Button_READ(Button_ID);
void Button_Pullup_Enable(Button_ID);
void Button_Pullup_Disable(Button_ID);

#endif /* HAL_BUTTON_H_ */
