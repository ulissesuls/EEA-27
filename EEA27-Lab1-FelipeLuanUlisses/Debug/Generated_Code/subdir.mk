################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/Task1.c \
../Generated_Code/clockMan1.c \
../Generated_Code/free_rtos.c \
../Generated_Code/hardware_init.c \
../Generated_Code/osa1.c \
../Generated_Code/pin_init.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/Task1.o \
./Generated_Code/clockMan1.o \
./Generated_Code/free_rtos.o \
./Generated_Code/hardware_init.o \
./Generated_Code/osa1.o \
./Generated_Code/pin_init.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/Task1.d \
./Generated_Code/clockMan1.d \
./Generated_Code/free_rtos.d \
./Generated_Code/hardware_init.d \
./Generated_Code/osa1.d \
./Generated_Code/pin_init.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/hal/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/hal/src/sim/MKL25Z4" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/system/src/clock/MKL25Z4" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/system/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/osa/inc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/CMSIS/Include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices/MKL25Z4/include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/platform/devices/MKL25Z4/startup" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Sources" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/rtos/FreeRTOS/include" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/SDK/rtos/FreeRTOS/port/gcc" -I"D:/Projetos/Projetos ITA/EEA27/EEA27-Lab1-FelipeLuanUlisses/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


