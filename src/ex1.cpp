#include "Arduino.h"

#define RED_LED_PIN 26
#define GREEN_LED_PIN 27
#define BLUE_LED_PIN 14
#define YELLOW_LED_PIN 12
#define BUTTON_PIN 25
#define LIGHT_SENSOR_PIN 33
#define BUZZER_PIN 32
#define SERVO_PIN 5


void setup(void) 
{
    pinMode(RED_LED_PIN, OUTPUT); // RED LED
}


/****************************************************/
void loop(void) 
{
    digitalWrite(RED_LED_PIN, HIGH); // Turn RED ON
    Serial.println("RED ON");
    delay(1000); // Wait for 1000 ms

    digitalWrite(RED_LED_PIN, LOW); // Turn RED OFF
    Serial.println("RED OFF");
    delay(1000); // Wait for 1000 ms
}
