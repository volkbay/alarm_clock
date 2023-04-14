# alarm_clock
This is a hobby project to be embedded in a microcontroller, a simple alarm clock which can play different tunes and configured with an LCD screen and buttons. The code is in plain C language, depending on the [AVR Library](https://www.nongnu.org/avr-libc/).

## Components
The following components are the basic kinds, so I did not specify any model/brand:

- An ATMega8 Microcontroller (or anything compatible, ATTinys would do)
- An MCU programmer (in my case USBAspv2)
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
- An NPN transistor (2N2222 etc.)
- 2 potentiometers [optional]

![image](/avm/sch.png)
_Fig. 1 : Circuit connections on prototype board_

## A Most Professional Demo (sound on 🔊)
Here are some tunes of the alarm clock, they are irritating enough to wake you up in the morning 🌞. Two potentiometers you'll see below are for adjusting LCD brightness and backlight, you may include them as you like (not shown in the schematic).

https://user-images.githubusercontent.com/97564250/232099760-1767747e-bf44-44eb-8795-3cf1ccb2b566.mp4

_Fig. 2 : Demonstration (Super Mario Theme)_

https://user-images.githubusercontent.com/97564250/232099846-51ae1c34-53d4-44f3-82bb-2bbe998b39a7.mp4

_Fig. 3 : Demonstration (Star Wars Theme)_

> **Note**
> I am aware some notes are a little of due to non-ideality of the MCU and components. They probably need some fine-tuning in `notes.h`, but I love them *flawed* like this.

> If you like this project [buy me a coffee :coffee:](https://www.buymeacoffee.com/volkbay).
