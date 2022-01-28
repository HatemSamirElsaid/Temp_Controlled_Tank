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

#include "Mode_Handler.h"



ISR(TIMER1_OVF_vect){
	Mode = Temp_Control;
	Timer1_Stop();
	Timer1_DisableInterrupt();
}

void Mode_Handler(void){
	Timer1_Stop();
	Timer1_EnableInterrupt();
	Timer1_Start(TIMER1_1024_);
}
