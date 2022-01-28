//---------------------------------------------------------------------//
//Created:		Jan 19, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	EEPROM_Module
//Description:
//---------------------------------------------------------------------//

#include "Store_Temp.h"


void Store_Temp(void){
	EEPROM_Write((u16)1,Des_Temp);
}
