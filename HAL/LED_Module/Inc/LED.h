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
void LED_Init(void);
void LED_ON(void);
void LED_OFF(void);
void LED_TOGGLE(void);

#endif /* HAL_LED_H_ */
