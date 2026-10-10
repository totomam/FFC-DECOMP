#include "ffc/types.h"

extern void func_02089d28(uint32_t a, uint32_t b);

void func_0207a290(uint8_t *p, int32_t idx, uint32_t v)
{
    if (idx <= *(int32_t *)(p + 0x50) - 1) {
        uint8_t *q = p + idx;
        uint8_t b = q[0x54];
        func_02089d28(1u << b, v);
    }
}
