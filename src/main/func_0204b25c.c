#include "ffc/types.h"

int8_t func_0204b25c(uint8_t c) {
    uint8_t x = (uint8_t)(c + 1);
    if (x == 0x7b) {
        x = 0x30;
    } else if (x == 0x5b) {
        x = 0x61;
    } else if (x == 0x3a) {
        x = 0x41;
    }
    return (int8_t)x;
}
