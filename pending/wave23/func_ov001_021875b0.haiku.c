#include "ffc/types.h"

uint32_t func_ov001_021875b0(uint32_t x)
{
    uint32_t r = 5;
    if (x & 2) {
        r += 4;
    }
    if (x & 8) {
        r += 4;
    }
    if (x & 0x10) {
        r += 2;
    }
    if (x & 0x20) {
        r += 2;
    }
    return r;
}
