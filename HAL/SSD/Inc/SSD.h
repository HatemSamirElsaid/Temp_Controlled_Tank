/*
 * SSD.h
 *
 *  Created on: Dec 23, 2021
 *      Author: HatemSamir
 */

#ifndef _SSD_H_
#define _SSD_H_

#include "Std_Types.h"
#include "Std_Operations.h"
#include "Dio.h"


#define SSD_MASK      (0xF0)
void SSD_Init(void);
void SSD_DisplayNumber(u8 num);
void SSD_Stop();

#endif /* 01_SOURCE_02_HAL_SSD_INC_SSD_H_ */
