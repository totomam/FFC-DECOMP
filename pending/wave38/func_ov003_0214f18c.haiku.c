#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov003_02179a58[];
extern uint32_t data_ov003_02179a68[];

void *func_ov003_0214f18c(void *p, uint32_t a, uint32_t b, uint32_t c, ...)
{
    uint8_t *q = (uint8_t *)p;
    uint32_t *w = (uint32_t *)p;
    uint32_t *st = (uint32_t *)&c + 1;
    uint32_t z = 0;

    func_02056c9c(p, 0);
    w[0] = (uint32_t)data_ov003_02179a58;
    *(uint32_t *)(q + 0x88) = a;
    *(uint32_t *)(q + 0x8c) = b;
    *(uint32_t *)(q + 0x90) = c;
    *(uint32_t *)(q + 0x94) = st[0];
    *(uint32_t *)(q + 0x98) = st[1];
    q[0xb4] = (uint8_t)z;
    q[0xb5] = *((uint8_t *)st + 8);
    *(uint32_t *)(q + 0xc4) = 0x1b;
    *(uint32_t *)(q + 0xc8) = 0x1b;
    *(uint32_t *)(q + 0xcc) = st[3];
    *(uint32_t *)(q + 0x80) = data_ov003_02179a68[0];
    *(uint32_t *)(q + 0x84) = data_ov003_02179a68[1];
    return p;
}
