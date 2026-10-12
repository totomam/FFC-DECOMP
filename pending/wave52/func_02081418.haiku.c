/* cflags: -nothumb */
#include "ffc/types.h"

void func_02081418(int32_t *v, int32_t *out) {
    int64_t s;
    int64_t q;
    int64_t t;
    int32_t r;

    s = (int64_t)v[1] * v[1] + (int64_t)v[0] * v[0] + (int64_t)v[2] * v[2];

    *(volatile uint16_t *)0x4000280 = 2;
    *(volatile int64_t *)0x4000290 = (int64_t)0x1000000 << 32;
    *(volatile int64_t *)0x4000298 = s;
    *(volatile uint16_t *)0x40002b0 = 1;
    *(volatile int64_t *)0x40002b8 = s << 2;

    while (*(volatile uint16_t *)0x40002b0 & 0x8000)
        ;
    r = *(volatile int32_t *)0x40002b4;

    while (*(volatile uint16_t *)0x4000280 & 0x8000)
        ;
    q = *(volatile int64_t *)0x40002a0;

    t = q * r;
    out[0] = (int32_t)((t * v[0] + (1LL << 44)) >> 45);
    out[1] = (int32_t)((t * v[1] + (1LL << 44)) >> 45);
    out[2] = (int32_t)((t * v[2] + (1LL << 44)) >> 45);
}
