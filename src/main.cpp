#include <Arduino.h>
#include <M5Atom.h>
#include "rc.hpp"
#include <stdint.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  rc_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("Y=%f X=%f\r\n", Stick[THROTTLE], Stick[RUDDER]);
}