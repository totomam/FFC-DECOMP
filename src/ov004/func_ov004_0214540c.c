#include "ffc/types.h"

extern void func_ov004_02145434(void *a, uint32_t b);

void func_ov004_0214540c(void *p, uint32_t v)
{
    *(uint32_t *)((uint8_t *)p + 0xa8) = v;
    func_ov004_02145434(p, v);
}
