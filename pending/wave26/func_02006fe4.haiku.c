#include "ffc/types.h"

void func_02006fe4(uint8_t *p, uint32_t v) {
    if (v > 0x7f) {
        v = 0x7f;
    }
    if (p[0x12] != 0) {
        if (v == 0) {
            v = 0;
        } else {
            uint8_t inc = (uint8_t)(v + 1);
            int32_t r3 = (int32_t)(p[0xc] * inc);
            int32_t t = r3 >> 6;
            t = (int32_t)((uint32_t)t >> 25);
            v = (uint32_t)((r3 + t) >> 7);
        }
        p[0xc] = (uint8_t)v;
    }
    p[0xc] = (uint8_t)v;
    p[0x12] = 1;
}
