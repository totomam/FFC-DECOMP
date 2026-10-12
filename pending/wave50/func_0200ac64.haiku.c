#include "ffc/types.h"

extern void func_0200acb8(void *a, uint32_t b, uint32_t c, uint8_t d);

void func_0200ac64(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *ptr, uint32_t d)
{
    uint32_t *w = (uint32_t *)&b;
    uint8_t z = 0;

    *(uint32_t *)(p + 0xa8) = a;
    *(uint32_t *)(p + 0xac) = w[0];
    *(uint32_t *)(p + 0xb0) = w[1];
    if ((void *)(p + 0xb4) != (void *)w[2]) {
        uint32_t *q = (uint32_t *)w[2];
        func_0200acb8(p + 0xb4, q[0], q[0] + (q[1] << 4), z);
    }
    *(uint32_t *)(p + 0x12c) = w[3];
    *(uint32_t *)(p + 0x150) = 0;
}
