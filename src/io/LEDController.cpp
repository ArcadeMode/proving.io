#include "LEDController.h"
#include <Arduino.h>
#include <stdexcept>

LEDController::LEDController(int pin) {
    pinId = pin;

    pinMode(pinId, OUTPUT);
}

void LEDController::on() {
    write(HIGH);
}

void LEDController::off() {
    write(LOW);
}

void LEDController::write(int val) {
    val = pinId == LED_BUILTIN ? !val : val;//on-board is inverted
    digitalWrite(pinId, val);
}

