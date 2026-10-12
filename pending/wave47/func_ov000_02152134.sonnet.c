#include "ffc/types.h"

extern int32_t func_ov000_0214f964(void *p);
extern uint32_t func_ov000_0215237c(void *p);
extern uint32_t func_ov000_02152398(void *p);
extern void func_ov000_0214f6e0(void *a, void *b, uint32_t c);
extern uint64_t func_020882cc(void);
extern void func_ov000_02152b80(int32_t x);

int32_t func_ov000_02152134(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int32_t r;
    uint32_t sp0;
    uint32_t v;
    uint8_t *q;
    uint8_t *a;
    uint32_t off;
    uint8_t s;

    r = func_ov000_0214f964(p);
    s = p[0x14c3];
    off = (uint32_t)s * 0xc0;
    q = p + 0xc20;

    if (r == 3) {
        sp0 = func_ov000_0215237c(p);
        p[0x14c5] = p[0x14c5] + 1;
        if (p[0x14c5] > 3) {
            p[0x14c5] = 0;
            a = p + p[0x14c3] * 4;
            a[0xbf4] = 1;
            return 9;
        }
        if (p[0x14c5] != 1) {
            if (p[0x14c4] != 1) {
                if (p[0x14c4] == 2) {
                    p[0x14c5] = 0;
                    a = p + p[0x14c3] * 4;
                    a[0xbf4] = 3;
                    return 9;
                }
                if (p[0x14c4] == 3) {
                    p[0x14c5] = 0;
                    a = p + p[0x14c3] * 4;
                    a[0xbf4] = 4;
                    return 9;
                }
                if (p[0x14c5] != 3) {
                    goto L00a4;
                }
            }
            p[0x14bb] &= ~0xc;
        }
L00a4:
        v = func_ov000_02152398(p);
        func_ov000_0214f6e0(q + off, p + 0x1468, v | sp0);
        return 8;
    }
    else if (r == 9) {
        p[0x14c5] = 0;
        {
            uint64_t t = func_020882cc();
            *(uint64_t *)(p + 0x1460) = t;
        }
        return 10;
    }
    else if (r == 0xb) {
        func_ov000_02152b80(0);
        return 0x11;
    }
    else if (r > 0xb) {
        func_ov000_02152b80(4);
        return 0x11;
    }
    return 8;
}
