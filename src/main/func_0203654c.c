#include "ffc/types.h"

void func_0203654c(uint32_t *p, uint32_t v)
{
    p[22] = (p[22] & 0xf00fffffu) | ((v << 24) >> 4);
}
