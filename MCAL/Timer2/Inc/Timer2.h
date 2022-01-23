/*
 * Timer2.h
 *
 *  Created on: Jan 16, 2022
 *      Author: Queen
 */

#ifndef _TIMER2_H_
#define _TIMER2_H_

#include"Timer2_Reg.h"
#include"Timer2_Std_Types.h"
#include "Std_Types.h"
#include "Std_Operations.h"
#include "Glbl_Int.h"


//Timer2 Mode Select
#define  TIMER2_WGM21                                 (3)
#define  TIMER2_WGM20                                 (6)



//TIMER2 Prescaler
#define Timer2_Stopped					    ((u8)0<<0)
#define TIMER2_NO_Prescaler     			((u8)1<<0)
#define TIMER2_Prescaler_8			     	((u8)2<<0)
#define TIMER2_Prescaler_32			        ((u8)3<<0)
#define TIMER2_Prescaler_64				    ((u8)4<<0)
#define TIMER2_Prescaler_128			    ((u8)5<<0)
#define TIMER2_Prescaler_256		        ((u8)6<<0)
#define TIMER2_Prescaler_1024	            ((u8)7<<0)



//Timer2 Interrupt enable
#define Timer2_Overflow_Int_enable             (6)



void Timer2_Init(void);
void Timer2_Start(TIMER2_PreScaler_ID);
void Timer2_Stop(void);
void Timer2_EnableInterrupt(void);
void Timer2_DisableInterrupt(void);


#endif /* 01_SOURCE_01_MCAL_TIMER2_INC_TIMER2_H_ */
