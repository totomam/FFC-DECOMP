#include "ffc/types.h"

extern int32_t func_02042780(void *a, void *b);

int32_t func_0204276c(uint8_t *p, uint32_t x, uint32_t y, uint32_t z)
{
    return func_02042780(p + 0x90, &x);
}
