/*
 * Button test over Serial
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */

void setup() {
  pinMode(6, INPUT); 
  pinMode(7, INPUT); 
  pinMode(8, INPUT); 
  pinMode(9, INPUT); 
  Serial.begin(9600);
}

void loop(){
  if (digitalRead(6) == HIGH) {
    Serial.print("6 ");
  } 
  else {
    Serial.print("0 ");
  }
  if (digitalRead(7) == HIGH) {
    Serial.print("7 ");
  } 
  else {
    Serial.print("0 ");
  }
    if (digitalRead(8) == HIGH) {
    Serial.print("8 ");
  } 
  else {
    Serial.print("0 ");
  }
    if (digitalRead(9) == HIGH) {
    Serial.print("9 ");
  } 
  else {
    Serial.print("0 ");
  }
  Serial.println(" ");
}
