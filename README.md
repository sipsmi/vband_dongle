# vband_dongle

This uses an arduino device as a keyboard emulator.  Owing to the types of USB interfaces 
only the 32u4 and SAMD based boards (Leonardo, Esplora, Zero, Due and MKR Family) will work 
as a native Mouse and/or Keyboard to a connected computer.

## Step 1
Compile the code in Arduino IDE and upload to your arduino
*note*:  The code must sit in the same named folder ( change the folder name after download
or move to sketchbook in a new folder.
*note2* you may need to download library Tools->Manage Libraries...
then search and add "Keyboard.h" ( HID required too but may be included anyway ).

## Step 2

Connect a lead to your paddle with the following:

```
Paddle        Arduino
---------------------------
Ground        Ground Pin
Dit           Pin 2
Dah           Pin 3
```

## Step 3
Then connect the arduino device to your computer USB port.  Most computers will recognise it as a HID/Keyboard device.

## Notes
Note the pins can be configured in the code.
It the DIT and DAH are the wrong way around - change the connection or change the code.

![alt text](https://github.com/sipsmi/vband_dongle/blob/main/vband.jpg?raw=true)
