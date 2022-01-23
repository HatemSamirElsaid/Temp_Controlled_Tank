#include "Heater.h"
static u16 Counter = 0;
void Heater_Init(){
	DIO_WRITE_STATUS(Heater_Port, Heater_Pin, INPUT);
}

void Heater_ON(){
	DIO_SET_PIN(Heater_Port, Heater_Pin);
	Counter++;
	if (Counter == (2^15)){
		LED_TOGGLE();
		Counter = 0;
	}
}
void Heater_OFF(){
	DIO_CLEAR_PIN(Heater_Port, Heater_Pin);
	LED_OFF();
}
