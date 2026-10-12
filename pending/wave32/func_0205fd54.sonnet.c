#include "ffc/types.h"

void func_0205fd54(uint32_t *p, uint16_t *src, uint16_t *dst, uint32_t n) {
    uint32_t v = (p[1] & 0xFFF) << 4;
    uint32_t hi = (v & 0xFF) << 8;
    uint32_t s;
    uint32_t cnt;
    for (cnt = n >> 1; cnt != 0; cnt--) {
        s = *src++;
        if ((s & 0xFF) != 0) {
            s = (s + v) & 0xFFFF;
        }
        if (s & 0xFF00) {
            s = (s + hi) & 0xFFFF;
        }
        *dst++ = (uint16_t)s;
    }
}
