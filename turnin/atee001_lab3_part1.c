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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;

    unsigned char count = 0x00;
    unsigned char temp = 0x00;

    while (1) {

	temp = PINA;

	while(temp){

		if(temp%2) count++;
		temp /= 2;		

	}

	temp = PINB;	
	while(temp){
		if(temp%2) count++;
		temp /= 2;
	}

	PORTC = count;
	count = 0;	
    }
    return 1;
}
