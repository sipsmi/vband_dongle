# vband_dongle

This uses an arduino device as a keyboard emulator.  Owing to the types of USB interfaces 
only the 32u4 and SAMD based boards (Leonardo, Esplora, Zero, Due and MKR Family) will work 
as a native Mouse and/or Keyboard to a connected compute

Connect a lead to you paddle with the following:

```
Paddle        Arduino
---------------------------
Ground        Ground Pin
Dit           Pin 2
Dah           Pin 3
```

Note the pins can be configured in the code.
It the DIT and DAH are the wrong way around - change the connection or change the code.
