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
	DDRB = 0x00; PORTB = 0xFF; //configure portB as inputs
	DDRC = 0xFF; PORTC = 0x00; //configure portC as outputs
    /* Insert your solution below */
    while (1) {
	unsigned char total = 0x00;  //varaible to hold total # of 1's
	if((PINA & 0x80) == 0x80) 
		total++;
	if((PINA & 0x40) == 0x40)
                total++;
	if((PINA & 0x20) == 0x20)
                total++;
	if((PINA & 0x10) == 0x10)
                total++;
	if((PINA & 0x08) == 0x08)
                total++;
        if((PINA & 0x04) == 0x04)
                total++;
        if((PINA & 0x02) == 0x02)
                total++;
        if((PINA & 0x01) == 0x01)
                total++;
	if((PINB & 0x80) == 0x80)
                total++;
        if((PINB & 0x40) == 0x40)
                total++;
        if((PINB & 0x20) == 0x20)
                total++;
        if((PINB & 0x10) == 0x10)
                total++;
        if((PINB & 0x08) == 0x08)
                total++;
        if((PINB & 0x04) == 0x04)
                total++;
        if((PINB & 0x02) == 0x02)
                total++;
        if((PINB & 0x01) == 0x01)
                total++;
    	PORTC = total;
    }
    return 1;
}
