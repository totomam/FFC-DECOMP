#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov008_021a80e0[];

void *func_ov008_0219d328(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t *a;
    uint32_t *b;
    int32_t i;

    func_020694ac(a0, 0, 0);
    *(uint8_t **)p = data_ov008_021a80e0;
    a = (uint32_t *)(p + 0xc8);
    *(uint32_t *)(p + 0xc8) = 0;
    a[1] = 0;
    a[2] = 0;
    b = (uint32_t *)(p + 0xf4);
    b[1] = 0;
    b[2] = 0;
    *(uint32_t *)(p + 0xf4) = 0;
    p[0x100] = 0;
    p[0x101] = 0;
    *(uint32_t *)(p + 0x108) = 0;
    p[0x10c] = 0;
    p[0x10d] = 0xff;
    p[0x10e] = 0;
    i = 0;
    while (i < 5) {
        uint8_t *d = p + 0xec + i;
        *d = (uint8_t)i;
        i = i + 1;
    }
    return a0;
}
