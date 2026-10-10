#include "ffc/types.h"

extern void func_02073744(uint32_t a, uint32_t b, uint32_t c);

void func_02072f30(uint32_t *p)
{
    func_02073744(p[5], p[6], p[7]);
    p[3] = (p[3] & ~0xffu) | 2;
}
