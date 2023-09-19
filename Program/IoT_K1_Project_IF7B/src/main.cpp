#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);// menyalakan
  delay(1000); // 1000 milidetik = 1 detik
  digitalWrite(2, LOW); // mematikan
  delay(1000);
}