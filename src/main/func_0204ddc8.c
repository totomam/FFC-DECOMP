#include "ffc/types.h"

extern void *func_0204dc74(void *p);

int32_t func_0204ddc8(void *p, int32_t unused, uint32_t x, uint32_t y)
{
    uint8_t *q = (uint8_t *)func_0204dc74(p);
    if (q == 0) {
        return -1;
    }
    *(uint32_t *)(q + 0x24) = x;
    *(uint32_t *)(q + 0x28) = y;
    return 0;
}
