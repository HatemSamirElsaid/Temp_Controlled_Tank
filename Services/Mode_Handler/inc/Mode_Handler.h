//---------------------------------------------------------------------//
//Created:		Jan 16, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	Timer1_Module
//Description:
//	Timer1 is used to switch between Temp_set Mode and Temp_Control Mode
//	The 2 seven segment display will exit the temperature setting mode,
//	if the “UP” and “Down” buttons are not pressed for 5 seconds.
//---------------------------------------------------------------------//

#ifndef SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_
#define SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Mode_Handler_Types.h"
#include "Timer1.h"

volatile Mode_ID Mode;


//Service functions prototypes
void Mode_Handler(void);

#endif /* SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_ */
