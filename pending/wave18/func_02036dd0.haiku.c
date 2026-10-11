#include "ffc/types.h"

void func_02036dd0(uint32_t *p, uint32_t v)
{
    p[2] = (p[2] & 0xfff83fffu) | ((v << 27) >> 13);
}
