// #include <Arduino.h>
// #include "DHTesp.h"

// int dhtPin = D5;
// int potPin = A0;

// DHTesp dht;

// void setup() {
//     Serial.begin(9600);
//     dht.setup(dhtPin, DHTesp::DHT22);

//     pinMode(potPin, INPUT);
// }

// void loop() {
//     int potVal = analogRead(potPin);
//     Serial.print("Pot value: ");
//     Serial.println(potVal);

//     delay(dht.getMinimumSamplingPeriod());
//     float hum = dht.getHumidity();
//     float temp= dht.getTemperature();
//     //Print temp and humidity values to serial monitor
//     Serial.print("Status: ");
//     Serial.print(dht.getStatusString());
//     Serial.print(", Humidity: ");
//     Serial.print(hum);
//     Serial.print(" %, Temp: ");
//     Serial.print(temp);
//     Serial.println(" Celsius");
//     delay(2000); //Delay 2 sec.
// }


// #include <Arduino.h>
// #include <Wire.h> 
// #include <LiquidCrystal_I2C.h>
// #include <io/ButtonController.h>
// #include <io/LCDController.h>
// int btnPin = D3;

// LiquidCrystal_I2C lcd(0x27, 16, 2);
// ButtonController btnCtrl(btnPin);
// LCDController lcdCtrl(&lcd);

// void setup()
// {
//     Serial.begin(9600);

//     Serial.println("sah dude");
    
//     lcdCtrl.init();

//     btnCtrl.getState()->subscribe([](bool b) {
//         Serial.print("BUTTON STATE: ");
//         Serial.println(b);
//     });

//     //btnCtrl.addObserver(&lcdCtrl);

    
// }

// void loop()
// {
//     btnCtrl.read();


//     delay(6);
// }


// #include <Arduino.h>

// int pwmPin = D6;
// int freq = 5000;

// void setup() {
//     pinMode(pwmPin, OUTPUT);
//     //analogWriteFreq(5000);
    
//     Serial.begin(9600);
// }

// void loop() {
//     // for(int i = 0; i < 256; i+=10) {
//     //     analogWrite(pwmPin, i);
//     //     Serial.println(i);
//     //     delay(1000);
//     // }
    
//     // for(int i = 255; i >= 0; i--) {
//     //     analogWrite(pwmPin, i);
//     //     Serial.println(i);
//     //     delay(5);
//     // }
//     // delay(250);

//     analogWrite(pwmPin, 255);
//     Serial.println("ON");
//     delay(1400);
//     analogWrite(pwmPin, 0);
//     Serial.println("OFF");
//     delay(500);

// }

#include <Arduino.h>

int S0 = D6;
int S1 = D7;
int S2 = D8;


void setup() {
    pinMode(S0, OUTPUT);
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(A0, INPUT);

    Serial.begin(9600);
}

void loop() {

    digitalWrite(S0, LOW);
    digitalWrite(S1, LOW);
    digitalWrite(S2, LOW);
    int btn = analogRead(A0);
    Serial.print("Button ");
    Serial.println(btn);

    digitalWrite(S0, HIGH);
    digitalWrite(S1, LOW);
    digitalWrite(S2, LOW);
    int pot0 = analogRead(A0);
    Serial.print("Pot0 ");
    Serial.println(pot0);

    digitalWrite(S0, LOW);
    digitalWrite(S1, HIGH);
    digitalWrite(S2, LOW);
    int pot1 = analogRead(A0);
    Serial.print("Pot1 ");
    Serial.println(pot1);
    
    delay(500);
}