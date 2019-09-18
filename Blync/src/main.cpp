#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char* ssid = ""; //wifi network name
const char* pass = ""; //wifi network pass
char auth[] = ""; //Blync auth

WiFiServer server(80);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);

  // WiFi.begin(ssid, pass);
  // while (WiFi.status() != WL_CONNECTED)
  // {
  //   delay(500);
  //   Serial.print(".");
  // }
  
  // server.begin();
  // Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  // WiFiClient client = server.available();
  // if(!client){
  //   return;
  // }

  // while (!client.available())
  // {
  //   delay(1);
  // }

  // client.flush();
  // String s = "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nhello from esp8266!\n";
  // client.print(s);
  // delay(1);
  Blynk.run();
}