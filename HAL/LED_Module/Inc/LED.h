/*
 * LED.h
 *
 *  Created on: Nov 19, 2021
 *      Author: HatemSamir
 */

#ifndef HAL_LED_H_
#define HAL_LED_H_


#include "LED_Config.h"
#include "Dio.h"

//LED Module Functions prototypes.
void LED_Init(void);	//Initialize LED Pin as Output
void LED_ON(void);		//Write 1 at Pin Connected to the LED
void LED_OFF(void);		//Write 0 at Pin Connected to the LED
void LED_TOGGLE(void);	//Toggle the Pin Connected to the LED

#endif /* HAL_LED_H_ */
