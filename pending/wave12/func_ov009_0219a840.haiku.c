#include "ffc/types.h"

extern void func_ov009_0219a954(uint8_t *p, uint32_t a, uint16_t v);

void func_ov009_0219a840(uint8_t *p, uint32_t a, uint16_t v)
{
    *(uint16_t *)(p + 0xae) = v;
    func_ov009_0219a954(p, a, v);
}
