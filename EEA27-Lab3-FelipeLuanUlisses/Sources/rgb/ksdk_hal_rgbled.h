#ifndef KSDK_HAL_RGBLED_H
#define KSDK_HAL_RGBLED_H

#include "fsl_gpio_hal.h"
#include "fsl_port_hal.h"
#include "fsl_clock_manager.h"

// Definições dos pinos (RGB: PTB18, PTB19, PTD1)
#define RED_LED_PORT      PORTB
#define RED_LED_PIN       (uint32_t) 18u
#define GREEN_LED_PORT    PORTB
#define GREEN_LED_PIN     (uint32_t) 19u
#define BLUE_LED_PORT     PORTD
#define BLUE_LED_PIN      (uint32_t) 1u

void ksdk_hal_rgbled_init(void);

void ksdk_hal_ledrgb_clearRedLed(void);

void ksdk_hal_ledrgb_clearBlueLed(void);

void ksdk_hal_ledrgb_clearGreenLed(void);

void ksdk_hal_ledrgb_setRedLed(void);

void ksdk_hal_ledrgb_setBlueLed(void);

void ksdk_hal_ledrgb_setGreenLed(void);


#endif // KSDK_HAL_RGBLED_H
