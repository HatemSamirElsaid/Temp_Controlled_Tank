/*
 * Update_Temp.h
 *
 *  Created on: Jan 17, 2022
 *      Author: htmsa
 */

#ifndef SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_
#define SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Timer2.h"

u8 Curr_Temp;
volatile Boolean Update_Temp_En;
volatile Boolean Blink_Status;


//Service functions prototypes
void Update_Temp(void);





#endif /* SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_ */
