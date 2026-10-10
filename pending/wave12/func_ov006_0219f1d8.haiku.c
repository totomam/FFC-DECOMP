#include "ffc/types.h"

extern void func_ov006_0219f128(void *a, void *b);

void func_ov006_0219f1d8(uint32_t *p, void *a, uint32_t v)
{
    *p = v;
    func_ov006_0219f128(a, (uint8_t *)p + 4);
}
