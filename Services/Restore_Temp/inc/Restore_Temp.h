//---------------------------------------------------------------------//
//Created:		Jan 16, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	EEPROM_Module
//Description:
//---------------------------------------------------------------------//

#ifndef SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_
#define SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_

#include "Std_Types.h"
#include "Eeprom.h"


#define default_Temp	60
#define Max_Temp	75
#define Min_Temp	35

u8 Des_Temp;

//Functions prototypes
void Restore_Temp(void);

#endif /* SERVICES_RESTORE_TEMP_INC_RESTORE_TEMP_H_ */
