/*
 * Timer0_Reg.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Marina
 */

#ifndef _TIMER0_REG_H_
#define _TIMER0_REG_H_

#include "Std_Types.h"


#define TIMER0_TCCR0_REG  (*(volatile u8*)(0x53))
#define TIMER0_TCNT0_REG  (*(volatile u8*)(0x52))
#define TIMER_TIMSK_REG   (*(volatile u8*)(0x59))

#endif /* 01_SOURCE_01_MCAL_TIMER0_INC_TIMER0_REG_H_ */
