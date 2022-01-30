//---------------------------------------------------------------------//
//Created:		Nov 19, 2022
//Author: 		HatemSamirElsaid
//---------------------------------------------------------------------//

#ifndef MCAL_ATMEL32_REG_H_
#define MCAL_ATMEL32_REG_H_


//PORTA Registers Definition
#define PORTA_REG   	(*(volatile u8*)(0x3B))  //outputs can be written on this register.
#define DDRA_REG     	(*(volatile u8*)(0x3A))  //Status of the pin is configured in this register (1>output,0>input).
#define PINA_REG		(*(volatile u8*)(0x39))  //inputs can be found in this register.

//PORTB Registers Definition
#define PORTB_REG   	(*(volatile u8*)(0x38))  //outputs can be written on this register.
#define DDRB_REG     	(*(volatile u8*)(0x37))  //Status of the pin is configured in this register (1>output,0>input).
#define PINB_REG		(*(volatile u8*)(0x36))

//PORTC Registers Definition
#define PORTC_REG   	(*(volatile u8*)(0x35))  //outputs can be written on this register.
#define DDRC_REG     	(*(volatile u8*)(0x34))  //Status of the pin is configured in this register (1>output,0>input).
#define PINC_REG		(*(volatile u8*)(0x33))

//PORTD Registers Definition
#define PORTD_REG   	(*(volatile u8*)(0x32))  //outputs can be written on this register.
#define DDRD_REG     	(*(volatile u8*)(0x31))  //Status of the pin is configured in this register (1>output,0>input).
#define PIND_REG		(*(volatile u8*)(0x30))  //inputs can be found in this register.

//Status Register Definition
#define SREG_REG	(*(volatile u8*)(0x5F))

//General Interrupt Control Register Definition
#define GICR_REG	(*(volatile u8*)(0x5B))		//(contain enable of external interrupt 0,1,2)

//The MCU Control Register Definition
#define MCUCR_REG	(*(volatile u8*)(0x55))		//(Contain masking of external interrupt 0,1)

//MCU Control and Status Register Definition
#define MCUCSR_REG	(*(volatile u8*)(0x54))		//(Contain masking of external interrupt 2)

//General Interrupt Flag Register Definition
#define GIFR_REG	(*(volatile u8*)(0x5A))		//contain flags of external interrupt 0,1,2

#define TIMER0_TCCR0_REG  (*(volatile u8*)(0x53))
#define TIMER0_TCNT0_REG  (*(volatile u8*)(0x52))
#define TIMER_TIMSK_REG   (*(volatile u8*)(0x59))

//ADC Multiplexer Selection Register
#define ADMUX_REG	(*(volatile u8*))	//Contain ADC channnel, referance voltage Selection and result left shifting

//ADC Control and Status Register
#define ADCSRA_REG	(*(volatile u8*))	//prescaler set, ADC Enable and Vref Selection


#define ADCL_REG	(*(volatile u8*))
#define ADCH_REG	(*(volatile u8*))
#define SFIOR_REG	(*(volatile u8*))

#endif /* MCAL_ATMEL32_REG_H_ */
