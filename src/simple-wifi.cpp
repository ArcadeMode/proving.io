// #include <Arduino.h>
// #include <io/LEDController.h>

// #include <ESPAsyncWebServer.h>
// #include "DHTesp.h"


// char* ssid = "Stormpoopers";
// char* password = "MarcTanya2612";
// AsyncWebServer server(80);

// LEDController ledCtrl(LED_BUILTIN);

// DHTesp dht;


// int btnPin = D5;
// int dhtPin = D4;



// void setupServer() {
//   //server.on("/", handleRoot); // what happens in the root
//   server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
//     ledCtrl.on();
//     lcd.clear();
//     lcd.print("LED ON");
//     request->send(200, "text/html", "LED ON");
//   });

//   server.on("/off", HTTP_GET, [](AsyncWebServerRequest *request){
//     ledCtrl.off();
//     lcd.clear();
//     lcd.print("LED OFF");
//     request->send(200, "text/html", "LED OFF");
//   });

//   server.begin();
// }

// void startDht() {
//   //pinMode(dhtPin, INPUT);
//   dht.setup(dhtPin, DHTesp::DHT22);
//   Serial.println();  
// }

// void setup() {
//   Serial.begin(9600);
//   lcd.begin(16,2);

//   delay(5);
//   Serial.println("");

//   Serial.println("Turning off on-board LED");  
//   ledCtrl.off();

//   Serial.println("Initialising web server");
//   setupServer();
  
//   startDht();

//   Serial.println("");
//   Serial.print("Connecting to Wifi network: ");
//   Serial.println(ssid);

  
//   WiFi.begin(ssid, password);
//   // Wait for connection
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//     lcd.print(".");
//   }

//   Serial.println("");
//   Serial.println("Connection established.");
//   Serial.print("IP address: ");
//   Serial.println(WiFi.localIP());

// }

// void loop() {


//   delay(dht.getMinimumSamplingPeriod());
//   float hum = dht.getHumidity();
//   float temp= dht.getTemperature();
//   //Print temp and humidity values to serial monitor
//   Serial.print("Status: ");
//   Serial.print(dht.getStatusString());
//   Serial.print(", Humidity: ");
//   Serial.print(hum);
//   Serial.print(" %, Temp: ");
//   Serial.print(temp);
//   Serial.println(" Celsius");
//   delay(2000); //Delay 2 sec.
// }
