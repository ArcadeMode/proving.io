// #include <Arduino.h>
// #include <Wire.h> 
// #include <LiquidCrystal_I2C.h>
// #include <io/ButtonController.h>
// #include <io/LCDController.h>
// #include <Adafruit_PWMServoDriver.h>

// //int btnPin = D3;
// int fanPin = D3;
// LiquidCrystal_I2C lcd(0x27, 16, 2);
// //ButtonController btnCtrl(btnPin);
// LCDController lcdCtrl(&lcd);
// Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// void setup()
// {
//     Serial.begin(9600);

//     Serial.println("sah dude");
    
//     lcdCtrl.init();

//     // btnCtrl.getState()->subscribe([](bool b) {
//     //     Serial.print("BUTTON STATE: ");
//     //     Serial.println(b);
//     // });

//     //btnCtrl.addObserver(&lcdCtrl);

//     // pwm.begin();

//     // pwm.setOscillatorFrequency(27000000);
//     // pwm.setPWMFreq(3052); //Datasheet limit is 3052=50MHz/(4*4096)

//     // //25%
//     // pwm.setPWM(0, 0, 1024); //slowly climbs to ~50C @ 20-22C ambient temp - no fan

//     pinMode(fanPin, OUTPUT);
//     analogWriteFreq(25000);
//     analogWrite(fanPin, 0);
// }

// void loop()
// {
//     analogWrite(fanPin, 128);
//     delay(5000);
//     analogWrite(fanPin, 255);
//     delay(5000);
//     analogWrite(fanPin, 0);
//     delay(5000);
// }
