#include "Arduino.h"

#define BUTTON 25
#define GREEN 27

bool state = false;

void setup() {
  Serial.begin(115200);
  pinMode(GREEN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLDOWN);
}

void loop() {
  if (digitalRead(BUTTON)) {
    state = !state;
    digitalWrite(GREEN, state);
    Serial.print("GREEN=");
    Serial.println(state);
    delay(200); // simple debounce
    while(digitalRead(BUTTON)); // wait for release
  }
}