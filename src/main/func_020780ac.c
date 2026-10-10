#include "ffc/types.h"

int func_020780ac(uint8_t *p)
{
    uint32_t *q = (uint32_t *)(p + 0x24);
    uint32_t z;
    *q = *(uint32_t *)(p + 0x18);
    z = 0;
    *(uint32_t *)(q + 2) = z;
    return z;
}
