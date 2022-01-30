//---------------------------------------------------------------------//
//Created:		Jan 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#include "Cooler.h"

void Cooler_Init(){
	DIO_WRITE_STATUS(Cooler_Port, Cooler_Pin, OUTPUT);
}
void Cooler_ON(){
	DIO_SET_PIN(Cooler_Port, Cooler_Pin);
	LED_ON();
}
void Cooler_OFF(){
	DIO_CLEAR_PIN(Cooler_Port, Cooler_Pin);
	LED_OFF();
}
