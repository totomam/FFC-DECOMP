#include "ffc/types.h"

extern uint32_t data_0209fd40[];

uint32_t func_020054d0(int32_t unused, int32_t a, int32_t b)
{
    volatile int32_t s[8];
    volatile uint32_t *tbl = data_0209fd40;
    uint32_t r;
    s[6] = a;
    s[4] = a;
    int32_t w = (a + 7) >> 3;
    int32_t h = (b + 7) >> 3;
    s[1] = h;
    s[3] = h;
    s[0] = w;
    s[2] = w;
    s[7] = b;
    r = tbl[(w - 1) + (h - 1) * 8];
    s[5] = b;
    return r;
}
