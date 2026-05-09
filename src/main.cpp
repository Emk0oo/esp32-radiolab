#include <Arduino.h>
#include "Boot.h"

void setup() {
    boot::begin(115200, 2000);
}

void loop() {
  delay(5000);
  Serial.println("alive");
}