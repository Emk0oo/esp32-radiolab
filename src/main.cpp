#include <Arduino.h>

void esp32s3Specs(){
    Serial.println("=== ESP32-S3 Diagnostic ===");
  Serial.printf("Chip : %s\n", ESP.getChipModel());
  Serial.printf("Revision : %d\n", ESP.getChipRevision());
  Serial.printf("Cores : %d\n", ESP.getChipCores());
  Serial.printf("CPU Freq : %d MHz\n", ESP.getCpuFreqMHz());
  Serial.printf("Flash : %d MB\n", ESP.getFlashChipSize() / (1024 * 1024));
  Serial.printf("PSRAM : %d MB\n", ESP.getPsramSize() / (1024 * 1024));
  Serial.printf("Heap : %d KB\n", ESP.getFreeHeap() / 1024);
}

void esp32S3Boot() {
  Serial.println("ESP32-S3 booting...");
  esp32s3Specs();
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2000);
  esp32S3Boot();
  Serial.println("=== Setup done ===");
}

void loop() {
  delay(5000);
  Serial.println("alive");
}