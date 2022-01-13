#include "GNRL_ISR.h"

void GNRL_ISR_Enable_Global_ISR(){
	SET_BIT(SREG_REG,7);
}
//--------------------------------------------------------------------------------------------------
void GNRL_ISR_Disable_Global_ISR(){
	CLR_BIT(SREG_REG,7);
}
