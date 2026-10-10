#include "ffc/types.h"

extern void func_02068b9c(void *p);

void func_0206872c(uint8_t *p)
{
    func_02068b9c(p + 0x4c);
    *(uint32_t *)(p + 0xc) &= ~0xffu;
}
