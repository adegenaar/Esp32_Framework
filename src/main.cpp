#include <Arduino.h>
#include "OTA.h"

#define HOSTNAME "TemplateSketch"

unsigned long entry;

// #define ESP32_RTOS  // Uncomment this line if you want to use the code with freertos (only works on the ESP32)

void setup() {
    Serial.begin(115200);
    Serial.println("Booting");

    setupOTA(HOSTNAME);
    // put your setup code here, to run once:
}

void loop() {
#ifndef ESP32_RTOS
    ArduinoOTA.handle();
#endif

    // put your main code here, to run repeatedly:
}