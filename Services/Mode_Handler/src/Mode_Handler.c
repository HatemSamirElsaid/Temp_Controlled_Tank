#include "Mode_Handler.h"

ISR(TIMER1_OVF_vect){
	Mode = Temp_Set;
	//Timer1_Stop();
	//Timer1_DisableInterrupt();
}

void Mode_Handler(void){
	//Timer1_Start(1024);
	//Timer1_EnableInterrupt();
}
