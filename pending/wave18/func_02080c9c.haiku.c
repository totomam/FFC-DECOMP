#include "ffc/types.h"

void func_02080c9c(uint32_t *p, uint32_t a, uint32_t b)
{
    p[5] = b;
    p[10] = b;
    p[6] = a;
    p[9] = -a;
    *p++ = 0x1000;
    *p++ = 0;
    *p++ = 0;
    *p++ = 0;
    *p++ = 0;
    p += 2;
    *p++ = 0;
    *p++ = 0;
    p += 2;
    *p++ = 0;
    *p++ = 0;
    *p++ = 0;
    *p++ = 0;
    *p = 0x1000;
}
