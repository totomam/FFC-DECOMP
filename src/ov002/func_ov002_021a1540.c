#include "ffc/types.h"

extern void func_ov002_021a1404(uint32_t a, uint32_t b, uint32_t c);

void func_ov002_021a1540(uint32_t *p)
{
    func_ov002_021a1404(p[5], p[6], p[7]);
    p[3] = (p[3] & ~0xffu) | 2;
}
