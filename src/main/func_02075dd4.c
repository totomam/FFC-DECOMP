#include "ffc/types.h"

extern void func_02075df8(void *p, uint32_t mask, uint32_t val);

void func_02075dd4(uint8_t *p, uint32_t val)
{
    uint32_t bit = 1u << *(uint32_t *)(p + 0x40);
    uint32_t mask = *(uint32_t *)(p + 0x44);
    func_02075df8(p, mask & ~bit, val);
}
