/*
 * Timer0.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Marina
 */

#ifndef _TIMER0_H_
#define _TIMER0_H_

#include "Timer0_Reg.h"
#include "Std_Types.h"
#include "Timer0_Std_Types.h"
#include "Glbl_Int.h"
#include "Std_Operations.h"


//Timer0 Mode Select
#define TIMER0_WGM00                           (6)
#define TIMER0_WGM01                           (3)




//TIMER0 Prescaler
#define Timer0_Stopped					    ((u8)0<<0)
#define TIMER0_NO_Prescaler     			((u8)1<<0)
#define TIMER0_Prescaler_8			     	((u8)2<<0)
#define TIMER0_Prescaler_64			        ((u8)3<<0)
#define TIMER0_Prescaler_256				((u8)4<<0)
#define TIMER0_Prescaler_1024			    ((u8)5<<0)
#define TIMER0_Ext_Falling_Edge		        ((u8)6<<0)
#define TIMER0_Ext_Rising_Edge	            ((u8)7<<0)



//Timer0 Interrupt enable
#define Timer0_Overflow_Int_enable             (0)



void Timer0_Init(void);
void Timer0_Start(TIMER0_PreScaler_ID);
void Timer0_Stop(void);
void Timer0_EnableInterrupt(void);
void Timer0_DisableInterrupt(void);

#endif /* 01_SOURCE_01_MCAL_TIMER0_INC_TIMER0_H_ */
