#include "Restore_Temp.h"

static u8 CHK = 0b01010101;


void Restore_Temp(void){
	u8 Reading=0;
	u16 Add=0;

	//Reading = EEPROM_Read(Add);
	if (Reading == CHK){
		Des_Temp = 0/*EEPROM_Read(Add+1)*/;
	}
	else{
		//EEPROM_Write(Add,CHK);
		//EEPROM_Write(Add+1,(u8)default_Temp);
		Des_Temp = default_Temp;
	}
}
