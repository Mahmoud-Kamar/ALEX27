/*
 * File:   main.c
 * Author: Mahmoud KaMar
 *
 * Created on May 14, 2022, 7:55 PM
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
// hello world
int main(void) {
    /* Replace with your application code */
    //set port as output
    DDRA = 0xFF; //OR 0b11111111;// OR 255
    // Set ALL Pins as HIGH
    PORTA = 0b10101010; 
    int x =0b11111111 ;
    while (1) {
        //if(PORTA == 0)
         //   PORTA = 0x01;
        _delay_ms(250);9
        PORTA = (PORTA ^ x);
    }
}
