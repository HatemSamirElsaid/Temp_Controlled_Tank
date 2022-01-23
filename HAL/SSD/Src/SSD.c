/*
 * SSD.c
 *
 *  Created on: Dec 23, 2021
 *      Author: HatemSamir
 */

#include "SSD.h"

static u8 Counter =0;

void SSD_Init(void)
{
	/*	Configure Data Lines As Output	*/
	DIO_WRITE_STATUS(DIO_PORTA,DIO_PIN4,OUTPUT);
	DIO_WRITE_STATUS(DIO_PORTA,DIO_PIN5,OUTPUT);
	DIO_WRITE_STATUS(DIO_PORTA,DIO_PIN6,OUTPUT);
	DIO_WRITE_STATUS(DIO_PORTA,DIO_PIN7,OUTPUT);

	/*	Configure Control Lines As Output	*/
	DIO_WRITE_STATUS(DIO_PORTB,DIO_PIN1,OUTPUT);
	DIO_WRITE_STATUS(DIO_PORTB,DIO_PIN2,OUTPUT);
}
//--------------------------------------------------------------------------------------------------
void SSD_DisplayNumber(u8 num)
{
	u8 loc_FirstDigit = (num/10)<<4;
	u8 loc_Second_Digit = (num%10)<<4;

	if(Counter < (((2^8)-1)/2)){
		/*	Enable SSD1	*/
		DIO_SET_PIN(DIO_PORTB, DIO_PIN2);
		/*	Disable SSD2	*/
		DIO_CLEAR_PIN(DIO_PORTB, DIO_PIN1);
		/*	Write Number To SSD	*/
		Dio_WriteGroup(DIO_PORTA,SSD_MASK,loc_FirstDigit);
	}else{
		/*	Disable SSD1	*/
		DIO_CLEAR_PIN(DIO_PORTB, DIO_PIN2);
		/*	Enable SSD2	*/
		DIO_SET_PIN(DIO_PORTB, DIO_PIN1);
		/*	Write Number To SSD	*/
		Dio_WriteGroup(DIO_PORTA,SSD_MASK,loc_Second_Digit);
	}
	Counter++;
	if(Counter==((2^8)-1)){
		Counter = 0;
	}
}
//--------------------------------------------------------------------------------------------------
void SSD_Stop(){
	/*	Disable SSD1	*/
	DIO_CLEAR_PIN(DIO_PORTB, DIO_PIN2);
	/*	Disable SSD2	*/
	DIO_CLEAR_PIN(DIO_PORTB, DIO_PIN1);
}
