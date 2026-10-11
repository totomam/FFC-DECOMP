#include "ffc/types.h"

extern uint8_t *func_ov006_021b3eb8(int32_t n, uint32_t start, uint32_t step);

void func_ov006_021b3ed4(int32_t n, uint32_t start, uint32_t step)
{
    uint8_t *base = func_ov006_021b3eb8(n, start, step);
    int32_t i;
    uint32_t val = start;

    for (i = 0; i < n; i++) {
        *(uint32_t *)(base + 4 + i * 4) = val;
        val += step;
    }
    base[3] = (uint8_t)n;
}
