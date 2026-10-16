#include "ffc/types.h"
void func_02068580(uint8_t *p, volatile uint32_t v, ...)
{
    volatile uint32_t pad[2];
    volatile uint32_t *q = pad;
    uint32_t t = *(uint32_t *)(p + 0x38);
    uint32_t u = v;
    if (u != t) {
        *(uint32_t *)(p + 0x3c) = 0;
        *(uint32_t *)(p + 0x38) = v;
    }
}
