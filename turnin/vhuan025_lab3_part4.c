/*	Author: vhuan025
 *  Partner(s) Name: 
 *	Lab Section: 023
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; //configure portA as inputs
	DDRB = 0xFF; PORTB = 0x00; //configure portB as outputs
    /* Insert your solution below */
    while (1) {
        unsigned char tmpALower = PINA << 4;
	unsigned char tmpAUpper = PINA >> 4;
	PORTB = tmpALower | tmpAUpper;
    }
    return 1;
}
