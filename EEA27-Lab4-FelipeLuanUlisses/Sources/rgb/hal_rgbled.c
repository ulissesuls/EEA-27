/*
 * hal_rgbled.c
 *
 *  Created on: 15/03/2025
 *      Author: Thiago
 */

#include "hal_rgbled.h"
#include "MKL25Z4.h"
#include "clock/ksdk_clockchanger.h"

/* FDRMKL25Z RGB LED pin defintion */
#define RED_LED_PIN     (uint32_t) 18u
#define GREEN_LED_PIN   (uint32_t) 19u
#define BLUE_LED_PIN    (uint32_t) 1u
#define REG_CLOCK_LED   SIM_SCGC5
#define Ativar          1
#define MODE_GPIO       8
#define PORTB_Led       10
#define PORTD_Led		12


typedef enum {
	RED,
	GREEN,
	YELLOW,
} State;

State currentState = RED;
int stateCounter = 0;


/* ************************************************ */
/* Method name:        ledrgb_init                  */
/* Method description: Initialize the RGB LED device*/
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setupRgbLed(void)
{
    /* un-gate port clock*/
    REG_CLOCK_LED |= (Ativar<<PORTB_Led);
    REG_CLOCK_LED |= (Ativar<<PORTD_Led);

    /* set pin as gpio */
    PORTB_PCR18 = (Ativar<<MODE_GPIO);
    PORTB_PCR19 = (Ativar<<MODE_GPIO);
    PORTB_PCR1  = (Ativar<<MODE_GPIO);

    /* set pin as out */
    GPIOB_PDDR |= (Ativar<<RED_LED_PIN);
    GPIOB_PDDR |= (Ativar<<GREEN_LED_PIN);
    GPIOB_PDDR |= (Ativar<<BLUE_LED_PIN);


    /* clear all leds */
    hal_rgbled_clearRedLed();
    hal_rgbled_clearGreenLed();
    hal_rgbled_clearBlueLed();
}



/* ************************************************ */
/* Method name:        ledrgb_clearRedLed           */
/* Method description: Clear the "red" led from RGB */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearRedLed(void)
{
    /* clear desired led */
    GPIOB_PSOR = (Ativar << RED_LED_PIN);
}



/* ************************************************ */
/* Method name:        ledrgb_setRedLed             */
/* Method description: Set the "red" led from RGB   */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setRedLed(void)
{
    /* set desired led */
	GPIOB_PCOR = (Ativar << RED_LED_PIN);
}



/* ************************************************ */
/* Method name:        ledrgb_clearGreenLed         */
/* Method description: Clear "green" led from RGB   */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearGreenLed(void)
{
    /* clear desired led */
	GPIOB_PSOR = (Ativar << GREEN_LED_PIN);
}



/* ************************************************ */
/* Method name:        ledrgb_setGreenLed           */
/* Method description: Set the "green" led from RGB */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setGreenLed(void)
{
    /* set desired led */
	GPIOB_PCOR = (Ativar << GREEN_LED_PIN);
}



/* ************************************************ */
/* Method name:        ledrgb_clearBlueLed          */
/* Method description: Clear the "blue" led from RGB*/
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearBlueLed(void)
{
    /* clear desired led */
	GPIOB_PSOR = (Ativar << BLUE_LED_PIN);
}



/* ************************************************ */
/* Method name:        ledrgb_setBlueLed            */
/* Method description: Set the "blue" led from RGB  */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setBlueLed(void)
{
    /* set desired led */
	GPIOB_PCOR = (Ativar << BLUE_LED_PIN);
}

void dummyTimer(int counterTime)
{
	volatile uint32_t i;
	for (int count=0; count < counterTime; count++){
		for(i=0; i< 1000000; i++){
			//consumir tempo
		}
	}
}

void hal_rgbled_trafficLight(void)
{
	stateCounter++;
	switch (currentState)
	{
	case RED:
		if (stateCounter >= 1) {
			stateCounter = 0;
			currentState = GREEN;
			hal_rgbled_clearRedLed();
			hal_rgbled_setGreenLed();
		}
		break;

	case GREEN:
		if (stateCounter >= 1) {
			stateCounter = 0;
			currentState = YELLOW;
			hal_rgbled_clearGreenLed();
			hal_rgbled_setRedLed();
			hal_rgbled_setGreenLed();
		}
		break;

	case YELLOW:
		if (stateCounter >= 1) {
			stateCounter = 0;
			currentState = RED;
			hal_rgbled_clearRedLed();
			hal_rgbled_clearGreenLed();
			hal_rgbled_setRedLed();
		}
		break;
	}
}



