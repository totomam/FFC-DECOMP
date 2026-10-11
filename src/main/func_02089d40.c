#include "ffc/types.h"

extern void func_02089e14(uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t s0);

void func_02089d40(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                   uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j)
{
    uint32_t w0 = (d << 26) | (b << 24) | (j << 16) | e;
    uint32_t w1 = (i << 16) | a;
    uint32_t t = (g << 24) | (h << 22);
    func_02089e14(14, w1, c, f | t, w0);
}
