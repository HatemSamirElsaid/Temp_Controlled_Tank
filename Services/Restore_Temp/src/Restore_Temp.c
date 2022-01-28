//---------------------------------------------------------------------//
//Created:		Jan 16, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	EEPROM_Module
//Description:
//---------------------------------------------------------------------//

#include "Restore_Temp.h"

static u8 CHK = 0b01010101;


void Restore_Temp(void){
	u8 Reading=0;
	u16 Add=0;

	Reading = EEPROM_Read((u16)Add);
	if (Reading == CHK){
		Des_Temp = EEPROM_Read(Add+1);
	}
	else{
		EEPROM_Write((u16)Add,CHK);
		EEPROM_Write((u16)(Add+1),(u8)default_Temp);
		Des_Temp = default_Temp;
	}
}
