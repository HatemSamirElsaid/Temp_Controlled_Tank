#include "Update_Temp.h"

static u8 Counter = 0;
static u8 Temp_arr[5] = {0,0,0,0,0};



ISR (TIMER2_OVF_vect){
	Update_Temp_En =TRUE;
}

static u8 Calc_Average(){
	u16 result = 0;
	for(int i=0;i<5;i++){
		result+=Temp_arr[i];
	}
	result /=5;
	return (u8)result;
}

void Update_Temp(void){
	u8 Var1,Var2;
	if(Counter==13){
		Timer2_Stop();
		Blink_Status = !Blink_Status;
		u8 Temp = 70/*TempSen_Read()*/;
		for(int i=0;i<5;i++){
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
		Counter=0;
	}
	else{
		Counter++;
		Timer2_Start(TIMER2_1024_);
	}
	Update_Temp_En =FALSE;
}
