#include "ffc/types.h"

extern void func_ov000_02154dc0(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov000_02154e14(void *p, uint32_t x, uint32_t y)
{
    func_ov000_02154dc0(p, y, 0, 0x7ff);
    ((uint32_t *)p)[1] = x;
}
