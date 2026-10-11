#include "ffc/types.h"

uint32_t func_ov000_02153994(uint8_t *p) {
    uint8_t i;
    uint32_t r = 0;
    uint8_t n = p[0x14c2];
    for (i = 0; i < n; i++) {
        uint32_t f = ((uint32_t)p[i * 4 + 0xbf7] << 24) >> 31;
        if (f == 0) {
            r = i;
            break;
        }
    }
    return r;
}
