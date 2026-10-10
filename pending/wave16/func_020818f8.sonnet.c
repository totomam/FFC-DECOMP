#include "ffc/types.h"

void func_020818f8(int32_t v)
{
    uint16_t *p = (uint16_t *)0x04000004;
    uint16_t old = *p;
    *p = (uint16_t)((old & 0x3f) | ((v & 0xff) << 8) | ((v & 0x100) >> 1));
}
