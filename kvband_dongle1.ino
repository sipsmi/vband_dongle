#include <HID.h>
#include <Keyboard.h>
#include <KeyboardLayout.h>

// Change these to suit your wiring - I use these as next to 
// Ground to simplify wiring
#define DIH_PIN 3
#define DAH_PIN 2

// Vband seems to work best emulating the [] keys
// Also works with vail online code
#define ditKey '['
#define dahKey ']'

// setup the pins and HID (device)
void setup() {
  pinMode(DIH_PIN, INPUT_PULLUP);
  pinMode(DAH_PIN, INPUT_PULLUP);
  Keyboard.begin(); // initialise HID library
}

// main loop
// keep code in tidy subroutines
void loop() { action_paddle();  } 

// actually do the work
//
// function:   void action_paddle()
//
// read pins and simulate the keypress depending
void action_paddle(){
  while (digitalRead(DIH_PIN) == HIGH && 
	 digitalRead(DAH_PIN) == HIGH){ Keyboard.releaseAll();   }
  if ( digitalRead(DIH_PIN) == LOW){
    Keyboard.press(ditKey);  }
  else{    Keyboard.release(ditKey);   }
  if ( digitalRead(DAH_PIN) == LOW){ Keyboard.press(dahKey); }
  else{ Keyboard.release(dahKey);  }
  // short delay to stop overloading VBand
  //delay(0);
}
// END  //////////////////////////////////////////////////////
