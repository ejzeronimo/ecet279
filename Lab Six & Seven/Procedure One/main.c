/*
 * FileName: main.c
 * Version: 1
 *
 * Created: 10/11/2022 5:36:00 PM
 * Author: Ethan Zeronik
 *
 * Operations: set the button IO
 *
 * Hardware:
 *   Atmega2560          micro controller
 */

/* NOTE: Includes */
#include <avr/io.h>

#include "Debugger.h"

/* NOTE: Custom Macros */
// TODO: None

/* NOTE: Global Variables */
// TODO: None

/* NOTE: Function prototypes */
// inits IO ports
void IO_init(void);

/* NOTE: Application implementation */
// the main loop of the function, provided to us
int main(void)
{
    IO_init();

    initDebug();

    while(1)
    {
    }
}

/* NOTE: Function implementations */
void IO_init(void)
{
    // set port K as all inputs
    DDRK  = 0x00;
    // turn all pullup resisistors
    PORTK = 0xFF;
}