#include "ffc/types.h"

extern void func_ov008_0219f13c(void *a, uint32_t b);

void func_ov008_0219f12c(void *p, uint32_t v)
{
    *(uint32_t *)((uint8_t *)p + 0xec) = v;
    func_ov008_0219f13c(p, v);
}
