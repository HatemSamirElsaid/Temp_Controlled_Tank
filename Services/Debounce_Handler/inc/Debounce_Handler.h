//---------------------------------------------------------------------//
//Created:		Jan 16, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	Timer0_Module
//Description:
//	Timer0 is used to handle the debounce in Buttons. If any button is
//	pressed then all buttons is disabled for 80ms starting from the last
//	release.
//---------------------------------------------------------------------//

#ifndef SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_
#define SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Timer0.h"

volatile Boolean ButtonEnable;

//Service functions prototypes
void Debounce_Handler(void);


#endif /* SERVICES_DEBOUNCE_HANDLER_INC_DEBOUNCE_HANDLER_H_ */
