#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov003_0217b4b4[];

void *func_ov003_0216e710(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t e)
{
    uint8_t *q = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(char **)q = data_ov003_0217b4b4;
    *(uint32_t *)(q + 0x80) = a;
    *(uint32_t *)(q + 0x88) = b;
    *(uint32_t *)(q + 0x8c) = 0;
    *(uint32_t *)(q + 0x90) = e;
    *(uint32_t *)(q + 0x94) = 0;
    *(uint32_t *)(q + 0x98) = c;
    return p;
}
