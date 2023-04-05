#include <HID.h>
#include <Keyboard.h>
#include <KeyboardLayout.h>

// Change these to suit your wiring
#define DIH_PIN 3
#define DAH_PIN 2

// VBANd seems to work best emulating the [] keys
#define ditKey '['
#define dahKey ']'

// setup the pins
void setup() {

  pinMode(DIH_PIN, INPUT_PULLUP);
  pinMode(DAH_PIN, INPUT_PULLUP);
  Keyboard.begin(); // initialise HID library
}

// main loop
void loop() { action_paddle();  } 

// actually do the work
void action_paddle(){
  while (digitalRead(DIH_PIN) == HIGH && 
	 digitalRead(DAH_PIN) == HIGH){ Keyboard.releaseAll();   }
  if ( digitalRead(DIH_PIN) == LOW){
    Keyboard.press(ditKey);  }
  else{    Keyboard.release(ditKey);   }
  if ( digitalRead(DAH_PIN) == LOW){ Keyboard.press(dahKey); }
  else{ Keyboard.release(dahKey);  }
  // short delay to stop overloading VBand
  delay(5);
}

// END  //////////////////////////////////////////////////////

