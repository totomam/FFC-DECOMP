#include "ffc/types.h"

extern void func_020235ac(void *out, void *self, uint32_t *b, uint32_t *a);

uint8_t *func_02054638(uint8_t *p)
{
    uint32_t c;
    uint32_t b;
    uint32_t a;
    a = (uint32_t)(p + 4);
    b = *(uint32_t *)(p + 8);
    func_020235ac(&c, p, &b, &a);
    return p;
}
