/*
 * Timer1.h
 *
 *  Created on: Jan 5, 2022
 *      Author: Marina
 */

#ifndef _TIMER1_H_
#define _TIMER1_H_

#include "Timer1_Reg.h"
#include "Timer1_Std_Types.h"
#include "Std_Types.h"
#include "Std_Operations.h"
#include "Glbl_Int.h"



//Timer1 Mode Select
#define  TIMER1_WGM10                          (0)
#define  TIMER1_WGM11                          (1)
#define  TIMER1_WGM12                          (3)
#define  TIMER1_WGM13                          (4)



//TIMER1 Prescaler
#define Timer1_Stopped					    ((u8)0<<0)
#define TIMER1_NO_Prescaler     			((u8)1<<0)
#define TIMER1_Prescaler_8			     	((u8)2<<0)
#define TIMER1_Prescaler_64			        ((u8)3<<0)
#define TIMER1_Prescaler_256				((u8)4<<0)
#define TIMER1_Prescaler_1024			    ((u8)5<<0)
#define TIMER1_Ext_Falling_Edge		        ((u8)6<<0)
#define TIMER1_Ext_Rising_Edge	            ((u8)7<<0)



//Timer1 Interrupt enable
#define Timer1_Overflow_Int_enable             (2)



void Timer1_Init(void);
void Timer1_Start(TIMER1_PreScaler_ID);
void Timer1_Stop(void);
void Timer1_EnableInterrupt(void);
void Timer1_DisableInterrupt(void);

#endif /* 01_SOURCE_01_MCAL_TIMER1_INC_TIMER1_H_ */
