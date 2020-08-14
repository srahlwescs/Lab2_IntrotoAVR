/*	Author: srahl001
 *  Partner(s) Name: ShawnRahlwes
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
	PORTA = 0x02;
	PORTB = 0x02;
    /* Insert your solution below */
    while (1) {
	if (PA0 = 1 & PA1 = 0){
	PB0 = 1;
	}
	if (PA1 = 1 & PA0 = 0){
	PB0 = 0;
	}
	if (PA1 = 1 & PB0 = 1){
	PB0 = 0;
	}
    }
    return 1;
}
