#include "ffc/types.h"

extern uint64_t func_0209a6e0(uint64_t a, uint64_t b);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);

void func_02093c88(uint8_t *p, uint64_t v)
{
    uint8_t n;
    uint8_t *s;
    uint8_t *e;
    uint8_t t;

    p[0] = 0;
    p[4] = 0;
    if (v != 0) {
        do {
            n = p[4]++;
            p[5 + n] = (uint8_t)func_0209a6e0(v, 10);
            v = func_0209a6d4(v, 10);
        } while (v != 0);
    }
    s = p + 5;
    e = s + p[4] - 1;
    while (s < e) {
        t = *s;
        *s = *e;
        *e = t;
        s++;
        e--;
    }
    *(uint16_t *)(p + 2) = (uint16_t)(p[4] - 1);
}
