#include "ffc/types.h"

void func_0207d47c(uint32_t a, uint32_t b)
{
    volatile uint32_t *romctrl = (volatile uint32_t *)0x40001a4;
    volatile uint16_t *base = (volatile uint16_t *)0x40001a0;
    uint32_t x = (b >> 8) | (a << 24);
    uint32_t y = b << 24;
    uint32_t t;

    while (*romctrl & 0x80000000) {
    }
    *base = (*base & 0xffffdfff) | 0xc000;

    t = ((x & 0xff000000) >> 24) | ((x & 0xff0000) >> 8) | ((x & 0xff00) << 8) | (x << 24);
    *(volatile uint32_t *)(0x40001a8) = t;
    t = ((y & 0xff000000) >> 24) | ((y & 0xff0000) >> 8) | ((y & 0xff00) << 8) | (y << 24);
    *(volatile uint32_t *)(0x40001ac) = t;
}
