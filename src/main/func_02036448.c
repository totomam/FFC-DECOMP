#include "ffc/types.h"

void func_02036448(uint32_t *p, uint32_t v)
{
    p[22] = (p[22] & 0xfff800ffu) | ((v << 21) >> 13);
}
