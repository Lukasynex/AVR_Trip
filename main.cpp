/*
 * main.cpp
 *
 *  Created on: 16 lut 2015
 *      Author: lukasz
 */




#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "HD44780.h"

//TODO:
	//make class to draw tiles for animation

int main(void) {



	unsigned char dictionary[][8] = {
		{0, 0, 0, 0, 0, 0, 14, 17, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 14, 17, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 12, 12, 0, 0, 0, 0, 0, },

		{4, 4, 4, 2, 4, 0, 12, 18, },

		{0, 12, 12, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		{0, 0, 0, 0, 0, 0, 0, 0, },

		};
	HD44780 a;
	a.Initalize();
	a.Clear();
	a.BuildFont(0,dictionary[0]);
	a.BuildFont(1,dictionary[2]);
	a.BuildFont(2,dictionary[16]);
	a.BuildFont(3,dictionary[17]);
	a.BuildFont(4,dictionary[18]);

	a.GoTo(0,0);
	a.DrawCustomFont(0);
	a.GoTo(2,0);
	a.DrawCustomFont(1);
	a.GoTo(0,1);
	a.DrawCustomFont(2);
	a.DrawCustomFont(3);
	a.DrawCustomFont(4);




	//a.WriteText("Dzien dobry!");




//    DDRB |= 1<<PB5; /* set PB0 to output */
    while(1) {

//    	PORTB &= ~(1<<PB5); /* LED on */
//        _delay_ms(500);
//
//        PORTB |= 1<<PB5; /* LED off */
//        _delay_ms(500);

    }
    return 0;
}
