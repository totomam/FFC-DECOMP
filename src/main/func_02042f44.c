#include "ffc/types.h"

void func_02042f44(void *base)
{
    uint8_t *p = (uint8_t *)base;
    *(uint8_t *)(p + 0x138) = 0;
    *(uint32_t *)(p + 0x13c) = 0;
    *(uint8_t *)(p + 0x140) = 0;
    *(uint32_t *)(p + 0x144) = 0;
    *(uint32_t *)(p + 0x148) = 0;
}
