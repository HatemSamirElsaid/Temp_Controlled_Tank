/*
 * GNRL_ISR.h
 *
 *  Created on: Dec 3, 2021
 *      Author: HatemSamir
 */

#ifndef MCAL_G_ISR_H_
#define MCAL_G_ISR_H_

#include "Atmega32_Reg.h"
#include "Std_Types.h"
#include "Std_Operations.h"

//General Interrupt Module functions prototypes.
void GNRL_ISR_Enable_Global_ISR();
void GNRL_ISR_Disable_Global_ISR();

#endif /* MCAL_G_ISR_H_ */
