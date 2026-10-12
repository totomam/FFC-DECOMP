/* cflags: -nothumb */
#include "ffc/types.h"

void func_ov014_02148fa0(uint32_t a, uint32_t b, uint32_t c, uint8_t *p)
{
    uint32_t *q = (uint32_t *)(p + 0x200);
    int i = 0x20;
    do {
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        q += 4;
    } while (--i != 0);
}
