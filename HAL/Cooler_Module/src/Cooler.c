#include "Cooler.h"

void Cooler_Init(){
	DIO_WRITE_STATUS(Cooler_Port, Cooler_Pin, INPUT);
}
void Cooler_ON(){
	DIO_SET_PIN(Cooler_Port, Cooler_Pin);
	LED_ON();
}
void Cooler_OFF(){
	DIO_CLEAR_PIN(Cooler_Port, Cooler_Pin);
	LED_OFF();
}