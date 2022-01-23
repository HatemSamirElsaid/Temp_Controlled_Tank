/*
 * Restore_Temp.h
 *
 *  Created on: Jan 16, 2022
 *      Author: htmsa
 */

#ifndef SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_
#define SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_

#include "Std_Types.h"
//#include "EEPROM_Module.h"

#define default_Temp	60
u8 Des_Temp;

//Functions prototypes
void Restore_Temp(void);

#endif /* SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_ */
