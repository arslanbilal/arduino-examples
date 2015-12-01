//
//  arduino-examples
//  button-buzzer.ino
//
//  Created by Bilal Arslan on 1/12/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int BUZZER = 12; // buzzer pin address.
const int BUTTON = 10; // button pin address.
int buttonStatus = 0; // hold button state (0/1).

void setup () {
  pinMode(BUZZER,  OUTPUT); // setting buzzer pin, output mode.
  pinMode(BUTTON, INPUT); // setting button pin, input mode.
  digitalWrite(BUTTON, buttonStatus); // write low(0) for initial value.
}

void loop () {
  buttonStatus = digitalRead(BUTTON); // digitally read value on bitton pin.
  
  if (buttonStatus) {  // if button press high, write high(1).
    digitalWrite(BUZZER, buttonStatus);
  } else {  // otherwise write low(0).
    digitalWrite(BUZZER, buttonStatus);
  }
}
