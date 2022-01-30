//---------------------------------------------------------------------//
//Created:		Jan 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#include "Heater.h"

void Heater_Init(){
	DIO_WRITE_STATUS(Heater_Port, Heater_Pin, OUTPUT);
}

void Heater_ON(){
	DIO_SET_PIN(Heater_Port, Heater_Pin);
}
void Heater_OFF(){
	DIO_CLEAR_PIN(Heater_Port, Heater_Pin);
	LED_OFF();
}
