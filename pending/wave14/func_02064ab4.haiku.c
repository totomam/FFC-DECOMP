#include "ffc/types.h"

extern void func_02063ab0(uint8_t *a, void *b, uint8_t *c);

void func_02064ab4(uint8_t *p, void *q)
{
    uint8_t *t = *(uint8_t **)(p + 0x7c);
    func_02063ab0(p + 0x18, q, t ? t + 8 : (uint8_t *)0);
}
