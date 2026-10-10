#include "ffc/types.h"

void func_0202d808(uint8_t *p, uint8_t v)
{
    uint32_t t = *(uint32_t *)(p + 0x80);
    if (t) {
        *(uint8_t *)(t + 0x46) = v;
    }
}
