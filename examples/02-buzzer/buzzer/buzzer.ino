//
//  arduino-examples
//  buzzer.ino
//
//  Created by Bilal Arslan on 30/11/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int BUZZER = 12; // buzzer pin address.

void setup () {
  // run once, when the sketch starts
  pinMode(BUZZER,  OUTPUT); // setting buzzer pin, output mode.
  digitalWrite(BUZZER, HIGH); // write high(1) for initial value.
}

void loop () {
  // run over and over again
}

