#ifndef SERVERBOMBAS_H_
#define SERVERBOMBAS_H_

#include <Arduino.h>

#define PARAM_SSID "ssid"
#define PARAM_PASSWORD "password"

#define PARAM_HOST "host"
#define PARAM_PUERTO "puerto"
#define PARAM_MQTT_USUARIO "usuario"
#define PARAM_MQTT_PASSWORD "password"

#define PARAM_PRESIONSIS "presionsis"
#define PARAM_PRESIONBAN "presionban"
#define PARAM_DELAY "delay"

// HTML web page
const char INDEX_HTML[] PROGMEM = R"rawliteral(<!DOCTYPE html>
    <html>
    <meta charset="UTF-8">

    <head>
        <title>Sistema de bombas - Automatizacion</title>
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link rel="icon" href="data:,">

    </head>

    <body>
        <div class="main-container">
            <h1>Sistema de Bombas</h1>
            <div name="wifi">
                <hr>
                <h3>Configuración Wifi</h3>
                <form name="wifiForm">
                    <label for="ssid">SSID:</label>
                    <input class="input" type="text" name="ssid"><br>
                    <label for="password">Contraseña:</label>
                    <input class="input" type="password" name="password"><br>
                    <input class="button" type="submit" value="Enviar"/><br><br>
                </form>
            </div>
            <div name="mqtt">
                <hr>
                <h3>Configuración MQTT</h3>
                <form name="mqttForm">
                    <label for="host">Host:</label>
                    <input class="input" type="text" name="host"><br>
                    <label for="puerto">Puerto:</label>
                    <input class="input" type="text" name="puerto"><br>
                    <label for="usuario">Usuario:</label>
                    <input class="input" type="text" name="usuario"><br>
                    <label for="password">Contraseña:</label>
                    <input class="input" type="password" name="password"><br>
                    <input class="button" type="submit" value="Enviar" /><br><br>
                </form>
                <hr>
            </div>
            <div name="bombas">
                <h3>Configuración Bombas</h3>
                <form name="bombasForm">
                    <label for="presionsis">Presion Sistema:</label>
                    <input class="input" type="number" name="presionsis"><br>
                    <label for="presionban">Presion Banda Muerta:</label>
                    <input class="input" type="number" name="presionban"><br>
                    <label for="delay">Time Delay:</label>
                    <input class="input" type="number" name="delay"><br>
                    <input class="button" type="submit" value="Enviar" /><br><br>
                </form>
            </div>
        </div>
    </body>
    <style>
        html {
            font-family: Arial, Helvetica, sans-serif;
            display: inline-block;
            margin: 0px auto;
            text-align: center;
            width: 500px;
        }

        form {
            width: 500px;
            font: normal bold 12px Verdana, Arial;
        }

        form label {
            display: inline-block;
            width: 250px;
        }

        .input {
            display: inline-block;
            width: 200px;
            height: 20px;
            margin-bottom: 10px;
            border-radius: 5px;
            border: 1px solid #39c;
            padding-left: 10px;
        }

        label {
            font-size: 1rem;
        }

        h1 {
            color: #0F3376;
            padding: 2vh;
        }

        .button {
            display: inline-block;
            background-color: #008CBA;
            border: none;
            border-radius: 4px;
            color: white;
            padding: 5px 5px;
            text-decoration: none;
            font-size: 20px;
            margin: 1px;
            cursor: pointer;
        }
    </style>

    </html>)rawliteral";

void setServer(void);

#endif /* SERVERBOMBAS_H_ */