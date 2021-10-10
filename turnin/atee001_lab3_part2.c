/*	Author: atee001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab # 3  Exercise # 1
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

    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
    while(1){

	PORTC = 0;
	if(PINA > 0 && PINA < 16) PORTC = PORTC | 0x20;
        if(PINA > 2 && PINA < 16) PORTC = PORTC | 0x10;
        if(PINA > 4 && PINA < 16) PORTC = PORTC | 0x08;
        if(PINA > 6 && PINA < 16) PORTC = PORTC | 0x04;
        if(PINA > 9 && PINA < 16) PORTC = PORTC | 0x02;
        if(PINA > 12 && PINA < 16) PORTC = PORTC | 0x01;
        if(PINA < 5) PORTC = PORTC | 0x40;
	}
    
    return 1;
}
