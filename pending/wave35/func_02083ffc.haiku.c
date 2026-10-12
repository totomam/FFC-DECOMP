#include "ffc/types.h"

void func_02083ffc(uint8_t *out, uint32_t poly) {
    uint32_t i;
    for (i = 0; i < 256; i++) {
        uint32_t x = i;
        uint32_t j;
        for (j = 0; j < 8; j++) {
            if (x & 0x80) {
                x = (x << 1) ^ poly;
            } else {
                x = x << 1;
            }
        }
        out[i] = (uint8_t)x;
    }
}
