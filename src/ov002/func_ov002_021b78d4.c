#include "ffc/types.h"

void func_ov002_021b78d4(uint8_t *p, uint32_t v)
{
    if (p[0x10e4]) {
        uint32_t *q = *(uint32_t **)(p + 0x88);
        uint32_t r = q[4];
        r &= ~3u;
        r |= (v & 3u);
        q[4] = r;
    }
}
