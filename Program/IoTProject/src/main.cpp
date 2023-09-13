#include <Arduino.h>

const int ledPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);// menyalakan
  delay(1000); // 1000 milidetik = 1 detik
  digitalWrite(ledPin, LOW); // mematikan
  delay(1000);
}