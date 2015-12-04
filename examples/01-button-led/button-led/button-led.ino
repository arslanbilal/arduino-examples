//
//  arduino-examples
//  button-led.ino
//
//  Created by Bilal Arslan on 27/11/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int LED = 12; // led pin address.
const int BUTTON = 3; // button pin address.
int buttonStatus = 0; // hold button state (0/1).

void setup () {
  // run once, when the sketch starts
  pinMode(LED,  OUTPUT);  // setting led pin, output mode.
  pinMode(BUTTON, INPUT); // setting button pin, input mode.
  digitalWrite(LED, buttonStatus); // write low(0) for initial value.
}


void loop () {
  // run over and over again
  buttonStatus = digitalRead(BUTTON); // digitally read value on bitton pin.
  
  if (buttonStatus) {  // if button press high, write high(1).
    digitalWrite(LED, buttonStatus);
  } else {  // otherwise write low(0).
    digitalWrite(LED, buttonStatus);
  }
}

