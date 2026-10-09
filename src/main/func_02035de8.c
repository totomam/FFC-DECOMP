#include "ffc/types.h"

void func_02035de8(uint32_t *p, uint32_t v)
{
    p[1] = (p[1] & 0xfffffeffu) | ((v & 1u) << 8);
}
