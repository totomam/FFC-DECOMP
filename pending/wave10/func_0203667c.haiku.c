#include "ffc/types.h"

void func_0203667c(uint32_t *p, uint32_t v)
{
    p[23] = (p[23] & 0xfffffdffu) | ((v & 1u) << 9);
}
