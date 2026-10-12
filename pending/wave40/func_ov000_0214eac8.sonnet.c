#include "ffc/types.h"

uint32_t func_ov000_0214eac8(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t r3 = 0;
    uint32_t r4 = 0;
    uint32_t r5 = 0;
    if (b != 0xFFFFFFFFu && b != 0 && c != b) {
        if ((((c ^ b) & a) != 0) || ((~a & b) != 0)) {
            uint32_t f = 1;
            c ^= b;
            if ((c & a) == 0) {
                uint32_t na = ~a;
                if (((b & na) ^ na) == 0) f = 0;
            }
            if (f) r5 = 1;
        }
    }
    if (r5) {
        if (((b & 0xFF000000u) ^ 0x7F000000u) != 0) r4 = 1;
    }
    if (r4) {
        if (((b & 0xF0000000u) ^ 0xE0000000u) != 0) r3 = 1;
    }
    return r3;
}
