################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Services/Update_Temp/src/subdir.mk
-include Services/Store_Temp/src/subdir.mk
-include Services/Restore_Temp/src/subdir.mk
-include Services/Mode_Handler/src/subdir.mk
-include Services/Debounce_Handler/src/subdir.mk
-include MCAL/Timer2/Src/subdir.mk
-include MCAL/Timer1/Src/subdir.mk
-include MCAL/Timer0/Src/subdir.mk
-include MCAL/Global_Inerrupt/Src/subdir.mk
-include MCAL/EXTRN_ISR_Module/Src/subdir.mk
-include MCAL/DIO_Module/Src/subdir.mk
-include HAL/SSD/Src/subdir.mk
-include HAL/LED_Module/Src/subdir.mk
-include HAL/Heater_Module/src/subdir.mk
-include HAL/Cooler_Module/src/subdir.mk
-include HAL/Button_Module/Src/subdir.mk
-include Apps/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Temp_Controlled_Tank
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Temp_Controlled_Tank.lss \
Temp_Controlled_Tank.lss \
Temp_Controlled_Tank.lss \
Temp_Controlled_Tank.lss \

FLASH_IMAGE += \
Temp_Controlled_Tank.hex \

SIZEDUMMY += \
sizedummy \
sizedummy \
sizedummy \
sizedummy \


# All Target
all: main-build

# Main-build Target
main-build: Temp_Controlled_Tank.elf secondary-outputs

# Tool invocations
Temp_Controlled_Tank.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Temp_Controlled_Tank.map -mmcu=atmega32 -o "Temp_Controlled_Tank.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Temp_Controlled_Tank.lss: Temp_Controlled_Tank.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Temp_Controlled_Tank.elf  >"Temp_Controlled_Tank.lss"
	@echo 'Finished building: $@'
	@echo ' '

Temp_Controlled_Tank.hex: Temp_Controlled_Tank.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Temp_Controlled_Tank.elf  "Temp_Controlled_Tank.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Temp_Controlled_Tank.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Temp_Controlled_Tank.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Temp_Controlled_Tank.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents main-build

-include ../makefile.targets
