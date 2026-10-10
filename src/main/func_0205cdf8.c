#include "ffc/types.h"

extern void func_02057190(void *p);
extern void func_0205cbcc(void *a, uint16_t b);

void func_0205cdf8(void *p)
{
    uint32_t v;
    func_02057190(p);
    v = *(uint32_t *)((uint8_t *)p + 0x34);
    func_0205cbcc(*(void **)((uint8_t *)p + 0x44), (uint16_t)v);
}
