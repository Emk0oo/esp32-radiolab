#include "Boot.h"

namespace boot {
    void begin(uint32_t baud, uint32_t delayMs) { 
        Serial.begin(baud);
        delay(delayMs);
        Serial.println("ESP32-S3 booting...");
        printChipInformation();
        Serial.println("=== Setup done ===");

    }

    void printChipInformation(){
        Serial.println("=== ESP32-S3 Diagnostic ===");
        Serial.printf("Revision : %d\n", ESP.getChipRevision());
        Serial.printf("Cores : %d\n", ESP.getChipCores());
        Serial.printf("CPU Freq : %d MHz\n", ESP.getCpuFreqMHz());
        Serial.printf("Flash : %d MB\n", ESP.getFlashChipSize() / (1024 * 1024));
        Serial.printf("PSRAM : %d MB\n", ESP.getPsramSize() / (1024 * 1024));
        Serial.printf("Heap : %d KB\n", ESP.getFreeHeap() / 1024);
        Serial.printf("Chip : %s\n", ESP.getChipModel());
    }
}