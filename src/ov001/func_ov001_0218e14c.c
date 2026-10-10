#include "ffc/types.h"

void func_ov001_0218e14c(uint8_t *p, uint8_t v)
{
    *(uint8_t *)((uint32_t)p + 0xa0) = v;
    *(uint32_t *)((uint32_t)p + 0xac) = 0;
}
