#include "ffc/types.h"

void func_02087620(uint32_t *p)
{
    p[1] = 0;
    p[0] = 0;
    p[2] = 0;
    p[3] &= 0xff000000;
    p[3] &= 0xffffff;
}
