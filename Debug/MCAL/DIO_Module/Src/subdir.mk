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
	avr-gcc -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\DIO_Module\Inc" -I"K:\GIT_Lab\Temp_Controlled_Tank\Lib" -I"K:\GIT_Lab\Temp_Controlled_Tank\MCAL\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


