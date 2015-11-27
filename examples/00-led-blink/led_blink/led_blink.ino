//
//  arduino-examples
//  led-blink.ino
//
//  Created by Bilal Arslan on 27/11/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int LED = 12; // led pin address.

void setup () {
  pinMode(LED,  OUTPUT); // setting led pin, output mode.
  digitalWrite(LED, HIGH); // write high(1) for initial value.
}


void loop () {
  digitalWrite(LED, HIGH); // writing high(1)
  delay(1000);  // delay 1 sec.
  digitalWrite(LED, LOW); // writing low(0)
  delay(1000);  // delay 1 sec.
}
