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

    unsigned char countA = 0x00;
    unsigned char countB = 0x00;
    unsigned char temp = 0x00;

    while (1) {
	
	temp = PINA;
	while(temp%2){
		countA++;
		temp /= 2;
	}

	temp = PINB;
	while(temp%2){
		countB++;
		temp/=2;
	}
	
	PORTC = countA + countB;
	
    }
    return 1;
}
