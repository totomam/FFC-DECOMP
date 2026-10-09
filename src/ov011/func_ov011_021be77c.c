#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *dst, int val, uint32_t n);
extern uint8_t data_ov011_021cab20[];

void *func_ov011_021be77c(uint32_t a, volatile uint32_t b, volatile uint32_t c, uint32_t n, ...)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x44);
    if (p != 0) {
        uint32_t tb;
        func_0206aa58(p, 0, n);
        tb = b;
        *(uint32_t *)(p + 0x00) = (uint32_t)data_ov011_021cab20;
        *(uint32_t *)(p + 0x38) = a;
        *(uint32_t *)(p + 0x3c) = tb;
        *(uint32_t *)(p + 0x40) = c;
    }
    return p;
}
