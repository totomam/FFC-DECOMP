#include "ffc/types.h"

void func_02086a00(void) {
    uint16_t v = *(volatile uint16_t *)0x04004010;
    if (((v & 0xc) >> 2) == 2) {
        *(volatile uint32_t *)0x040001a4 |= (uint32_t)2 << 28;
    }
    {
        volatile uint16_t *r = (volatile uint16_t *)0x04000204;
        uint16_t t = *r;
        *r = t & 0xfffff7ffu;
    }
}
