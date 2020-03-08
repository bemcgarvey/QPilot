/////////////////////////////////////////////////////
// Project: QPilot FMU                             //
// File: pins.h                                    //
// Target: PIC32MZxxxxEFG064                       // 
// Compiler: XC32                                  //
// Author: Brad McGarvey                           //
// License: GNU General Public License v3.0        //
// Description: I/O pin configuration              //
/////////////////////////////////////////////////////

#ifndef PINS_H
#define	PINS_H

#ifdef	__cplusplus
extern "C" {
#endif

    void initPins(void);
    void setPPS(void);


#ifdef	__cplusplus
}
#endif

#endif	/* PINS_H */

