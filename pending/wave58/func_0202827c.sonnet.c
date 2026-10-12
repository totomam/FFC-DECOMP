#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

#define CHSW(mm) \
    switch ((uint8_t)(mm)) { \
    case 0: t = (uint8_t)(*p & 0x1f); break; \
    case 1: t = (uint8_t)((*p & 0x3e0) >> 5); break; \
    case 2: t = (uint8_t)((int)(*p & 0x7c00) >> 10); break; \
    default: t = 0; break; \
    }

void func_0202827c(uint32_t x, uint16_t *p, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t a, b, cc, q;
    uint32_t m; uint8_t t;

    m = (uint8_t)(func_0209a978(x - 1, 3) >> 32);
    CHSW(m);
    q = (uint32_t)func_0209a978(e * t, 100);
    if (q < 31) {
        CHSW(m);
        a = (uint32_t)func_0209a978(e * t, 100);
    } else {
        a = 31;
    }

    m = (uint8_t)func_0209a978(x - 1, 9);
    CHSW(m);
    q = (uint32_t)func_0209a978(c * t, 100);
    if (q < 31) {
        CHSW(m);
        b = (uint32_t)func_0209a978(c * t, 100);
    } else {
        b = 31;
    }

    m = (uint8_t)(func_0209a978((uint32_t)func_0209a978(x - 1, 3), 3) >> 32);
    CHSW(m);
    q = (uint32_t)func_0209a978(d * t, 100);
    if (q < 31) {
        CHSW(m);
        cc = (uint32_t)func_0209a978(d * t, 100);
    } else {
        cc = 31;
    }

    *p = (uint16_t)((cc << 5) | b | (a << 10));
}
