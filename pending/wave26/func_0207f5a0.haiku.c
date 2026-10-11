#include "ffc/types.h"

extern int func_0207f4bc(void *obj, int a, int b);

void func_0207f5a0(void *a, void *b, uint32_t c, uint32_t d)
{
    uint8_t *base = (uint8_t *)b;
    uint8_t *p = base + 0x30;
    *(uint16_t *)(p + 4) = (uint16_t)c;
    *(uint16_t *)(p + 6) = (uint16_t)(c >> 16);
    *(uint32_t *)(p + 8) = d;
    *(void **)(base + 8) = a;
    *(void **)(base + 0x30) = a;
    if (func_0207f4bc(b, 2, 1) == 0) {
        uint32_t f = *(uint32_t *)(base + 0xc);
        f |= 0x20;
        f &= ~0x10u;
        *(uint32_t *)(base + 0xc) = f;
        *(void **)(base + 8) = a;
        *(void **)(base + 4) = base + 0x20;
    }
}
