#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>


#include <ESP8266WiFi.h>





void setup() {
    Serial.begin(115200); // Set baud rate
    delay(100);  // Dont use delay, it freezes the entire device for whatever amount of time
  
    // Create Access Point  
    WiFi.softAP("ESP-8266 WiFi", "Password1234!");  // DO NOT USE SUCH A PASSWORD
    
    // Print AP IP
    Serial.println("WiFi AP IP: " + String(WiFi.softAPIP().toString()));
}


void loop() {
    // Without this delcared it gives me a lot of errors, and since this script doesnt need it there is nothing here
}
