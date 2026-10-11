#include "ffc/types.h"

uint32_t func_ov000_0214ea74(uint8_t *base) {
    uint8_t *p = *(uint8_t **)(base + 0xa0);
    uint32_t r = 0;
    if (p) {
        int8_t t = *(int8_t *)(base + 0xaf);
        if (t == 1) {
            uint8_t *q = *(uint8_t **)(p + 0x104);
            if (q) {
                r = *(uint16_t *)(q + 4);
            }
        } else if (t == 0 || t == 4) {
            r = *(uint32_t *)(base + 0x50) - *(uint32_t *)(p + 0xf8);
        }
    }
    return r;
}
