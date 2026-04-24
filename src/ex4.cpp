#include "Arduino.h"

#define LIGHT_SENSOR 33
#define BLUE_LED 14
#define GREEN_LED 27
#define YELLOW_LED 12
#define RED_LED 26

void setup() {
    Serial.begin(115200);
    pinMode(BLUE_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
    
    // Start with all LEDs off
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
}

void loop() {
    int lightValue = analogRead(LIGHT_SENSOR);
    
    // Turn off all LEDs first
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
    
    // Turn on exactly one LED based on light value
    if (lightValue >= 0 && lightValue <= 1023) {
        digitalWrite(BLUE_LED, HIGH);
        Serial.println("band=BLUE");
    }
    else if (lightValue >= 1024 && lightValue <= 2047) {
        digitalWrite(GREEN_LED, HIGH);
        Serial.println("band=GREEN");
    }
    else if (lightValue >= 2048 && lightValue <= 3071) {
        digitalWrite(YELLOW_LED, HIGH);
        Serial.println("band=YELLOW");
    }
    else if (lightValue >= 3072 && lightValue <= 4095) {
        digitalWrite(RED_LED, HIGH);
        Serial.println("band=RED");
    }
    
    delay(500); // Read every 500ms
}