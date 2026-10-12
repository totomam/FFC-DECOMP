#include "ffc/types.h"

extern void func_ov000_021477d0(uint16_t a, uint16_t b, int c);
extern int func_ov000_0214e2cc(int x);
extern int func_ov000_0214e32c(int a, int b, uint8_t *c);
extern int func_ov000_02147e28(int a);
extern void func_ov000_02147984(void);
extern void func_02087058(uint8_t *p);

int func_ov000_0214e1d8(uint8_t *a0) {
    uint8_t *o = *(uint8_t **)(a0 + 4);
    uint8_t *q = *(uint8_t **)(o + 0xa4);
    int r6 = 0;
    int s;
    int k, r4, r5, v, t, x;
    s = *(int8_t *)(o + 0xaf);

    if (s == 2 && (*(int16_t *)(o + 0xac) & 8)) {
        return -28;
    }
    if ((s != 0 && s != 4) || (*(int16_t *)(o + 0xac) & 4)) {
    if (*(int *)(a0 + 0x28)) {
        func_ov000_021477d0(*(uint16_t *)(a0 + 0x24), *(uint16_t *)(a0 + 0x26), *(int *)(a0 + 0x28));
    }
    int s2 = *(int8_t *)(o + 0xaf);
    int k2 = 1;
    if (s2 != 0 && s2 != 4) {
        k2 = 0;
    }
    s = s2; k = k2;
    r5 = 0x36;
    if (k == 0) {
        r5 = 0x2a;
    }
    r4 = *(int *)(o + 0x58);
    if (s == 0 || s == 4) {
        v = func_ov000_0214e2cc(*(int *)(o + 0x54) - r5);
    } else {
        v = *(int *)(o + 0x54) - r5;
    }
    for (;;) {
        t = func_ov000_0214e32c(r4 + r5, v, a0);
        if (t <= 0) {
            break;
        }
        x = func_ov000_02147e28(r4 + r5);
        if (x <= 0) {
            s = *(int8_t *)(o + 0xaf);
            k = 1;
            if (s != 0 && s != 4) {
                k = 0;
            }
            if (k) {
                *(int16_t *)(o + 0xac) &= ~0xe;
                *(int16_t *)(o + 0xac) |= 0x80;
                func_ov000_02147984();
            }
            r6 = -76;
            break;
        }
        r6 += x;
    }
    } else {
        r6 = -76;
    }
    *(uint16_t *)(q + 0x102) = *(uint16_t *)(a0 + 0x20);
    func_02087058(q + 0x104);
    return r6;
}
