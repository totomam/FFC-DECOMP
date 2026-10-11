#include "ffc/types.h"

void func_ov003_02156574(uint8_t *p, uint32_t a0, ...)
{
    uint32_t *ap = &a0;

    *(uint32_t *)(p + 0x324) = ap[0];
    *(uint32_t *)(p + 0x328) = ap[1];
    *(uint16_t *)(p + 0x320) = (uint16_t)ap[2];
    *(uint32_t *)(p + 0x32c) = ap[3];
    *(uint32_t *)(p + 0x330) = ap[4];
}
