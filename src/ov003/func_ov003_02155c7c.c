#include "ffc/types.h"

extern void func_0202b228(uint32_t a, uint32_t b, uint32_t c);

void func_ov003_02155c7c(uint8_t *p, uint32_t b)
{
    uint32_t v = *(uint32_t *)(p + 0x11c);
    if (v != 0) {
        func_0202b228(v, b, 0);
    }
}
