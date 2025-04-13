#ifndef HAL_RGBLED_H
#define HAL_RGBLED_H

void hal_rgbled_setupRgbled(void);
void hal_rgbled_setLedRed(void);
void hal_rgbled_setLedGreen(void);
void hal_rgbled_setLedBlue(void);
void hal_rgbled_clearLedRed(void);
void hal_rgbled_clearLedGreen(void);
void hal_rgbled_clearLedBlue(void);
void hal_rgbled_trafficLight(void);
void dummyTimer(int counterTime);

#endif // HAL_RGBLED_H
