/*
 * Timer1.c

 *
 *  Created on: Jan 5, 2022
 *      Author: Marina
 */

#include "Timer1.h"

void Timer1_Init(void){

	 //interval Mode
	 CLR_BIT(TIMER1_TCCR1A_REG,TIMER1_WGM10);
	 CLR_BIT(TIMER1_TCCR1A_REG,TIMER1_WGM11);
	 CLR_BIT(TIMER1_TCCR1B_REG,TIMER1_WGM12);
	 CLR_BIT(TIMER1_TCCR1B_REG,TIMER1_WGM13);
}


void Timer1_Start(TIMER1_PreScaler_ID prescaler){

	//Reset
	TIMER1_TCNT1L_REG = 0;

	switch(prescaler){

	case TIMER1_Stop_:

		TIMER1_TCCR1B_REG |= Timer1_Stopped;
		break;

	case TIMER1_None_:

		TIMER1_TCCR1B_REG |= TIMER1_NO_Prescaler;
		break;

	case TIMER1_8_:

		TIMER1_TCCR1B_REG |= TIMER1_Prescaler_8;
		break;

	case TIMER1_64_:

		TIMER1_TCCR1B_REG |= TIMER1_Prescaler_64;
		break;

	case TIMER1_256_:

		TIMER1_TCCR1B_REG |= TIMER1_Prescaler_256;
		break;

	case TIMER1_1024_:

		TIMER1_TCCR1B_REG |= TIMER1_Prescaler_1024;
		break;

	case TIMER1_Ext_Falling_Edge_:

		TIMER1_TCCR1B_REG |= TIMER1_Ext_Falling_Edge;
		break;

	case TIMER1_Ext_Rising_Edge_:

		TIMER1_TCCR1B_REG |= TIMER1_Ext_Rising_Edge;
		break;
    }
}


void Timer1_Stop(void){

	TIMER1_TCCR1B_REG |=Timer1_Stopped;
}


void Timer1_EnableInterrupt(void){

	//set global int bit (law ht3mlha fel main yb2a sheel el line da w sheel include Glbl_Int mn el .h)
   SET_BIT(Glbl_STATUS_REG,7);
   SET_BIT(TIMER_TIMSK_REG,Timer1_Overflow_Int_enable) ;
}


void Timer1_DisableInterrupt(void){

   CLR_BIT(TIMER_TIMSK_REG,Timer1_Overflow_Int_enable) ;
}

