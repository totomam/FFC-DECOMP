#include "ffc/types.h"

void func_02036e40(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xffffe3ffu) | ((v << 29) >> 19);
}
