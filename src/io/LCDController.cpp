
#include "LCDController.h"
#include <Arduino.h>

#pragma region IconMatrixDefinition
byte Lock[8] = {
    0b01110,
    0b10001,
    0b10001,
    0b11111,
    0b11011,
    0b11011,
    0b11111,
    0b00000
};

byte ArrowUp[8] =
{
    0b00100,
    0b01110,
    0b11111,
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00100
};

byte Smiley[8] =
{
    0b00000,
    0b00000,
    0b01010,
    0b00000,
    0b10001,
    0b01110,
    0b00000,
    0b00000
};
#pragma endregion IconMatrixDefinition

LCDController::LCDController(LiquidCrystal_I2C* lcdRef) : lcd(lcdRef) {
    state = 0;
}
void LCDController::init() {
    lcd->init();
    lcd->createChar(0, Lock);
    lcd->createChar(1, ArrowUp);
    lcd->createChar(2, Smiley);
    lcd->backlight();
    lcd->setCursor(0,0);

    lcd->clear();
    lcd->print("Temp: 24.6");
    lcd->print((char)0xDF);
    lcd->print("C   ");

    lcd->write(byte(0));
    
    lcd->setCursor(0,1);
    lcd->print("Hum:  54.2");
    lcd->print("%");
}

// void LCDController::update() {
//     state = (state + 1) % 3;
//     lcd->setCursor(15, 0);

//     lcd->write(byte(state));

// }