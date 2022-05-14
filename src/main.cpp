// #include <Arduino.h>
// #include "DHTesp.h"

// int dhtPin = D2;
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
#include <Arduino.h>
// #include <dp/IObserver.h>
// #include <dp/ISubject.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <io/ButtonController.h>
#include <io/LCDController.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
ButtonController btnCtrl(D4);
LCDController lcdCtrl(lcd);

void setup()
{
    lcdCtrl.init();
    btnCtrl.addObserver(lcdCtrl);

    Serial.begin(9600);

    Serial.println("sah dude");
}

void loop()
{
    btnCtrl.read();


    delay(1000);
}
