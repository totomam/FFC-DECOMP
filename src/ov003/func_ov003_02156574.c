#include "ffc/types.h"

void func_ov003_02156574(uint8_t *p, uint32_t a, uint32_t b, uint16_t h, ...)
{
    uint32_t *ap = &a;
    *(uint32_t *)(p + 0x324) = ap[0];
    *(uint32_t *)(p + 0x328) = ap[1];
    *(uint16_t *)(p + 0x320) = h;
    *(uint32_t *)(p + 0x32c) = ap[3];
    *(uint32_t *)(p + 0x330) = ap[4];
}
