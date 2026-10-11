#include "ffc/types.h"

uint32_t func_ov003_0215630c(uint8_t *p) {
    uint32_t r = 0;
    if (p[0xaf]) {
        uint32_t c = 1;
        uint16_t h = *(uint16_t *)(p + 0xbe);
        if (h == 0xa1) {
        } else if (h == 0xa2) {
        } else {
            c = 0;
        }
        if (c) {
            r = 1;
        }
    }
    return r;
}
