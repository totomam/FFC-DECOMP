#include "ffc/types.h"

uint32_t func_ov000_02148a64(uint8_t *p, uint8_t **out) {
    uint32_t val;
    uint8_t d;
    *out = p;
    val = 0;
    for (;;) {
        d = (uint8_t)(*p - 0x30);
        if (d > 9) {
            break;
        }
        val = d + val * 10;
        p++;
        *out = p;
    }
    return val;
}
