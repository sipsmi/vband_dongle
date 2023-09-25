# vband_dongle

This uses an arduino device as a keyboard emulator.  Owing to the types of USB interfaces 
only the 32u4 and SAMD based boards (Leonardo, Esplora, Zero, Due and MKR Family) will work 
as a native Mouse and/or Keyboard to a connected computer.

This is reported to work well on Vail as well as VBand

## Step 1
Compile the code in Arduino IDE and upload to your arduino

*note*:  The code must sit in the same named folder ( change the folder name after download
or move to sketchbook in a new folder.
(version 2+ of Arduino does not seem to care so much )

*note2* you may need to download library Tools->Manage Libraries...
then search and add "Keyboard.h" ( HID required too but may be included anyway ).

*note3* Make sure you set the board to a 32u4 or SAMD based board otherwise the compile will 
fail since the Keyboard object will not be defined ( not supported by the board).

*note4* Make sure you also set the board to 3V/5V 8MHZ/16MHz as required.  I managed to brick
my Arduino Pro Micro by having the wrong type.  I did however manage to resurrect the device
by re-installing the bootloader using a Nano as ISP.  See here for how to do this: https://www.instructables.com/Burn-Bootloader-Arduino-Nano-As-ISP-to-Pro-Micro/ Note that there 
is an easier way to do this by hitting reset twice quickly ( need to use shorting wire on mini as no reset button ) and you have 8 seconds to load your software correctly.  As my Arduino does not 
do this fast enough ( compile/upload ) I ended up selecting upload and waiting to double-reset just before the IDE started the upload ( takes a bit of timing ).

## Step 2

Connect a lead to your paddle with the following:

```
Paddle        Arduino
---------------------------
Ground        Ground Pin
Dit           Pin 2
Dah           Pin 3
```
I use PIN 2,3 here as they are next to ground PIN on some boards so makes for easy wiring.

## Step 3
Then connect the arduino device to your computer USB port.  Most computers will recognise it as a HID/Keyboard device.

## Notes
Note the pins can be configured in the code.
It the DIT and DAH are the wrong way around - change the connection or change the code.

![alt text](https://github.com/sipsmi/vband_dongle/blob/main/vband.jpg?raw=true)

The new Version I take portable with laptop and mini-key....   The glue is just used to take strain on connectors.

![alt text](https://github.com/sipsmi/vband_dongle/blob/main/interface%202.png?raw=true)
