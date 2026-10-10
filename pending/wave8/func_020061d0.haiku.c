#include "ffc/types.h"

extern void func_02007ad0(void *a, uint32_t b);

void func_020061d0(uint8_t *p)
{
    func_02007ad0(p + 0x29b8, *(uint32_t *)(p + 0x10));
}
