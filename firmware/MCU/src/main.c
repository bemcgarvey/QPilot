/////////////////////////////////////////////////////
// Project: QPilot MCU                             //
// File: main.c                                    //
// Target: PIC32MKxxxxGPD/E064                     // 
// Compiler: XC32                                  //
// Author: Brad McGarvey                           //
// License: GNU General Public License v3.0        //
// Description: program entry point and nmi handler//
/////////////////////////////////////////////////////
#include "device.h"
#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#include "led.h"
#include "pins.h"



int main(void) {
    
    SYS_Initialize(NULL);
    initPins();
    while (true) {
        
    };
    return ( EXIT_FAILURE);
}

void _nmi_handler(void) {
    
    __asm__("ERET");
}

/*******************************************************************************
 End of File
 */

