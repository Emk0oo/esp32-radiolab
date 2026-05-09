#pragma once

#include <Arduino.h>


namespace boot {
    void begin(int baud, int delayMs);
    void printChipInformation();
}