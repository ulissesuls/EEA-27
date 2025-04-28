/*
 * hal_rgbled.h
 *
 *  Created on: 15/03/2025
 *      Author: Thiago
 */

#ifndef SOURCES_RGB_HAL_RGBLED_H_
#define SOURCES_RGB_HAL_RGBLED_H_


/* ************************************************ */
/* Method name:        ledrgb_init                  */
/* Method description: Initialize the RGB LED device*/
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setupRgbLed(void);


/* ************************************************ */
/* Method name:        ledrgb_clearRedLed           */
/* Method description: Clear the "red" led from RGB */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearRedLed(void);


/* ************************************************ */
/* Method name:        ledrgb_setRedLed             */
/* Method description: Set the "red" led from RGB   */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setRedLed(void);


/* ************************************************ */
/* Method name:        ledrgb_clearGreenLed         */
/* Method description: Clear  "green" led from RGB  */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearGreenLed(void);


/* ************************************************ */
/* Method name:        ledrgb_setGreenLed           */
/* Method description: Set the "green" led from RGB */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setGreenLed(void);


/* ************************************************ */
/* Method name:        ledrgb_clearBlueLed          */
/* Method description: Clear the "blue" led from RGB*/
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_clearBlueLed(void);


/* ************************************************ */
/* Method name:        ledrgb_setBlueLed            */
/* Method description: Set the "blue" led from RGB  */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_setBlueLed(void);


/* ************************************************ */
/* Method name:        hal_rgbled_traffic|Light     */
/* Method description: Set machine state            */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void hal_rgbled_trafficLight(void);

/* ************************************************ */
/* Method name:        dummyTimer                   */
/* Method description: Set timer for machine state  */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void dummyTimer(int counterTime);



#endif /* SOURCES_RGB_HAL_RGBLED_H_ */
