#include "ffc/types.h"

extern void func_02024108(uint8_t *self);

void func_020240e8(uint8_t *self, uint32_t a, uint32_t b, uint32_t c)
{
    func_02024108(self);
    *(uint32_t *)(self + 0xec) = a;
    *(uint32_t *)(self + 0xd4) = b;
    *(uint32_t *)(self + 0xd8) = c;
}
