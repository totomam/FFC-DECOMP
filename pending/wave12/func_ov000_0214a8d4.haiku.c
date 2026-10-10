#include "ffc/types.h"

extern void func_ov000_0214c5a0(void *p, uint32_t a, uint32_t b);

uint32_t func_ov000_0214a8d4(uint8_t *p, uint32_t a, uint32_t b)
{
    func_ov000_0214c5a0(p + 0x1e0, a, b);
    return b;
}
