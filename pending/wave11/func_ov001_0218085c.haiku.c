#include "ffc/types.h"

void func_ov001_0218085c(int8_t *p, uint32_t off, int32_t v)
{
    p[off] = (int8_t)(v >> 8);
    off++;
    p[off] = (int8_t)v;
}
