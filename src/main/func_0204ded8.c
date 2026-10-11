#include "ffc/types.h"

extern void func_0204dec8(uint32_t a, uint32_t b);
extern void func_0204ded0(uint32_t a);

uint32_t func_0204ded8(uint32_t a, uint32_t b)
{
    func_0204dec8(a, b);
    *(uint32_t *)(b + 0x8048) += 1;
    func_0204ded0(a);
    return *(uint32_t *)(b + 0x8048);
}
