#include "ffc/types.h"

extern uint32_t ov001_02168b01(uint32_t v, uint32_t unused);

uint32_t func_ov001_0217c9e8(uint8_t **p, uint32_t unused)
{
    uint8_t *q = *p;
    return ov001_02168b01(*(uint32_t *)(q + 0x5c8), unused);
}
