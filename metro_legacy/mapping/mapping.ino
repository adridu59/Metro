/*
 * I2C Mapping - turn on LEDs sequentially
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */
#include <Wire.h>

void setup() {
//  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  byte a;
  byte buf1, buf2;
  for (int i=1; i<12; i++){
    buf1 = 1;
    buf2 = 0;
    for (int j=0; j<9; j++) {
      if (j == 8) {
        buf1 = 0; // Shut down the last LED
      }
//      Serial.print(buf1, BIN);
//      Serial.println(" ");
      buf2 = ~buf1;
//      Serial.print(buf2, BIN);
//      Serial.println(" ");
//      while (Serial.available() == 0){};
//      Serial.read();
      switch (i) {
      case 1:
        Wire.beginTransmission(B0100000); // PCF8574 GGG
        break;
      case 2:
        Wire.beginTransmission(B0100100); // PCF8574P GGS
        break;
      case 3:
        Wire.beginTransmission(B0100010); // PCF8574P GSG
        break;
      case 4:
        Wire.beginTransmission(B0100110); // PCF8574P GSS
        break;
      case 5:
        Wire.beginTransmission(B0100001); // PCF8574P SGG
        break;
      case 6:
        Wire.beginTransmission(B0100101); // PCF8574P SGS
        break;
      case 7:
        Wire.beginTransmission(B0111000); // PCF8574AP GGG
        break;
      case 8:
        Wire.beginTransmission(B0111100); // PCF8574AP GGS
        break;
      case 9:
        Wire.beginTransmission(B0111010); // PCF8574AP GSG
        break;
      case 10:
        Wire.beginTransmission(B0111110); // PCF8574AP GSS
        break;
      case 11:
        Wire.beginTransmission(B0111001); // PCF8574AP SGG
        break;
      default:
//        continue;
        break;
      }
      Wire.write(buf2);
      Wire.endTransmission();
      buf1 = 2*buf1;
      delay(200);
    }
  }
}

