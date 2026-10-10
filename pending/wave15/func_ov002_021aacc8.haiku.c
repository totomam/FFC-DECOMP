#include "ffc/types.h"

extern void func_ov002_021aa8b8(uint32_t a, uint32_t b, uint32_t c);

void func_ov002_021aacc8(uint32_t *p)
{
    func_ov002_021aa8b8(p[5], p[6], 0);
    p[3] = (p[3] & ~0xffu) | 2;
}
