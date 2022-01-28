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

#ifndef SERVICES_MODE_HANDLER_INC_MODE_HANDLER_TYPES_H_
#define SERVICES_MODE_HANDLER_INC_MODE_HANDLER_TYPES_H_

typedef enum{
	Temp_Control,
	Temp_Set
}Mode_ID;

#endif /* SERVICES_MODE_HANDLER_INC_MODE_HANDLER_TYPES_H_ */
