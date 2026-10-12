/* cflags: -nothumb */
#include "ffc/types.h"

void func_ov014_02148fa0(uint32_t a, uint32_t b, uint32_t c, uint8_t *p)
{
    uint32_t *q = (uint32_t *)(p + 0x200);
    uint32_t z0 = 0, z1 = 0, z2 = 0, z3 = 0;
    int i = 0x20;
    do {
        q[0] = z0;
        q[1] = z1;
        q[2] = z2;
        q[3] = z3;
        q += 4;
    } while (--i != 0);
}
