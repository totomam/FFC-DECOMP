#include "ffc/types.h"

extern void func_ov011_021c1c04(void *p, uint32_t x);

void func_ov011_021c1858(void *p, uint32_t x)
{
    *(uint32_t *)((uint8_t *)p + (0xaf << 2)) = 0x12;
    func_ov011_021c1c04(p, x);
}
