/*
 * Int.c
 *
 *  Created on: Dec 18, 2021
 *      Author: Queen
 */

#include "../Inc/Glbl_Int.h"
#include "Std_Operations.h"

void Enable_Gl_Int(){

	//Glbl_STATUS_REG = Global_REG_Enable;
    SET_BIT(Glbl_STATUS_REG,7);
}
void Disable_Gl_Int(){

	//Glbl_STATUS_REG = Global_REG_Disable;
	CLR_BIT(Glbl_STATUS_REG,7);
}
