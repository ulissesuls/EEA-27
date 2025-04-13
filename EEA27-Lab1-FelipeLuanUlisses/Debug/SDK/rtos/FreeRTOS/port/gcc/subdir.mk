################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/port.c 

S_UPPER_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/portasm.S 

OBJS += \
./SDK/rtos/FreeRTOS/port/gcc/port.o \
./SDK/rtos/FreeRTOS/port/gcc/portasm.o 

C_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/port.d 

S_UPPER_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/portasm.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/hal/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/hal/src/sim/MKL25Z4" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/system/src/clock/MKL25Z4" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/system/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/osa/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/CMSIS/Include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices/MKL25Z4/include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices/MKL25Z4/startup" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Sources" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/rtos/FreeRTOS/include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/rtos/FreeRTOS/port/gcc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -x assembler-with-cpp -D"FSL_RTOS_FREE_RTOS" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code/SDK/rtos/FreeRTOS/config" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


