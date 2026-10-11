#include "ffc/types.h"

void func_02036e54(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xffffdfffu) | ((v << 31) >> 18);
}
