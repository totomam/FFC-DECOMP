#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(void *p);
extern int32_t func_ov000_0214d1d8(void (*fn)(void), int32_t v, int32_t b);
extern int32_t func_ov000_0214d2b8(int32_t v, int32_t w);
extern void func_ov000_0214e408(void);

int32_t func_ov000_0214e380(uint8_t *p)
{
    int32_t off;
    uint8_t *q;
    int32_t r;
    int32_t r2;

    if (func_ov000_0214ecc8(p) != 0) {
        return ~0x1b;
    }

    r2 = 0;
    if (p == 0) {
        goto check;
    }
    if (*(int16_t *)(p + 0xac) & 1) {
        r2 = 1;
    }
check:
    if (r2 == 0) {
        return ~0x26;
    }

    if (((*(volatile int16_t *)(p + 0xac) & 4) == 0) || ((*(volatile int16_t *)(p + 0xac) & 8) != 0)) {
        return ~0x37;
    }
    *(volatile int16_t *)(p + 0xac) = *(volatile int16_t *)(p + 0xac) | 8;

    q = *(uint8_t **)(p + 0xa4);
    if (q != 0 && *(int32_t *)(q + 0x10c) != 0) {
        off = 0xae;
        r = func_ov000_0214d1d8(func_ov000_0214e408, *(int32_t *)(q + 0x10c), *(int8_t *)(p + off));
        if (r == 0) {
            return off - 0xcf;
        }
        r = func_ov000_0214d2b8(*(int32_t *)(q + off + 0x5e), r);
        return r;
    }
    return 0;
}
