#include "ffc/types.h"

extern void func_02007020(uint8_t *p, int16_t v);

void func_020063b8(uint8_t *p, int32_t x)
{
    if (*p != 0) {
        func_02007020(p + 0x2a14, (int16_t)x);
    }
}
