#include <Arduino.h>
#include "Boot.h"
#include "EspNow.h"

void setup() {
    boot::begin(115200, 2000);
    Serial.print("[STA] MAC: ");
    espnow::readMacAddress();
}

void loop() {
  delay(5000);
  Serial.println("alive");
}