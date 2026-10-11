#include "ffc/types.h"

void func_02036e2c(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xfffffc03u) | ((v << 24) >> 22);
}
