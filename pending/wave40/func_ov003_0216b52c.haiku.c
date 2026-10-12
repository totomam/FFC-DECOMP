#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t n);
extern void func_ov003_02164114(void *m, uint32_t arg0, uint32_t a, uint32_t b,
                                uint32_t c, uint32_t d, uint32_t r7, uint32_t r6,
                                uint32_t flag);

void func_ov003_0216b52c(uint32_t arg0, uint8_t *p)
{
    uint32_t off = *(uint32_t *)(p + 8);
    uint8_t *q = p + off;
    uint32_t d;
    uint32_t c;
    uint16_t a;
    uint16_t b;
    uint32_t r7;
    uint32_t r6;
    uint32_t flag;
    void *m;

    a = (uint16_t)*(uint32_t *)q;
    b = (uint16_t)*(uint32_t *)(q + 4);
    c = *(uint32_t *)(q + 8);
    d = *(uint32_t *)(q + 0xc);

    if (*(uint16_t *)p == 3) {
        r7 = (uint16_t)func_0209a76c(*(uint32_t *)(q + 0x10) << 16, 0x168);
        r6 = 0;
    } else {
        r7 = 1 << 14;
        r6 = (uint16_t)*(uint32_t *)(q + 0x10);
    }

    if (*(uint32_t *)(p + 4) < 6) {
        flag = 1;
    } else {
        flag = (*(uint32_t *)(q + 0x14) == 0) ? 1 : 0;
    }

    m = func_0205681c(0x2c);
    if (m != 0) {
        func_ov003_02164114(m, arg0, a, b, c, d, r7, r6, flag);
    }
}
