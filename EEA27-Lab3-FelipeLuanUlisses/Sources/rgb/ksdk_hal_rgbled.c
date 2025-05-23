#include "ksdk_hal_rgbled.h"


void ksdk_hal_rgbled_init(void) {
    // Habilita clock para PORTB e PORTD
    CLOCK_SYS_EnablePortClock(PORTB_IDX);
    CLOCK_SYS_EnablePortClock(PORTD_IDX);

    // Configura pinos como GPIO
    PORT_HAL_SetMuxMode(RED_LED_PORT, RED_LED_PIN, kPortMuxAsGpio);
    PORT_HAL_SetMuxMode(GREEN_LED_PORT, GREEN_LED_PIN, kPortMuxAsGpio);
    PORT_HAL_SetMuxMode(BLUE_LED_PORT, BLUE_LED_PIN, kPortMuxAsGpio);

    // Definindo pinos como Sa�da
    GPIO_HAL_SetPinDir(PTB, RED_LED_PIN, kGpioDigitalOutput);
    GPIO_HAL_SetPinDir(PTB, GREEN_LED_PIN, kGpioDigitalOutput);
    GPIO_HAL_SetPinDir(PTD, BLUE_LED_PIN, kGpioDigitalOutput);

    ksdk_hal_ledrgb_clearRedLed();
    ksdk_hal_ledrgb_clearGreenLed();
    ksdk_hal_ledrgb_clearBlueLed();

}

void ksdk_hal_ledrgb_clearRedLed(void){
	GPIO_HAL_SetPinOutput(PTB, RED_LED_PIN);
}

void ksdk_hal_ledrgb_clearBlueLed(void){
	GPIO_HAL_SetPinOutput(PTD, BLUE_LED_PIN);
}

void ksdk_hal_ledrgb_clearGreenLed(void){
	GPIO_HAL_SetPinOutput(PTB, GREEN_LED_PIN);
}

void ksdk_hal_ledrgb_setRedLed(void){
	GPIO_HAL_ClearPinOutput(PTB, RED_LED_PIN);
}

void ksdk_hal_ledrgb_setBlueLed(void){
	GPIO_HAL_ClearPinOutput(PTD, BLUE_LED_PIN);
}

void ksdk_hal_ledrgb_setGreenLed(void){
	GPIO_HAL_ClearPinOutput(PTB, GREEN_LED_PIN);
}


