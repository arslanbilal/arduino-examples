//
//  arduino-examples
//  serial-monitor.ino
//
//  Created by Bilal Arslan on 04/12/15.
//  Copyright (c) 2015 Bilal Arslan. All rights reserved.
//


const int variable = 10; // for printing in serial monitor

void setup () {
  // run once, when the sketch starts
  Serial.begin(9600); // seting up serial library at 9600 bps
  
  Serial.print("The value is "); // prints "The value is "
  Serial.println(variable); // prints variable value with ending line break 
}

void loop () {
  // run over and over again
  Serial.println("This text is in the loop func."); // prints "This text is in the loop func."
  delay(500); // delayed 500 ms
}

