#include "ffc/types.h"

extern void func_021553c5(uint32_t a, uint32_t b);

void func_02071fe8(uint8_t *p, uint32_t x)
{
    func_021553c5(x + 8, *(uint32_t *)(p + 8));
}
