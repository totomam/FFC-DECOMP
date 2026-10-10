#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint8_t *b, uint32_t c);

void func_ov000_02149250(uint8_t *p, uint32_t x)
{
    func_020849ac(0, p + (x << 8), 256);
    *(uint8_t *)(p + (x << 8) + 0xe7) = 0xff;
}
