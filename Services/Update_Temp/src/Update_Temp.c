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

#include "Update_Temp.h"

static u8 T_Counter = 0;
static u8 SSD_Counter = 0;
static u8 Temp_arr[10] = {0,0,0,0,0,0,0,0,0,0};

extern u8 Num;


ISR (TIMER2_OVF_vect){
	Update_Temp_En =TRUE;
}

static u8 Calc_Average(){
	u16 result = 0;
	for(int i=0;i<10;i++){
		result+=Temp_arr[i];
	}
	result /=10;
	return (u8)result;
}

void Update_Temp(void){
	u8 Var1 = 0;
	u8 Var2 = 0;
	if(T_Counter==Temp_Read_Rate){	//((2^(8))*(1024)*7)/(16*2^20)=109ms
		Timer2_Stop();
		if(SSD_Counter==LED_SSD_Blink_Rate){	//((2^(8))*(1024)*7*10)/(16*2^20)=1.09Sec
			Blink_Status = !Blink_Status;
			SSD_Counter=0;
		}else{
			SSD_Counter++;
		}
		u8 Temp = Num;
		for(int i=0;i<10;i++){
			if(i==0){
				Var1 = Temp_arr[i];
				Temp_arr[i] = Temp;
			}
			else{
				Var2 = Var1;
				Var1 = Temp_arr[i];
				Temp_arr[i] = Var2;

			}
		}
		Curr_Temp=Calc_Average();
		T_Counter=0;
	}
	else{
		T_Counter++;
		Timer2_Start(TIMER2_1024_);
	}
	Update_Temp_En =FALSE;
}
