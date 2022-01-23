#include "Mode_Handler.h"



ISR(TIMER1_OVF_vect){
	Mode = Temp_Control;
	Timer1_Stop();
	Timer1_DisableInterrupt();
}

void Mode_Handler(void){
	Timer1_Start(TIMER1_1024_);
	Timer1_EnableInterrupt();
}
