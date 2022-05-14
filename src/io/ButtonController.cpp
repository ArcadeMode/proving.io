
#include "ButtonController.h"

#include <Arduino.h>
#include <dp/ISubject.h>
#include <dp/Subject.h>
#include <stdexcept>

ButtonController::ButtonController(int pin) {
    pinId = pin;
    pinMode(pinId, INPUT);

    lastDebounceTime = 0; 
    debounceDelay = 50;
    buttonState = HIGH;
    lastButtonState = HIGH;
}

void ButtonController::read() {
    
    int reading = digitalRead(pinId);
    if(reading != lastButtonState) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay && buttonState != reading) {
        if(reading == LOW) {
            updateObservers();
        }
        buttonState = reading;
    }
    lastButtonState = reading;
}

int ButtonController::getState() {
    return buttonState;
}