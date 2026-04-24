#include "Arduino.h"

#define BUTTON 25
#define LIGHT_SENSOR 33
#define YELLOW_LED 12

void setup() {
    Serial.begin(115200);
    pinMode(BUTTON, INPUT_PULLDOWN);
    pinMode(YELLOW_LED, OUTPUT);
    digitalWrite(YELLOW_LED, LOW);
}

void loop() {
    if (digitalRead(BUTTON)) {
        // Read light sensor once
        int lightValue = analogRead(LIGHT_SENSOR);
        Serial.print("snapshot=");
        Serial.println(lightValue);
        
        // Flash yellow LED for 100ms
        digitalWrite(YELLOW_LED, HIGH);
        delay(100);
        digitalWrite(YELLOW_LED, LOW);
        
        // Wait for button release (debounce)
        while(digitalRead(BUTTON));
        delay(50); // Extra debounce after release
    }
}