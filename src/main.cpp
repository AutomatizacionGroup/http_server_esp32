#include <Arduino.h>

#include <WiFi.h>

#include <serverBombas.h>

// REPLACE WITH YOUR NETWORK CREDENTIALS
const char* ssid = "test ";
const char* password = "12344567678";

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("WiFi Failed!");
    return;
  }
  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  //SERVER
  setServer();
}

void loop() {
  
}
