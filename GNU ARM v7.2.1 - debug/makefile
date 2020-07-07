################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include emlib/subdir.mk
-include CMSIS/EFM32WG/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: uart_sendig_value.axf

# Tool invocations
uart_sendig_value.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "uart_sendig_value.ld" -Xlinker --gc-sections -Xlinker -Map="uart_sendig_value.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o uart_sendig_value.axf "./CMSIS/EFM32WG/startup_efm32wg.o" "./CMSIS/EFM32WG/system_efm32wg.o" "./emlib/em_cmu.o" "./emlib/em_core.o" "./emlib/em_gpio.o" "./emlib/em_system.o" "./emlib/em_usart.o" "./src/main.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: uart_sendig_value.hex'
	arm-none-eabi-objcopy -O ihex "uart_sendig_value.axf" "uart_sendig_value.hex"
	@echo ' '

	@echo 'Building bin file: uart_sendig_value.bin'
	arm-none-eabi-objcopy -O binary "uart_sendig_value.axf" "uart_sendig_value.bin"
	@echo ' '

	@echo 'Building s37 file: uart_sendig_value.s37'
	arm-none-eabi-objcopy -O srec "uart_sendig_value.axf" "uart_sendig_value.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "uart_sendig_value.axf" -A
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) uart_sendig_value.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
