#include "ffc/types.h"

void func_02081ee0(uint32_t a, uint32_t b, uint16_t c, uint32_t d, int e)
{
    uint32_t v = (d << 24) | (a | (b << 16));
    if (e) {
        v |= 0x8000;
    }
    *(uint32_t *)0x04000350 = v;
    *(uint16_t *)0x04000354 = c;
}
