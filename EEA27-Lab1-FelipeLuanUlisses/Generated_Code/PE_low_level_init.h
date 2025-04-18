/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : EEA27-Lab1-FelipeLuanUlisses
**     Processor   : MKL25Z128VLK4
**     Component   : MKL25Z128LK4_4SDK
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Datasheet   : KL25P80M48SF0RM, Rev.3, Sep 2012
**     Compiler    : GNU C Compiler
**     Date/Time   : 2025-04-12, 17:26, # CodeGen: 0
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MKL25Z128VLK4
**          fsl_clock_manager                              : clockMan1
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              Very low power modes                       : Allowed
**              Low leakage stop mode                      : Allowed
**              Very low leakage stop mode                 : Allowed
**          Watchdog settings                              : 
**            Watchdog disable                             : yes
**          Pins/Signals                                   : 
**            Reset pin                                    : Enabled
**              Reset Pin                                  : RST_TGTMCU
**            Debug interface (SWD)                        : 
**              DIO pin                                    : Enabled
**                DIO Pin                                  : J6_2/SWD_DIO_TGTMCU
**              CLK pin                                    : Enabled
**                CLK Pin                                  : J11_1
**          Flash memory organization                      : 
**            Flash blocks                                 : 1
**              Flash block 0                              : PFlash
**                Address                                  : 0x0
**                Size                                     : 131072
**                Write unit size                          : 4
**                Erase unit size                          : 1024
**                Protection unit size                     : 4096
**          Flash configuration field                      : Disabled
**     Contents    :
**         SystemInit            - void SystemInit(void);
**         SystemCoreClockUpdate - void SystemCoreClockUpdate(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#if !defined(__PE_LOW_LEVEL_INIT_H__)
#define __PE_LOW_LEVEL_INIT_H__

#include "Cpu.h"
#include "Events.h"

#endif /* __PE_LOW_LEVEL_INIT_H__ */
