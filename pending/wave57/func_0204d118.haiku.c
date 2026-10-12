#include "ffc/types.h"

extern uint8_t *func_0204de50(uint8_t *a);
extern uint8_t *func_0204de78(uint8_t *a);
extern uint8_t *func_0204de80(uint8_t *a);
extern uint8_t *func_0204dc5c(uint8_t *a, uint8_t *b);
extern uint8_t *func_0204de70(uint8_t *a);
extern void func_0204acc0(uint8_t *p, int n);
extern int func_0204aba4(uint8_t *a, uint8_t *b, uint8_t *c, uint8_t *d, int e, int f);
extern uint8_t *func_0204b07c(int size, int align);
extern int func_0204bea0(int8_t *buf);

uint32_t func_0204d118(uint8_t *a0) {
    int8_t buf[4];
    uint8_t *base, *T, *ca, *ex, *r4, *s;

    int pos, r, n, v, idx, off;

    uint8_t *pp;
    pp = func_0204de50(a0);
    s = *(uint8_t **)(*(uint8_t **)func_0204de78(pp) + 0xc);
    T = *(uint8_t **)(s + 0x2c);
    ca = func_0204de80(pp);
    r4 = func_0204dc5c(ca, s);
    ex = func_0204de70(pp);
    {
        uint8_t *bp = (uint8_t *)buf;
        bp[0] = 0;
        bp[1] = 0;
        bp[2] = 0;
        bp[3] = 0;
    }
    if (r4 != 0) {
        *(int *)r4 = 3;
    }
    *(int *)T = 0;
    func_0204acc0(a0 + 0x304, 0xe);
    r4 = *(uint8_t **)(T + 0x34);
    off = 0x328;
    *(int *)(a0 + off) = 0;
    base = T + 0x38;
    for (;;) {
        if (*(int *)s != 0) {
            return 0;
        }
        pos = *(int *)(a0 + off);
        if (pos < 0x400) {
            r = func_0204aba4(ca, s, *(uint8_t **)(ex + 0xc), base + pos, 1, 0);
            v = *(int8_t *)(base + pos);
            idx = 3;
        } else {
            n = pos & 0x1ff;
            if (n == 0) {
                if (r4 != 0) {
                    *(uint8_t **)r4 = func_0204b07c(0x204, 4);
                    r4 = *(uint8_t **)r4;
                } else {
                    r4 = func_0204b07c(0x204, 4);
                    *(uint8_t **)(T + 0x34) = r4;
                }
                if (r4 == 0) {
                    *(int *)(a0 + 0x330) = 1;
                    return 0;
                }
                *(int *)r4 = 0;
            }
            r = func_0204aba4(ca, s, *(uint8_t **)(ex + 0xc), r4 + 4 + n, 1, 0);
            v = *(int8_t *)(r4 + 4 + n);
            idx = *(int *)(a0 + off) & 3;
        }
        buf[idx] = (int8_t)v;
        if (r <= 0) {
            *(int *)(a0 + 0x330) = 10;
            return 0;
        }
        *(int *)(a0 + off) += r;
        if (func_0204bea0(buf) == 0) {
            continue;
        }
        *(int *)T = *(int *)(a0 + off);
        if (*(int *)T == 0) {
            *(int *)(a0 + 0x330) = 7;
            return 0;
        }
        return 1;
    }
}
