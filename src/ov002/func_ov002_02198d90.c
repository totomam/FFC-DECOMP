#include "ffc/types.h"

uint32_t func_ov002_02198d90(uint8_t *p)
{
    uint32_t *q = *(uint32_t **)(p + 0x100);
    return *(uint32_t *)((uint8_t *)q + 0x2f8);
}
