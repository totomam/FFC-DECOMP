#include "ffc/types.h"

extern int func_ov003_0214b318(uint32_t a, uint32_t b);

void func_ov003_0214dfd0(uint32_t *p)
{
    if (func_ov003_0214b318(p[0x20], p[0x21]) != 0) {
        p[3] = (p[3] & ~0xffu) | 2;
    }
}
