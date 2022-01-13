/*
 * EXTRN_ISR.h
 *
 *  Created on: Dec 4, 2021
 *      Author: HatemSamir
 */

#ifndef MCAL_EXTRN_ISR_H_
#define MCAL_EXTRN_ISR_H_

#include "Atmel32_Reg.h"
#include "EXTRN_ISR_Types.h"

//External Interrupt Module functions prototypes.
void EXTRN_ISR_Init(Channel_ID,Mood_ID);
void EXTRN_ISR_Enable(Channel_ID);
void EXTRN_ISR_Disable(Channel_ID);
void EXTRN_ISR_Read_Flag(Channel_ID);
void EXTRN_ISR_Clear_Flag(Channel_ID);
void EXTRN_ISR_Change_Mood(Channel_ID,Mood_ID);





#endif /* MCAL_EXTRN_ISR_H_ */
