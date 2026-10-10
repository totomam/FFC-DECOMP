#include "ffc/types.h"

uint8_t *func_ov002_021c9ba8(uint8_t *p, uint32_t idx)
{
    uint32_t off = *(uint32_t *)(p + 8);
    uint32_t *tbl = (uint32_t *)(p + off);
    return p + tbl[idx];
}
