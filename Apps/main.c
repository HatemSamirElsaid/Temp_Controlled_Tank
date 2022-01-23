//#include <avr/io.h>

#include "MCAL.h"
#include "HAL.h"
#include "Lib.h"
#include "Main_Types.h"
#include "Services.h"
//#include "util/delay.h"


int main (){
	/*--------------------------------------------------------------------------------------------------------------*/
	/*------------------------------------------System Modules Initialization---------------------------------------*/
	/*--------------------------------------------------------------------------------------------------------------*/
	Timer0_Init();
	Timer1_Init();
	Timer2_Init();
	Heater_Init();
	Cooler_Init();
	//	TempSen_Init();
	//	SSD_Init();
	Button_Init(BUTTON0);
	Button_Init(BUTTON1);
	Button_Init(BUTTON2);
	LED_Init();
	/*--------------------------------------------------------------------------------------------------------------*/
	/*------------------------------------------System Status Initialization----------------------------------------*/
	/*--------------------------------------------------------------------------------------------------------------*/
	Switch SystemStatus = OFF;
	ButtonEnable = TRUE;
	Mode = Temp_Control;
	Curr_Temp = 0;
	Restore_Temp();
	Update_Temp_En = TRUE;
	Blink_Status = FALSE;
	Timer2_Start(TIMER2_1024_);
	Timer2_EnableInterrupt();
	/*--------------------------------------------------------------------------------------------------------------*/
	/*------------------------------------------System Loop---------------------------------------------------------*/
	/*--------------------------------------------------------------------------------------------------------------*/
	while (1){

		/*------------------------------------------Testing---------------------------------------------------------*/
		/*//Test Timer2 interrupt with Blinking Function
		if(Blink_Status==TRUE){
			LED_ON();
		}else{
			LED_OFF();
		}
		if(Update_Temp_En==TRUE){
			Update_Temp();
		}*/




		/*-------------------------------System ON/OFF Control Section----------------------------------------------*/

		if(Button_READ(BUTTON1)){
			if(ButtonEnable == TRUE){
				SystemStatus = !SystemStatus;
			}
			Debounce_Handler();
		}

		if(SystemStatus==OFF){
			Heater_OFF();
			Cooler_OFF();
			continue;
		}

		/*-------------------------------Reading Currant Temperature Section----------------------------------------*/

		if(Update_Temp_En == TRUE){
			Update_Temp();
		}

		/*-------------------------------Changing desired Temperature Section---------------------------------------*/

		if(Button_READ(BUTTON0)||Button_READ(BUTTON2)){ // Change desired temperature +/-
			if(ButtonEnable == TRUE){

				Mode_Handler();
				Mode = Temp_Set;

				if(Button_READ(BUTTON0)){
					Des_Temp +=5;
				}else{
					Des_Temp -=5;
				}
				Store_Temp();

			}
			Debounce_Handler();
		}

		/*-------------------------------Seven Segments Display Control Section-------------------------------------*/

		if(Mode==Temp_Control){
			//SSD_Display(Des_Temp);
		}else if(Mode==Temp_Set && Blink_Status==TRUE){
			//SSD_Display(Curr_Temp);
			LED_ON();
		}else{
			LED_OFF();
		}

		/*-------------------------------Heating/Cooling elements Control Section-------------------------------------*/

		if((Curr_Temp+5)<Des_Temp){
			Heater_ON();
			if(Blink_Status==TRUE){
				LED_ON();
			}else{
				LED_OFF();
			}
		}else if((Curr_Temp-5)>Des_Temp){
			Cooler_ON();
		}else{
			Cooler_OFF();
			Heater_OFF();
		}
	}


	return 0;
}


