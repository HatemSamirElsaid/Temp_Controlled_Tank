#include "MCAL.h"
#include "HAL.h"
#include "Lib.h"
#include "Main_Types.h"
#include "Services.h"

int main (){
	/*--------------------------------------------------------------------------------------------------------------*/
	/*------------------------------------------System Modules Initialization---------------------------------------*/
	/*--------------------------------------------------------------------------------------------------------------*/
	Timer0_Init();
	Timer1_Init();
	Timer2_Init();
	Heater_Init();
	Cooler_Init();
	SSD_Init();
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
	Enable_Gl_Int();
	UART_Init(UART_BAUDRATE_9600);
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

		/*//Test EEPROM module and Restore Service
		if (Des_Temp==60){
			LED_ON();
		}
		else{
			LED_OFF();
		}*/

		/*//SSD Test
		SSD_DisplayNumber(54);*/


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
			SSD_Stop();
			Mode = Temp_Control;
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

				if(Button_READ(BUTTON2)){
					if(Des_Temp<Max_Temp){
						Des_Temp +=5;
					}
				}else{
					if(Des_Temp>Min_Temp){
						Des_Temp -=5;
					}
				}
				Store_Temp();

			}
			Mode_Handler();
			Debounce_Handler();
		}

		/*-------------------------------Seven Segments Display Control Section-------------------------------------*/

		if(Mode==Temp_Control){
			SSD_DisplayNumber(Curr_Temp);
		}else if(Mode==Temp_Set && Blink_Status==TRUE){
			SSD_DisplayNumber(Des_Temp);

		}else{
			SSD_Stop();
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
			Heater_OFF();
			Cooler_OFF();

		}

	}


	return 0;
}


