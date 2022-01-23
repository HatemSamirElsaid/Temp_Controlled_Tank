#include "Debounce_Handler.h"

ISR(TIMER0_OVF_vect){
	ButtonEnable = TRUE;
	//Timer0_Stop();
	//Timer0_DisableInterrupt();
}

void Debounce_Handler(void){
	ButtonEnable = FALSE;
	//Timer0_Start(1024);
	//Timer0_EnableInterrupt();
}
