/*
 * Timer2_Reg.h
 *
 *  Created on: Jan 16, 2022
 *      Author: Queen
 */

#ifndef _TIMER2_REG_H_
#define _TIMER2_REG_H_

#include "Std_Types.h"


#define TIMER2_TCCR2_REG  (*(volatile u8*)(0x45))
#define TIMER2_TCNT2_REG  (*(volatile u8*)(0x44))
#define TIMER_TIMSK_REG   (*(volatile u8*)(0x59))


#endif /* 01_SOURCE_01_MCAL_TIMER2_INC_TIMER2_REG_H_ */
