/*
 * Test buttons on LCD screen
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(6, INPUT); 
  pinMode(7, INPUT); 
  pinMode(8, INPUT); 
  pinMode(9, INPUT); 
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Test boutons");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis()/1000);
  if (digitalRead(6) == HIGH) {
    lcd.print("6");
  } 
  else {
    lcd.print("0");
  }
  
  lcd.setCursor(2, 1);
  if (digitalRead(7) == HIGH) {
    lcd.print("7");
  } 
  else {
    lcd.print("0");
  }
  
  lcd.setCursor(4, 1);
    if (digitalRead(8) == HIGH) {
    lcd.print("8");
  } 
  else {
    lcd.print("0");
  }
  
  lcd.setCursor(6, 1);
    if (digitalRead(9) == HIGH) {
    lcd.print("9");
  } 
  else {
    lcd.print("0");
  }
}
