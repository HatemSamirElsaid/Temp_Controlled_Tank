#include "Debounce_Handler.h"

static u8 Counter = 0;

ISR(TIMER0_OVF_vect){
	if(Counter==13){
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
