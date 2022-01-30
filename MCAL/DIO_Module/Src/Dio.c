//---------------------------------------------------------------------//
//Created:		Nov 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#include "Dio.h"

void DIO_SET_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		SET_BIT(PORTA_REG,pin);
		break;
	case DIO_PORTB:
		SET_BIT(PORTB_REG,pin);
		break;
	case DIO_PORTC:
		SET_BIT(PORTC_REG,pin);
		break;
	case DIO_PORTD:
		SET_BIT(PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_CLEAR_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		CLR_BIT(PORTA_REG,pin);
		break;
	case DIO_PORTB:
		CLR_BIT(PORTB_REG,pin);
		break;
	case DIO_PORTC:
		CLR_BIT(PORTC_REG,pin);
		break;
	case DIO_PORTD:
		CLR_BIT(PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_TOGGLE_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		TOGGLE_BIT(PORTA_REG,pin);
		break;
	case DIO_PORTB:
		TOGGLE_BIT(PORTB_REG,pin);
		break;
	case DIO_PORTC:
		TOGGLE_BIT(PORTC_REG,pin);
		break;
	case DIO_PORTD:
		TOGGLE_BIT(PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_ENABLE_PULLUP(Port_ID port,Pin_ID pin){  //if Pin configured as an input

	switch (port){
	case DIO_PORTA:
		if(CHK_BIT(DDRA_REG,pin)==0)
			SET_BIT(PORTA_REG,pin);
		break;
	case DIO_PORTB:
		if(CHK_BIT(DDRB_REG,pin)==0)
			SET_BIT(PORTB_REG,pin);
		break;
	case DIO_PORTC:
		if(CHK_BIT(DDRC_REG,pin)==0)
			SET_BIT(PORTC_REG,pin);
		break;
	case DIO_PORTD:
		if(CHK_BIT(DDRD_REG,pin)==0)
			SET_BIT(PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_DISABLE_PULLUP(Port_ID port,Pin_ID pin){  //if Pin configured as an input

	switch (port){
	case DIO_PORTA:
		if(CHK_BIT(DDRA_REG,pin)==0)
			CLR_BIT(PORTA_REG,pin);
		break;
	case DIO_PORTB:
		if(CHK_BIT(DDRB_REG,pin)==0)
			CLR_BIT(PORTB_REG,pin);
		break;
	case DIO_PORTC:
		if(CHK_BIT(DDRC_REG,pin)==0)
			CLR_BIT(PORTC_REG,pin);
		break;
	case DIO_PORTD:
		if(CHK_BIT(DDRD_REG,pin)==0)
			CLR_BIT(PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
Logic_Level DIO_READ_LEVEL(Port_ID port,Pin_ID pin){  //to read pin level if Pin configured as an input

	switch (port){
	case DIO_PORTA:
		return CHK_BIT(PINA_REG,pin);
		break;
	case DIO_PORTB:
		return CHK_BIT(PINB_REG,pin);
		break;
	case DIO_PORTC:
		return CHK_BIT(PINC_REG,pin);
		break;
	case DIO_PORTD:
		return CHK_BIT(PIND_REG,pin);
		break;
	}
	return 0;
}
//--------------------------------------------------------------------------------------------------
void DIO_WRITE_STATUS(Port_ID port,Pin_ID pin,Pin_Status direction){  //to write pin direction
	switch (port){
	case DIO_PORTA:
		if (direction==OUTPUT)
			SET_BIT(DDRA_REG,pin);
		else
			CLR_BIT(DDRA_REG,pin);
		break;
	case DIO_PORTB:
		if (direction==OUTPUT)
			SET_BIT(DDRB_REG,pin);
		else
			CLR_BIT(DDRB_REG,pin);
		break;
	case DIO_PORTC:
		if (direction==OUTPUT)
			SET_BIT(DDRC_REG,pin);
		else
			CLR_BIT(DDRC_REG,pin);
		break;
	case DIO_PORTD:
		if (direction==OUTPUT)
			SET_BIT(DDRD_REG,pin);
		else
			CLR_BIT(DDRD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void Dio_WriteGroup(Port_ID port,u8 mask,u8 data)
{
	switch(port)
	{
	case DIO_PORTA:
		PORTA_REG = (PORTA_REG&~mask)|(data & mask);
		break;

	case DIO_PORTB:
		PORTB_REG = (PORTB_REG&~mask)|(data & mask);
		break;

	case DIO_PORTC:
		PORTC_REG = (PORTC_REG&~mask)|(data & mask);
		break;

	case DIO_PORTD:
		PORTD_REG = (PORTD_REG&~mask)|(data & mask);
		break;
	}
}
