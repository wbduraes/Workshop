#include <WiFi.h>

uint8_t MAC_array[6];
char MAC_char[18];

void setup() {
    Serial.begin(115200);
    Serial.println("MAC Address Finder V1.0");

    WiFi.macAddress(MAC_array);
    for (int i = 0; i < sizeof(MAC_array); ++i){
      sprintf(MAC_char,"%s%02x:",MAC_char,MAC_array[i]);
    }
  
    Serial.println(MAC_char);
}

void loop() {

    delay(5000);
    WiFi.macAddress(MAC_array);
    for (int i = 0; i < sizeof(MAC_array); ++i){
      sprintf(MAC_char,"%s%02x:",MAC_char,MAC_array[i]);
    }
  
    Serial.println(MAC_char);
  
}
