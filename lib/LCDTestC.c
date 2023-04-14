/*
 * LCDTestC.c
 *
 * Created: 1/14/2012 6:16:49 PM
 *  Author: Radu Motisan , radu.motisan@gmail.com , 
 * (C) 2012 , All rights reserved.
 */ 

#include <avr/io.h>

#include "aux_globals.h"


int lcd_test_main(void)
{
	lcd_init();								// init the LCD screen
	lcd_clrscr();							// initial screen cleanup
	lcd_home();

	int i=0;
    while(1)
    {
		i++;
		//LCD screen
		lcd_home();
		
		char szDisp[255] = {0};
		sprintf(szDisp,"[%d]\n", i);
		//lcd_string2(szDisp);
		lcd_string(szDisp);
		delay_us(1000000);
    }
}