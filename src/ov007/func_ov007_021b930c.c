#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t x, uint32_t y, uint32_t z);
extern uint8_t data_ov007_021c76a0[];

void *func_ov007_021b930c(void *p, uint32_t a, uint32_t *b, uint32_t c)
{
    uint8_t *q = (uint8_t *)p;
    func_020694ac(p, 0, 0, c);
    *(uint8_t **)q = data_ov007_021c76a0;
    *(uint32_t *)(q + 0xd4) = 0;
    *(uint32_t *)(q + 0xdc) = a;
    *(uint32_t **)(q + 0xe0) = b;
    *(uint32_t *)(q + 0xe4) = c;
    *(q + 0xf4) = (uint8_t)*b;
    return p;
}
