/*
 * Metro - Turn on all LEDs
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */
#include <Wire.h>

void setup() {
  Wire.begin();
}

void loop() {
  /*
   * Note:
   * 0: enabled
   * 1: disabled
   */
  Wire.beginTransmission(B0100000); // PCF8574P GGG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0100100); // PCF8574P GGS
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0100010); // PCF8574P GSG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0100110); // PCF8574P GSS
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0100001); // PCF8574P SGG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0100101); // PCF8574P SGS
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0111000); // PCF8574AP GGG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0111100); // PCF8574AP GGS
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0111010); // PCF8574AP GSG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0111110); // PCF8574AP GSS
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);

  Wire.beginTransmission(B0111001); // PCF8574AP SGG
  Wire.write(B00000000);
  Wire.endTransmission();
  //delay(100);
}
