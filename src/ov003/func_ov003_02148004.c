#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

void func_ov003_02148004(uint32_t *out, int32_t *in)
{
    uint32_t base = 0x40002b0;
    int64_t a = in[0];
    int64_t b = in[1];
    uint64_t s1;
    uint64_t s2;
    uint64_t t;

    *(volatile uint16_t *)base = 1;
    s1 = func_0209a71c((uint64_t)b, (uint64_t)b);
    s2 = func_0209a71c((uint64_t)a, (uint64_t)a);
    t = s1 + (uint64_t)(base >> 14);
    *(volatile uint64_t *)(base + 8) = t + s2;
    while (*(volatile uint16_t *)base & (base >> 11)) {
    }
    *out = *(volatile uint32_t *)(base + 4);
}
