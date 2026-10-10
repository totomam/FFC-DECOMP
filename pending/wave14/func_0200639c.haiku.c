#include "ffc/types.h"

extern void func_02006fe4(uint8_t *p, uint8_t v);

void func_0200639c(uint8_t *p, uint32_t x)
{
    if (*p != 0) {
        func_02006fe4(p + 0x2a14, (uint8_t)x);
    }
}
