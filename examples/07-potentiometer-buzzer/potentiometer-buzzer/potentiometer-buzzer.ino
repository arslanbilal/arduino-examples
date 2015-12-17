//
//  arduino-examples
//  potentiometer-buzzer.ino
//
//  Created by Bilal Arslan on 18/12/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int POTENTIOMETER = A0;
const int BUZZER = 3;

int valueOfPotentiometer = 0;

void setup () {
  // runs once, when the sketch starts
  pinMode(POTENTIOMETER, INPUT); // potentiometer's pin. Analog and input.
  pinMode(BUZZER, OUTPUT); // buzzer's pin. output mode.
}

void loop () {
  // runs over and over again
  valueOfPotentiometer = analogRead(POTENTIOMETER); // getting value of potentiometer.
  // potentiometer value is between 0-1023. We need values between 0-255 and map function makes limitation
  valueOfPotentiometer =  map(valueOfPotentiometer, 0, 1023, 0, 255);
  analogWrite(BUZZER,valueOfPotentiometer);  // write analog value to buzzer
  delay(25);  // delaying 25ms
}

