#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint8_t *b, uint32_t c);

void func_ov000_0214926c(uint8_t *p, uint32_t x)
{
    func_020849ac(0, p + (x << 9), 512);
    *(uint8_t *)(p + (x << 9) + 0xe7) = 0xff;
}
