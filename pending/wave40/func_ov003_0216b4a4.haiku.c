#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0205681c(uint32_t a);
extern void func_ov003_021640b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

void func_ov003_0216b4a4(uint32_t ctx, uint8_t *s)
{
    uint16_t type = *(uint16_t *)s;
    uint32_t off = *(uint32_t *)(s + 8);
    uint8_t *p = s + off;
    uint16_t lo = (uint16_t)*(uint32_t *)p;
    uint32_t flag = 0;
    uint16_t hi = (uint16_t)*(uint32_t *)(p + 4);
    uint32_t r7;
    uint32_t r6;
    uint32_t r4f;

    if (type == 1) {
        if (*(uint32_t *)(s + 4) >= 3) {
            flag = 1;
        }
    }
    if (flag) {
        r7 = func_0209a76c(*(uint32_t *)(p + 8) << 16, 0x168);
    } else {
        r7 = 0x4000;
    }
    r7 = (uint16_t)r7;
    if (type == 2) {
        r6 = *(uint32_t *)(p + 8);
    } else {
        r6 = 0;
    }
    r6 = (uint16_t)r6;
    if (*(uint32_t *)(s + 4) < 4) {
        r4f = 1;
    } else {
        r4f = (*(uint32_t *)(p + 0xc) == 0);
    }
    if (func_0205681c(0x2c)) {
        func_ov003_021640b0(ctx, (uint32_t)s, lo, hi, r7, r6, r4f);
    }
}
