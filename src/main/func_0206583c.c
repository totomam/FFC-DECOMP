#include "ffc/types.h"

extern void func_02065c5c(void);

uint32_t func_0206583c(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t n = p[2] << 5;
    uint32_t t = n;
    uint32_t *q;
    if (a1 > 0xFFFFFFFFu - n) {
        func_02065c5c();
    }
    q = (n < a1) ? &a1 : &t;
    return n + *q;
}
