#include "Arduino.h"

#define LIGHT_SENSOR 33

void setup() {
    Serial.begin(115200);
    pinMode(LIGHT_SENSOR, INPUT);
}

void loop() {
    int rawValue = analogRead(LIGHT_SENSOR);
    Serial.print("raw=");
    Serial.println(rawValue);
    delay(500);
}