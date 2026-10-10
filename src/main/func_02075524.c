#include "ffc/types.h"

extern void func_02074a5c(uint32_t);

void func_02075524(uint8_t *p)
{
    func_02074a5c(*(uint32_t *)(p + 0x80));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
