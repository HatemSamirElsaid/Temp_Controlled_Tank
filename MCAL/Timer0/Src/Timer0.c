/*
 * Timer0.c

 *
 *  Created on: Dec 25, 2021
 *      Author: Marina
 */
#include "Timer0.h"


void Timer0_Init(void){

	//Interval Mode
	 CLR_BIT(TIMER0_TCCR0_REG,TIMER0_WGM00);
	 CLR_BIT(TIMER0_TCCR0_REG,TIMER0_WGM01);

}


void Timer0_Start(TIMER0_PreScaler_ID prescaler){

	TIMER0_TCNT0_REG =0;  //Reset

	switch(prescaler){

	case TIMER0_Stop_:

		TIMER0_TCCR0_REG |= Timer0_Stopped;
		break;

	case TIMER0_None_:

		TIMER0_TCCR0_REG |= TIMER0_NO_Prescaler;
		break;

	case TIMER0_8_:

		TIMER0_TCCR0_REG |= TIMER0_Prescaler_8;
		break;

	case TIMER0_64_:

		TIMER0_TCCR0_REG |= TIMER0_Prescaler_64;
		break;

	case TIMER0_256_:

		TIMER0_TCCR0_REG |= TIMER0_Prescaler_256;
		break;

	case TIMER0_1024_:

		TIMER0_TCCR0_REG |= TIMER0_Prescaler_1024;
		break;

	case TIMER0_Ext_Falling_Edge_:

		TIMER0_TCCR0_REG |= TIMER0_Ext_Falling_Edge;
		break;

	case TIMER0_Ext_Rising_Edge_:

		TIMER0_TCCR0_REG |= TIMER0_Ext_Rising_Edge;
		break;
    }
}


void Timer0_Stop(void){

	TIMER0_TCCR0_REG |=Timer0_Stopped;
}


void Timer0_EnableInterrupt(void){

	//set global int bit (law ht3mlha fel main yb2a sheel el line da w sheel include Glbl_Int mn el .h)
   SET_BIT(Glbl_STATUS_REG,7);
   SET_BIT(TIMER_TIMSK_REG,Timer0_Overflow_Int_enable) ;
}


void Timer0_DisableInterrupt(void){

   CLR_BIT(TIMER_TIMSK_REG,Timer0_Overflow_Int_enable) ;
}
