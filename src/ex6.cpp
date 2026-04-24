#include "Arduino.h"

#define BLUE_LED 14

void setup() {
    Serial.begin(115200);
    pinMode(BLUE_LED, OUTPUT);
    digitalWrite(BLUE_LED, LOW);
}

void loop() {
    if (Serial.available() > 0) {
        char command = Serial.read();
        
        if (command == 'B') {
            digitalWrite(BLUE_LED, HIGH);
            Serial.println("BLUE=1");
        }
        else if (command == 'b') {
            digitalWrite(BLUE_LED, LOW);
            Serial.println("BLUE=0");
        }
    }
}