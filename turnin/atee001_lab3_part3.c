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
	if( (PINA & 0x0F) > 0 && (PINA & 0x0F) < 16) PORTC = PORTC | 0x20;
        if( (PINA & 0x0F) > 2 && (PINA & 0x0F) ) PORTC = PORTC | 0x10;
        if( (PINA & 0x0F) > 4 && (PINA & 0x0F) < 16) PORTC = PORTC | 0x08;
        if( (PINA & 0x0F) > 6 && (PINA & 0x0F) < 16) PORTC = PORTC | 0x04;
        if( (PINA & 0x0F) > 9 && (PINA & 0x0F) < 16) PORTC = PORTC | 0x02;
        if( (PINA & 0x0F) > 12 && (PINA & 0x0F) < 16) PORTC = PORTC | 0x01;
        if( (PINA & 0x0F) < 5) PORTC = PORTC | 0x40;
	if(((PINA & 0x20) == 0x20) && ((PINA & 0x10) == 0x10) && (PINA & 0x40) == 0x00) PORTC = PORTC | (0x80);
	}
    
    return 1;
}
