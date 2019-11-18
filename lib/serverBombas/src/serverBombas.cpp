#include "serverBombas.h"

#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

AsyncWebServer server(80);

static void notFound(AsyncWebServerRequest *request) {
  request->send(404, "text/plain", "Not found");
}

void setServer(void){
    // Send web page with input fields to client
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send_P(200, "text/html", INDEX_HTML);
        
        // wifi
        if (request->hasParam(PARAM_SSID)) {
        String param_ssid = request->getParam(PARAM_SSID)->value();
        String param_password = request->getParam(PARAM_PASSWORD)->value();

        // ESCRIBE LA FUNCION AQUI
        Serial.println(param_ssid);
        Serial.println(param_password);
        }

        // mqtt
        if(request->hasParam(PARAM_HOST)){
        String param_host = request->getParam(PARAM_HOST)->value();
        String param_puerto = request->getParam(PARAM_PUERTO)->value();
        String param_mqtt_ususario = request->getParam(PARAM_MQTT_USUARIO)->value();
        String param_mqtt_password = request->getParam(PARAM_MQTT_PASSWORD)->value();

        // ESCRIBE LA FUNCION AQUI
        Serial.println(param_host);
        Serial.println(param_puerto);
        Serial.println(param_mqtt_ususario);
        Serial.println(param_mqtt_password);
        }

        //bombas
        if(request->hasParam(PARAM_PRESIONSIS)){
        String param_presionsis = request->getParam(PARAM_PRESIONSIS)->value();
        String param_presionban = request->getParam(PARAM_PRESIONBAN)->value();
        String param_delay = request->getParam(PARAM_DELAY)->value();

        // ESCRIBE LA FUNCION AQUI
        Serial.println(param_presionsis);
        Serial.println(param_presionban);
        Serial.println(param_delay);
        }

    });
    server.onNotFound(notFound);
    server.begin();
}