################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO_Module/Src/Dio.c 

OBJS += \
./MCAL/DIO_Module/Src/Dio.o 

C_DEPS += \
./MCAL/DIO_Module/Src/Dio.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/DIO_Module/Src/%.o: ../MCAL/DIO_Module/Src/%.c MCAL/DIO_Module/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"K:\GIT_Lab\Temp_Controlled_Tank\Apps\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Lib" -I"K:\GIT_Lab\Temp_Controlled_Tank\Services\Debounce_Handler\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Services\Store_Temp\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Services\Mode_Handler\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Services\Restore_Temp\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Services\Update_Temp\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Global_Inerrupt\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Timer0\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Timer1\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Timer2\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\DIO_Module\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\EEPROM\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\UART\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\HAL\Button_Module\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\HAL\LED_Module\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\HAL\Heater_Module\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\HAL\Cooler_Module\inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\HAL\SSD\Inc" -Wall -g2 -gstabs -O2 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


