#include "ffc/types.h"

void func_0205fd54(uint32_t *p, uint16_t *src, uint16_t *dst, uint32_t n) {
    uint16_t *out = dst;
    uint32_t v = (p[1] & 0xFFF) << 4;
    uint32_t hi = (v & 0xFF) << 8;
    uint32_t cnt = n >> 1;
    if (cnt == 0) return;
    do {
        uint32_t s = *src++;
        if ((s & 0xFF) != 0) {
            s = (s + v) & 0xFFFF;
        }
        if (s & 0xFF00) {
            s = (s + hi) & 0xFFFF;
        }
        *out++ = (uint16_t)s;
    } while (--cnt != 0);
}
