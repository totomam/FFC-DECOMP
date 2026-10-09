#include "ffc/types.h"

extern void func_02006fa4(uint8_t *p, int16_t v);

void func_0200646c(uint8_t *p, int32_t x)
{
    if (*p != 0) {
        func_02006fa4(p + 0x2a28, (int16_t)x);
    }
}
