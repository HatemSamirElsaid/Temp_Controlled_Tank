//---------------------------------------------------------------------//
//Created:		Nov 12, 2022
//Author: 		HatemSamirElsaid
//Type:			Library
//Description:
//	contain main bit logical operations
//---------------------------------------------------------------------//

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NO) 			REG|=(1<<BIT_NO)	//Set bit of BIT_NO at the Reg
#define CLR_BIT(REG,BIT_NO) 			REG&=~(1<<BIT_NO)	//Clear bit of BIT_NO at the Reg
#define CHK_BIT(REG,BIT_NO) 			((REG>>BIT_NO)&0x01)	//Read bit of BIT_NO at the Reg
#define TOGGLE_BIT(REG,BIT_NO)    		REG^=(1<<BIT_NO)	//Toggle bit of BIT_NO at the Reg
#define WRIET_GROUP(REG,MASK,DATA)		REG=((REG&~(MASK))|DATA)	//To write Data On A group of Bits


#endif /* BIT_MATH_H_ */
