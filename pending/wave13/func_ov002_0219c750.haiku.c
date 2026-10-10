#include "ffc/types.h"

extern void func_ov002_02198d08(uint32_t a, uint32_t b);

void func_ov002_0219c750(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0xb8);
    func_ov002_02198d08(*(uint32_t *)(p + 0xc4), 1 ^ v);
}
