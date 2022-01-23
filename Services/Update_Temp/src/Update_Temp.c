#include "Update_Temp.h"

static u8 Counter = 0;
static u8 Temp_arr[5] = {0,0,0,0,0};


ISR (TIMER2_OVF_vect){
	Update_Temp_En =TRUE;
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
	if(Counter==13){
		Timer2_Stop();
		Blink_Status = !Blink_Status;
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
		Counter=0;
	}
	else{
		Counter++;
		Timer2_Start(TIMER2_1024_);
	}
	Update_Temp_En =FALSE;
}
