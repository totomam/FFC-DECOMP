#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov003_02179a58[];
extern uint32_t data_ov003_02179a68[];

typedef struct { uint32_t x, y; } P;
void *func_ov003_0214f18c(void *p, uint32_t a, uint32_t b, uint32_t c, ...)
{
    uint8_t *q = (uint8_t *)p;
    uint32_t *w = (uint32_t *)p;
    uint32_t z = 0;

    func_02056c9c(p, 0);
    uint32_t t;
    w[0] = (uint32_t)data_ov003_02179a58;
    t = c;
    *(uint32_t *)(q + 0x88) = a;
    *(uint32_t *)(q + 0x8c) = b;
    *(uint32_t *)(q + 0x90) = t;
    *(uint32_t *)(q + 0x94) = (&c)[1];
    *(uint32_t *)(q + 0x98) = (&c)[2];
    q[0xb4] = (uint8_t)z;
    q[0xb5] = *((uint8_t *)(&c + 1) + 8);
    *(uint32_t *)(q + 0xc4) = 0x1b;
    *(uint32_t *)(q + 0xc8) = 0x1b;
    *(uint32_t *)(q + 0xcc) = (&c)[4];
    *(P *)(q + 0x80) = *(P *)data_ov003_02179a68;
    return p;
}
