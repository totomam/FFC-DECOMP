#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

#define CHSW(mm) \
    switch (mm) { \
    case 0: t = *p & 0x1f; break; \
    case 1: t = (*p & 0x3e0) >> 5; break; \
    case 2: t = (*p & 0x7c00) >> 10; break; \
    default: t = 0; break; \
    }

void func_0202827c(uint32_t x, uint16_t *p, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t a, b, cc, q;
    uint8_t m, t;

    m = (uint8_t)(func_0209a978(x - 1, 3) >> 32);
    CHSW(m);
    q = (uint32_t)func_0209a978(t * e, 100);
    if (q >= 31) {
        a = 31;
    } else {
        CHSW(m);
        a = (uint32_t)func_0209a978(t * e, 100);
    }

    m = (uint8_t)func_0209a978(x - 1, 9);
    CHSW(m);
    q = (uint32_t)func_0209a978(t * c, 100);
    if (q >= 31) {
        b = 31;
    } else {
        CHSW(m);
        b = (uint32_t)func_0209a978(t * c, 100);
    }

    m = (uint8_t)(func_0209a978((uint32_t)func_0209a978(x - 1, 3), 3) >> 32);
    CHSW(m);
    q = (uint32_t)func_0209a978(t * d, 100);
    if (q >= 31) {
        cc = 31;
    } else {
        CHSW(m);
        cc = (uint32_t)func_0209a978(t * d, 100);
    }

    *p = (uint16_t)((a << 10) | (cc << 5) | b);
}
