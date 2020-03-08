/////////////////////////////////////////////////////
// Project: QPilot FMU                             //
// File: led.h                                     //
// Target: PIC32MZxxxxEFG064                       // 
// Compiler: XC32                                  //
// Author: Brad McGarvey                           //
// License: GNU General Public License v3.0        //
// Description: LED macros                         //
/////////////////////////////////////////////////////

#ifndef LED_H
#define	LED_H

//TODO Update these for correct pins
    #define LED1On()        (LATEbits.LATE13 = 1)
    #define LED1Off()       (LATEbits.LATE13 = 0)
    #define LED1Toggle()    (LATEbits.LATE13 ^= 1)
    #define LED2On()        (LATAbits.LATA8 = 1)
    #define LED2Off()       (LATAbits.LATA8 = 0)
    #define LED2Toggle()    (LATAbits.LATA8 ^= 1)

#endif	/* LED_H */

