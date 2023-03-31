#include <HID.h>
#include <Keyboard.h>
#include <KeyboardLayout.h>


#define DIH_PIN 3
#define DAH_PIN 2
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

void action _paddle(){
  while (digitalRead(DIH_PIN) == HIGH && 
	 digitalRead(DAH_PIN) == HIGH){
    Keyboard.releaseAll();
  }
  if ( digitalRead(DIH_PIN) == LOW){
    Keyboard.press(ditKey);
  }
  else{
    Keyboard.release(ditKey); 
  }
  if ( digitalRead(DAH_PIN) == LOW){
    Keyboard.press(dahKey);
  }
  else{
    Keyboard.release(dahKey); 
  }

  delay(5);
}

