//---------------------------------------------------------------------//
//Created:		Nov 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Module
//---------------------------------------------------------------------//

#ifndef MCAL_DIO_TYPES_H_
#define MCAL_DIO_TYPES_H_

typedef enum{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}Port_ID;

typedef enum{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
}Pin_ID;

typedef enum{
	INPUT,
	OUTPUT
}Pin_Status;

typedef enum{
	LOW,
	HIGH
}Logic_Level;

#endif /* MCAL_DIO_TYPES_H_ */
