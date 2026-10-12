#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void func_ov003_02165804(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j);

void func_ov003_0216bdb8(void *p0, uint8_t *s)
{
    uint32_t r4 = 0;
    uint32_t r5 = 0;
    uint16_t t = *(uint16_t *)s;
    uint32_t *d;
    uint32_t r7;
    void *p;

    if (t == 0x29 || t == 0x2d || t == 0x2e || t == 0x2f || t == 0x33 || t == 0x34 || t == 0x35 || t == 0x37) {
        uint32_t v = *(uint32_t *)(s + *(uint32_t *)(s + 8));
        if (v == 0) {
            r4 |= 1;
        } else if (v == 1) {
            r5 |= 1;
        }
    }

    if (t == 0x2a || t == 0x2d || t == 0x30 || t == 0x31 || t == 0x33 || t == 0x34 || (uint16_t)(t + 0xffca) <= 1) {
        uint32_t v = *(uint32_t *)(s + *(uint32_t *)(s + 8) + 4);
        if (v == 0) {
            r4 |= 2;
        } else if (v == 1) {
            r5 |= 2;
        }
    }

    if (t == 0x2b || t == 0x2e || t == 0x30 || t == 0x32 || t == 0x33 || (uint16_t)(t + 0xffcb) <= 2) {
        uint32_t v = *(uint32_t *)(s + *(uint32_t *)(s + 8) + 8);
        if (v == 0) {
            r4 |= 4;
        } else if (v == 1) {
            r5 |= 4;
        }
    }

    if (t == 0x2c || t == 0x2f || t == 0x31 || t == 0x32 || (uint16_t)(t + 0xffcc) <= 3) {
        uint32_t v = *(uint32_t *)(s + *(uint32_t *)(s + 8) + 0xc);
        if (v == 0) {
            r4 |= 8;
        } else if (v == 1) {
            r5 |= 8;
        }
    }

    r7 = 0x5a << 2;
    d = (uint32_t *)(s + *(uint32_t *)(s + 8));
    {
        uint32_t a20 = func_0209a76c(d[0] << 4, r7);
        uint32_t a24 = func_0209a76c(d[1] << 4, r7);
        uint32_t a28 = func_0209a76c(d[2] << 4, r7);
        uint32_t a1c = d[4];
        uint32_t d3 = d[3];
        uint32_t d5 = d[5];
        p = func_0205681c(0x38);
        if (p != 0) {
            func_ov003_02165804(p, p0, a20, a24, a28, d3, a1c, d5, r4, r5);
        }
    }
}
