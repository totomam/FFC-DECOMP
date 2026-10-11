#include "ffc/types.h"

uint32_t func_ov000_0214eb34(uint32_t a, uint32_t b)
{
    uint32_t r2 = 0;
    uint32_t r3 = 0;
    uint32_t r5 = 0;
    uint32_t r4 = b & ~a;

    if ((~a ^ r4) != 0 && r4 != 0) {
        r5 = 1;
    }
    if (r5 != 0) {
        if (((b & 0xFF000000u) ^ 0x7F000000u) != 0) {
            r3 = 1;
        }
    }
    if (r3 != 0) {
        if (((b & 0xF0000000u) ^ 0xE0000000u) != 0) {
            r2 = 1;
        }
    }
    return r2;
}
