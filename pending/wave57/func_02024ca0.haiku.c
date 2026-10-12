#include "ffc/types.h"

extern void func_02024c80(void *p);
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_02025b7c(uint32_t a);
extern uint16_t *func_020235f4(void *q);
extern void func_02025c7c(uint32_t a, uint16_t *b);

void func_02024ca0(void *pp, void *qq)
{
    uint32_t *w = (uint32_t *)pp;
    uint32_t *qw = (uint32_t *)qq;
    uint32_t i = 0;
    uint16_t *s;
    uint32_t r;

    w[2] &= 0xfffffeffu;
    func_02024c80(pp);
    r = func_0205681c(0x70);
    if (r != 0) {
        r = func_02025b7c(r);
    }
    w[0x5e] = r;
    w[0x5f] = qw[7];

    s = func_020235f4(qq);
    if (s[0] == 0xfff) {
        return;
    }
    do {
        uint32_t t = (uint32_t)(s[i] - 0x50);
        if (t > 3) {
            return;
        }
        switch (t) {
        case 0:
        case 1: {
            uint32_t lo = s[i + 2];
            uint32_t hi = s[i + 3];
            i = i + 4 + (((hi << 16) | lo) >> 1);
            break;
        }
        case 2: {
            uint32_t lo = s[i + 2];
            uint32_t v = lo | ((uint32_t)s[i + 3] << 16);
            i += 4;
            func_02025c7c(w[0x5e], s + i);
            i += v >> 1;
            break;
        }
        case 3:
            i += 8;
            break;
        }
    } while (s[i] != 0xfff);
}
