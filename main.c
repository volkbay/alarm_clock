#include <avr/io.h>
#include <avr/interrupt.h>
#include "lcd-lib/aux_globals.h"
#include "notes.h"

int sec;
int mnt;
int hour;

int asec;
int amnt;
int ahour;

float half_pulse;
uint32_t cycles_buff;

void update_time()
{
	if (sec == 59)
	{
		if (mnt == 59)
		{
			if (hour == 23)
			{
				hour = 0;
			}
			else
			{
				hour++;
			}
			mnt = 0;
		}
		else
		{
			mnt++;
		}
		sec = 0;
	}
	else
	{
		sec++;
	}
}

void update_atime()
{
	if (asec == 59)
	{
		if (amnt == 59)
		{
			if (ahour == 23)
			{
				ahour = 0;
			}
			else
			{
				ahour++;
			}
			amnt = 0;
		}
		else
		{
			amnt++;
		}
		asec = 0;
	}
	else
	{
		asec++;
	}
}

void play_tone(float freq, float duration)
{
	half_pulse = 500.0/freq;
	half_pulse *= 1000.0;
	float cycles_fp = duration/1000.0;
	cycles_fp *= freq;
	int cycles = (int) cycles_fp;
	cycles_buff = cycles;
	
	while(cycles > 0)
	{
		PORTB |= (1<<PB1);
		delay_us(half_pulse);
		PORTB &= ~(1<<PB1);
		delay_us(half_pulse);
		cycles--;
	} 
}

void play_star_wars()
{  
	play_tone(note_A3,Q);
	delay_us(1000);
	play_tone(note_A3,Q);
	delay_us(1000);
	play_tone(note_A3,Q);
	delay_us(1000);
	play_tone(note_F3,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_A3,Q);
	delay_us(1000);
	play_tone(note_F3,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_A3,H);
	delay_us(1000);

	play_tone(note_E4,Q);
	delay_us(1000);
	play_tone(note_E4,Q);
	delay_us(1000);
	play_tone(note_E4,Q);
	delay_us(1000);
	play_tone(note_F4,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_Ab3,Q);
	delay_us(1000);
	play_tone(note_F3,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_A3,H);
	delay_us(1000);

	play_tone(note_A4,Q);
	delay_us(1000);
	play_tone(note_A3,E+S);
	delay_us(1000);
	play_tone(note_A3,S);
	delay_us(1000);
	play_tone(note_A4,Q);
	delay_us(1000);
	play_tone(note_Ab4,E+S);
	delay_us(1000);
	play_tone(note_G4,S);
	delay_us(1000);
	play_tone(note_Gb4,S);
	delay_us(1000);
	play_tone(note_E4,S);
	delay_us(1000);
	play_tone(note_Gb4,E);
	delay_us(1000);
	delay_us(1000*E);

	play_tone(note_Bb3,E);
	delay_us(1000);
	play_tone(note_Eb4,Q);
	delay_us(1000);
	play_tone(note_D4,E+S);
	delay_us(1000);
	play_tone(note_Db4,S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_B3,S);
	delay_us(1000);
	play_tone(note_C4,E);
	delay_us(1000);
	delay_us(1000*E);

	play_tone(note_F3,E);
	delay_us(1000);
	play_tone(note_Ab3,Q);
	delay_us(1000);
	play_tone(note_F3,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_A3,Q);
	delay_us(1000);
	play_tone(note_F3,E+S);
	delay_us(1000);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_A3,H);
	delay_us(1000);
}

void play_super_mario()
{
	play_tone(note_E4,S);
	delay_us(1000);
	play_tone(note_E4,S);
	delay_us(1000*S);
	play_tone(note_E4,S);
	delay_us(1000*S);
	play_tone(note_C4,S);
	delay_us(1000);
	play_tone(note_E4,S);
	delay_us(1000*S);
	play_tone(note_G4,S);
	delay_us(1000*(E+S));
	play_tone(note_G3,S);
	delay_us(1000*(E+S));

	play_tone(note_C4,S);
	delay_us(1000*E);
	play_tone(note_G3,S);
	delay_us(1000*E);
	play_tone(note_E3,S);
	delay_us(1000*E);
	play_tone(note_A3,S);
	delay_us(1000*S);
	play_tone(note_B3,S);
	delay_us(1000*S);
	play_tone(note_Bb3,S);
	delay_us(1000);
	play_tone(note_A3,S);
	delay_us(1000*S);

	play_tone(note_G3,S);
	delay_us(1000);
	play_tone(note_E4+10,S);
	delay_us(1000*S);
	play_tone(note_F4+20,S);
	delay_us(1000);
	play_tone(note_G4+30,S);
	delay_us(1000*S);
	play_tone(note_G4+30,S);
	delay_us(1000);
	play_tone(note_A4+30,S);
	delay_us(1000*S);
	play_tone(note_F4+20,S);
	delay_us(1000*S);
	play_tone(note_D4+10,S);
	delay_us(1000);
	play_tone(note_E4+10,S);
	delay_us(1000);
	play_tone(note_C4,E);
	delay_us(1000*S);




}

void play_super_mario2()
{
	play_tone(note_G3,S);
	delay_us(1000);
	play_tone(note_E4+10,S);
	delay_us(1000*S);
	play_tone(note_F4+20,S);
	delay_us(1000);
	play_tone(note_G4+30,S);
	delay_us(1000*S);
	play_tone(note_G4+30,S);
	delay_us(1000);
	play_tone(note_A4+30,S);
	delay_us(1000*S);
	play_tone(note_F4+20,S);
	delay_us(1000*S);
	play_tone(note_D4+10,S);
	delay_us(1000);
	play_tone(note_E4+10,S);
	delay_us(1000);
	play_tone(note_C4,E);
	delay_us(1000*S);

}

void play_octave()
{
	play_tone(note_A3,1000);
	delay_us(500000);
	play_tone(note_E4,1000);
	delay_us(500000);
	play_tone(note_C7,1000);
	delay_us(500000);
	play_tone(note_D7,1000);
	delay_us(500000);
	play_tone(note_E7,1000);
	delay_us(500000);
	play_tone(note_F7,1000);
	delay_us(500000);
	play_tone(note_G7,1000);
}

ISR(TIMER1_COMPA_vect)		//Interrupt Service Routine
{
	update_time();	
}

int main(void)
{	
	sec = 0;
	mnt = 0;
	hour = 0;
	asec = 0;
	amnt = 0;
	ahour = 0;
	// int dummy = 0;
	int pushed = 0x00;
	int mode = 0x00;
	int alarm_on = 0x00;

	lcd_init();								// init the LCD screen
	lcd_clrscr();							// initial screen cleanup
	lcd_home();

	//Setup the clock
	cli();			//Disable global interrupts
	TCCR1B |= 1<<CS11 | 1<<CS10;	//Divide by 64
	OCR1A = 15624;		//Count 15624 cycles for 1 second interrupt
	TCCR1B |= 1<<WGM12;		//Put Timer/Counter1 in CTC mode
	TIMSK |= 1<<OCIE1A;		//enable timer compare interrupt
	sei();			//Enable global interrupts

	DDRB = 0x02; // B(0,2-7) = IN, B(1) = OUT
	DDRD = 0x00; // PORTD = IN
	PORTB = 0x00;

    while(1)
    {
		lcd_home();
		char szDisp[255] = {0};

		switch (mode) {
		case 0: // Saat modu
				sprintf(szDisp,"Saat:           \n   [%02d:%02d:%02d]   .",hour,mnt,sec);
				if (bit_is_clear(PIND,PD5))
				{
					if (bit_is_clear(pushed,3))
					{update_time();}
					pushed |= (1<<3);
				}
				else
				{
					pushed &= ~(1<<3);
				}
				if (bit_is_clear(PIND,PD6))
				{
					if (bit_is_clear(pushed,2))
					{if (mnt == 59)
						{
							if (hour == 23)
							{
								hour = 0;
							}
							else
							{
								hour++;
							}
							mnt = 0;
						}
						else
						{
							mnt++;
						}
				}
					pushed |= (1<<2);
				}
				else
				{
					pushed &= ~(1<<2);
				}
				if (bit_is_clear(PIND,PD7))
				{
					if (bit_is_clear(pushed,1))
					{if (hour == 23)
						{
							hour = 0;
						}
						else
						{
							hour++;
						}}
					pushed |= (1<<1);
				}
				else
				{
					pushed &= ~(1<<1);
				}
				break;
		case 1: // Alarm modu
				sprintf(szDisp,"Alarm:          \n   [%02d:%02d:%02d]   .",ahour,amnt,asec);
				if (bit_is_clear(PIND,PD5))
				{
					if (bit_is_clear(pushed,3))
					{update_atime();}
					pushed |= (1<<3);
				}
				else
				{
					pushed &= ~(1<<3);
				}
				if (bit_is_clear(PIND,PD6))
				{
					if (bit_is_clear(pushed,2))
					{if (amnt == 59)
						{
							if (ahour == 23)
							{
								ahour = 0;
							}
							else
							{
								ahour++;
							}
							amnt = 0;
						}
						else
						{
							amnt++;
						}
					}
					pushed |= (1<<2);
				}
				else
				{
					pushed &= ~(1<<2);
				}
				if (bit_is_clear(PIND,PD7))
				{
					if (bit_is_clear(pushed,1))
					{if (ahour == 23)
						{
							ahour = 0;
						}
						else
						{
							ahour++;
						}}
						pushed |= (1<<1);
					}
					else
					{
						pushed &= ~(1<<1);
					}
					break;
		case 2: // Ayar modu
				if (alarm_on == 0)
				{
					sprintf(szDisp,"Ayarlar:        \n [Alarm: KAPALI]  ");
				}
				else
				{
					sprintf(szDisp,"Ayarlar:        \n [Alarm: ACIK  ]  ");
				}
				
				if (bit_is_clear(PIND,PD5))
				{
					if (bit_is_clear(pushed,3))
					{alarm_on ^= (1<<0);}
					pushed |= (1<<3);
				}
				else
				{
					pushed &= ~(1<<3);
				}
				break;
		case 3: // Debug modu
				sprintf(szDisp,"DEBUG MODE      \n C:%lu HP:%lu              .",(unsigned long) cycles_buff,(unsigned long)half_pulse);

				if (bit_is_clear(PIND,PD5))
				{
					if (bit_is_clear(pushed,3))
					{play_super_mario2();}
					pushed |= (1<<3);
				}
				else
				{
					pushed &= ~(1<<3);
				}

				if (bit_is_clear(PIND,PD6))
				{
					if (bit_is_clear(pushed,2))
					{play_super_mario();}
					pushed |= (1<<2);
				}
				else
				{
					pushed &= ~(1<<2);
				}

				if (bit_is_clear(PIND,PD7))
				{
					if (bit_is_clear(pushed,1))
					{play_star_wars();}
					pushed |= (1<<1);
				}
				else
				{
					pushed &= ~(1<<1);
				}
				break;
		default:
				break;
		}
		
		lcd_string(szDisp);
		
		if (bit_is_clear(PINB,PB0))
		{
			if (bit_is_clear(pushed,0))
			{mode++;
			 mode %= 4; }
			pushed |= (1<<0);
		}
		else
		{
			pushed &= ~(1<<0);
		}

		if ((asec == sec) & (amnt == mnt) & (ahour == hour) & (alarm_on == 1))
		{
			//PORTB |= 1<<PB1;
			play_super_mario();
		}
		// sprintf(szDisp,"abcdefgh?ijklmno\nöprs?tuvyz123456");
		//lcd_string(szDisp);
    }
}