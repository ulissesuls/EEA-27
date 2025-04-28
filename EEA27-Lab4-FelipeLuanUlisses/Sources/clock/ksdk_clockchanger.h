#ifndef SOURCES_CLOCK_KSDK_CLOCKCHANGER_H_
#define SOURCES_CLOCK_KSDK_CLOCKCHANGER_H_

extern unsigned int uiFlagNextPeriod;

void mcg_initSystemClock(void);
void lptmr_initTimer(void);
void LPTMR0_IRQHandler(void);




#endif /* SOURCES_CLOCK_KSDK_CLOCKCHANGER_H_ */
