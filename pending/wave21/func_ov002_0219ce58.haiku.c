#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *p, uint32_t zero, uint32_t arg);
extern uint8_t data_ov002_021d4cc8[];

void *func_ov002_0219ce58(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x40);
    if (p != 0) {
        func_0206aa58(p, 0, c);
        p[0] = (uint32_t)data_ov002_021d4cc8;
        p[14] = a;
        p[15] = b;
    }
    return p;
}
