/*
 * Debounce_Handler.h
 *
 *  Created on: Jan 16, 2022
 *      Author: HatemSamir
 */

#ifndef SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_
#define SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Timer0.h"

volatile Boolean ButtonEnable;

//Service functions prototypes
void Debounce_Handler(void);


#endif /* SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_ */
