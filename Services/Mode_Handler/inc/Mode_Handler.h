/*
 * Mode_Handler.h
 *
 *  Created on: Jan 16, 2022
 *      Author: HatemSamir
 */

#ifndef SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_
#define SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Mode_Handler_Types.h"
#include "Timer1.h"

volatile Mode_ID Mode;


//Service functions prototypes
void Mode_Handler(void);

#endif /* SERVICES_MODE_HANDLER_INC_MODE_HANDLER_H_ */
