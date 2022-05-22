
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
    readState = HIGH;
    lastReadState = HIGH;

}

void ButtonController::read() {  
    int reading = digitalRead(pinId);
    if(reading != lastReadState) {
        lastDebounceTime = millis();
    }
    //Serial.print("BEEP BOOP");
    if ((millis() - lastDebounceTime) > debounceDelay && readState != reading) {
        if(reading == LOW) {
            buttonState = !buttonState;
            subject.next(buttonState);
        }
        readState = reading;
    }
    
    lastReadState = reading;
}

IObservable<bool>* ButtonController::getState() {
    return &subject;
}