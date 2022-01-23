#include "Update_Temp.h"

static u8 Counter = 0;
static u8 Temp_arr[5] = {0,0,0,0,0};


ISR (TIMER2_OVF_vect){
	Update_Temp_En =TRUE;
	Blink_Status = !Blink_Status;
}

static u8 Calc_Average(){
	u8 result = 0;
	for(int i=0;i<5;i++){
		result+=Temp_arr[i];
	}
	result /=5;
	return result;
}

void Update_Temp(void){
	if(Counter==122){
		//Timer2_Stop();
		u8 Temp = 0/*TempSen_Read()*/;
		u8 Var1 = Temp_arr[0];
		for(int i=0;i<4;i++){
			if(i==0){
				Temp_arr[i] = Temp;
			}
			else{
				Temp_arr[i] = Var1;
				Var1 = Temp_arr[i+1];
			}
		}
		Curr_Temp=Calc_Average();
	}
	else{
		Counter++;
		//Timer2_Start(1024);
	}
	Update_Temp_En =FALSE;
}
