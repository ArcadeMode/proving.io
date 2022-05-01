//#include <WiFi.h>
//#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <io/LEDController.h>
char* ssid = "Stormpoopers";
char* password = "MarcTanya2612";
AsyncWebServer server(80);

LEDController ledCtrl(LED_BUILTIN);

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = D6, en = D7, d4 = D3, d5 = D2, d6 = D1, d7 = D0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setupServer() {
  //server.on("/", handleRoot); // what happens in the root
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    ledCtrl.on();
    lcd.clear();
    lcd.print("LED ON");
    request->send(200, "text/html", "LED ON");
  });

  server.on("/off", HTTP_GET, [](AsyncWebServerRequest *request){
    ledCtrl.off();
    lcd.clear();
    lcd.print("LED OFF");
    request->send(200, "text/html", "LED OFF");
  });

  server.begin();
}

void setup() {
  lcd.begin(16,2);
  

  Serial.begin(9600);
  delay(500);
  Serial.println("");

  Serial.println("Turning off on-board LED");
  // initialize digital pin LED_BUILTIN as an output.
  
  ledCtrl.off();
  
  delay(1000);
  
  Serial.println("Initialise LCD");
  Serial.println("Initialising web server");
  setupServer();
  
  Serial.println("");
  Serial.print("Connecting to Wifi network: ");
  lcd.print("Connecting");
  lcd.setCursor(0,1);
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    lcd.print(".");
  }

  lcd.clear();

  Serial.println("");
  Serial.println("Connection established.");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  
}

void loop() {

}


