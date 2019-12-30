
#ifndef UNIT_TEST
#ifdef ARDUINO
#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

#endif  //ARDUINO
#endif  //UNIT_TEST
