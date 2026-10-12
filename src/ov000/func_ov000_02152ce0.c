#include "ffc/types.h"

uint8_t func_ov000_02152ce0(uint8_t x)
{
    if (x >= 0x12) {
        return x - 0xf;
    }
    if (x >= 0xf) {
        return x - 5;
    }
    if (x >= 0xc) {
        return x - 2;
    }
    if (x >= 9) {
        return x + 1;
    }
    if (x >= 6) {
        return x + 4;
    }
    if (x >= 3) {
        return x - 3;
    }
    return x;
}
