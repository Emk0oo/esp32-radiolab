#pragma once
#include <Arduino.h>

namespace boot {
    void begin(uint32_t baud, uint32_t delayMs);
    void printChipInformation();
}