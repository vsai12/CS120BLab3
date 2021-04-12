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
	DDRD = 0x00; PORTD = 0xFF; //configure portD as inputs
	DDRB = 0xFE; PORTB = 0x01; //configure portB as outputs except Bit 0
    /* Insert your solution below */
    while (1) {
	unsigned char tmpD = PIND;
	unsigned char tmpB = PINB & 0x01;
	if((tmpD & 0x80) == 0x80)
		tmpB = 0x02;
	else {
		tmpD = tmpD << 1;
		tmpD = tmpD | tmpB;
		if(tmpD >= 0x46) {
			tmpB = 0x02;
		}
		else if(tmpD > 0x05) {
			tmpB = 0x04;
		}
	}
	PORTB = tmpB;
    }
    return 1;
}
