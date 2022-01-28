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

#include "Debounce_Handler.h"

static u8 Counter = 0;

ISR(TIMER0_OVF_vect){
	if(Counter==5){//((2^(8))*(1024)*5)/(16*2^20)=78.1ms
		ButtonEnable = TRUE;
		Timer0_Stop();
		Timer0_DisableInterrupt();
		Counter = 0;
	}
	else{
		Counter++;
		Timer0_Start(TIMER0_1024_);
	}

}

void Debounce_Handler(void){
	ButtonEnable = FALSE;
	Timer0_Start(TIMER0_1024_);
	Timer0_EnableInterrupt();
}
