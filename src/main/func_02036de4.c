#include "ffc/types.h"

void func_02036de4(uint32_t *p, uint32_t v)
{
    p[2] = (p[2] & 0xe007ffffu) | ((v << 22) >> 3);
}
