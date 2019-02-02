#include <Servo.h>

Servo blinds;
Servo angle;

const int blind_pin = 8;
const int angle_pin = 9;
const int led = 11;

void setup() {
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  blinds.attach(blind_pin);  
  blinds.write(0);
  delay(10000);
  blinds.detach();
//  angle.attach(angle_pin);
}

void loop() {
}
