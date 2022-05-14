#include "LEDController.h"
#include <Arduino.h>
#include <stdexcept>

LEDController::LEDController(int pin) {
    pinId = pin;
    state = 0;
    pinMode(pinId, OUTPUT);
}

int LEDController::getState() {
    return state;
}

void LEDController::on() {
    state = HIGH;
    write(state);
}

void LEDController::off() {
    state = LOW;
    write(state);
}

void LEDController::toggle() {
    state = !state;
    write(state);
}

void LEDController::write(int val) {
    val = pinId == LED_BUILTIN ? !val : val;//on-board is inverted
    digitalWrite(pinId, val);
}


