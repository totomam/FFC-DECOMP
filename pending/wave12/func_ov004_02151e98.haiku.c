#include "ffc/types.h"

extern uint32_t func_ov004_0214e56c(uint32_t a, uint32_t b, uint32_t c, void *d);

uint32_t func_ov004_02151e98(void *p)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t *w = (uint32_t *)p;
    return func_ov004_0214e56c(w[5], *(uint32_t *)(base + 0x18), *(uint32_t *)(base + 0x1c), base + 0x20);
}
