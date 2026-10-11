#include "ffc/types.h"

void func_0204f230(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xffcfffffu) | ((v << 30) >> 10);
}
