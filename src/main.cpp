
#ifndef UNIT_TEST
#ifdef ARDUINO
#include <Arduino.h>

#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

#include <Servo.h>
Servo myServo;


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "ORANGE_3";
char pass[] = "RNJPDJUT";

BLYNK_WRITE(V3) {

  int pinValue = param.asInt();  // assigning incoming value from pin V1 to a variable
  myServo.write(pinValue);
  // process received value
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  myServo.attach(D5);
  Blynk.begin(auth, ssid, pass);
  myServo.write(0);
}

void loop() {
  Blynk.run();
}

#endif  //ARDUINO
#endif  //UNIT_TEST
