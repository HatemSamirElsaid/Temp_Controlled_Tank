/*
 * Timer2.c
 *
 *  Created on: Jan 16, 2022
 *      Author: Queen
 */


#include "Timer2.h"


void Timer2_Init(void){

	 CLR_BIT(TIMER2_TCCR2_REG,TIMER2_WGM20);
	 CLR_BIT(TIMER2_TCCR2_REG,TIMER2_WGM21);
}


void Timer2_Start(TIMER2_PreScaler_ID prescaler){

	TIMER2_TCNT2_REG =0;  //Reset

	switch(prescaler){

	case TIMER2_Stop_:

		TIMER2_TCCR2_REG |= Timer2_Stopped;
		break;

	case TIMER2_None_:

		TIMER2_TCCR2_REG |= TIMER2_NO_Prescaler;
		break;

	case TIMER2_8_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_8;
		break;

	case TIMER2_32_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_32;
		break;

	case TIMER2_64_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_64;
		break;

	case TIMER2_128_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_128;
		break;

	case TIMER2_256_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_256;
		break;

	case TIMER2_1024_:

		TIMER2_TCCR2_REG |= TIMER2_Prescaler_1024;
		break;
    }
}


void Timer2_Stop(void){

	TIMER2_TCCR2_REG |=Timer2_Stopped;
}


void Timer2_EnableInterrupt(void){

	//set global int bit (law ht3mlha fel main yb2a sheel el line da w sheel include Glbl_Int mn el .h)
   SET_BIT(Glbl_STATUS_REG,7);
   SET_BIT(TIMER_TIMSK_REG,Timer2_Overflow_Int_enable) ;
}


void Timer2_DisableInterrupt(void){

   CLR_BIT(TIMER_TIMSK_REG,Timer2_Overflow_Int_enable) ;
}
