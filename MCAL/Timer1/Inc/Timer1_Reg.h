/*
 * Timer1_Reg.h
 *
 *  Created on: Jan 5, 2022
 *      Author: Queen
 */

#ifndef _TIMER1_REG_H_
#define _TIMER1_REG_H_


#include "Std_Types.h"



#define TIMER1_TCCR1A_REG        (*(volatile u8*)(0x4F))
#define TIMER1_TCCR1B_REG        (*(volatile u8*)(0x4E))
#define TIMER_TIMSK_REG          (*(volatile u8*)(0x59))
#define TIMER1_TCNT1H_REG        (*(volatile u8*)(0x4D))
#define TIMER1_TCNT1L_REG        (*(volatile u16*)(0x4C))


#endif /* 01_SOURCE_01_MCAL_TIMER1_INC_TIMER1_REG_H_ */
