 /*
 * MCAL_EEPROM.h
 *
 *  Created on: Jan 2, 2021
 *      Author: HatemSamir
 */
#ifndef MCAL_EEPROM_H
#define MCAL_EEPROM_H

#include <Eeprom_Reg.h>
#include "Std_Types.h"

//function prototypes.
void EEPROM_Write(u16 address,u8 data);
u8 EEPROM_Read(u16 address);
#endif
