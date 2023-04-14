# alarm_clock
This is a code to be embedded in a microchip, simple alarm clock which can play different tunes with an LCD screen and buttons.

## Components
The following components are the basic kinds, so I did not specify any model/brand:

- An ATMega8 Microcontroller (or anything compatible, ATTinys would do)
- 3v DC Power
- A Buzzer
- An LED
- 2 line simple LCD screen
- Resistors:
  - 5 x 10k ohm (buttons)
  - 1 x 1k ohm (LED)
  - 1 x less than 1k ohm (transistor to mcu)
- 5 x 1 nF Capacitors (debouncing)
- 4 x push buttons and 1 x on-off switch
- A NPN transistor (2N2222 etc.)

![image](https://user-images.githubusercontent.com/97564250/232081883-35c53e7e-2a17-4f4c-866e-cbe1fd73e57c.png)
_Fig. 1 : Circuit connections on prototype board_

## A Most Professional Demo
Two potentiometers are for LCD brightness and backlight, you may include them as you like (not in the schematic).

> **Note**
> I am aware some notes are a little of due to non-ideality of the MCU and components. They probably need some fine-tuning in `notes.h`, but I love them flawed like this.