//
//  arduino-examples
//  potentiometer.ino
//
//  Created by Bilal Arslan on 04/12/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int POTENTIOMETER = A0;

void setup () {
  // run once, when the sketch starts
  pinMode(POTENTIOMETER, INPUT); // potentiometer's pin. Analog and input.
 
  Serial.begin(9600); // seting up serial library at 9600 bps
  Serial.println("Value of potentiometer is: ");
}

void loop () {
  // run over and over again
  Serial.print("Value: ");
  Serial.println(analogRead(POTENTIOMETER)); // analog reading of potentiometer's value
  
  delay(200); // delayed 200 ms
}

