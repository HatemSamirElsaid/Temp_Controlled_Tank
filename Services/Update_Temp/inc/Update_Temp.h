//---------------------------------------------------------------------//
//Created:		Jan 17, 2022
//Author: 		HatemSamirElsaid
//Type:			Service
//Dependences:	Timer2_Module,UART_Module
//Description:
//	Timer2 is used to take reading from the sensor every 100ms and used
//	to satisfy SSD and LED blinking requirements of blinking every 1sec
//	in descried Conditions.
//---------------------------------------------------------------------//

#ifndef SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_
#define SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_

#include "Std_Types.h"
#include <avr/interrupt.h>
#include "Timer2.h"

u8 Curr_Temp;
volatile Boolean Update_Temp_En;
volatile Boolean Blink_Status;


#define Temp_Read_Rate		7		//15.6ms*Temp_Read_Rate = Periodic time to read from Sensor	//@7 = 109ms
#define LED_SSD_Blink_Rate	10		//15.6ms*Temp_Read_Rate*LED&SSD_Blink_Rate = Periodic time to Blink the LED And the SSD	//@10 =1.09 Sec


//Service functions prototypes
void Update_Temp(void);





#endif /* SERVICES_UPDATE_TEMP_INC_UPDATE_TEMP_H_ */
