#include "ffc/types.h"

extern void *func_ov000_0214d1bc(uint32_t x);

void func_ov000_0214d1d8(void *a, void *b, uint32_t c)
{
    uint8_t *p = (uint8_t *)func_ov000_0214d1bc(c);
    if (p != 0) {
        *(void **)(p + 0) = a;
        *(void **)(p + 4) = b;
        *(uint32_t *)(p + 8) = 0;
        *(int8_t *)(p + 0xc) = *(int8_t *)((uint8_t *)b + 0xaf);
        *(uint8_t *)(p + 0xd) = (uint8_t)c;
    }
}
