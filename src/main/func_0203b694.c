#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t data_020b0b68[];
extern uint32_t data_020b0b54[];

void *func_0203b694(uint32_t a)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x34);
    if (p != 0) {
        uint32_t t;
        *(uint32_t *)(p + 0xc) &= ~0xffu;
        *(uint32_t **)p = data_020b0b68;
        func_02087620(p + 0x1c);
        t = p[0x10];
        t &= ~0xffu;
        p[0x10] = t;
        t = p[0x11];
        t &= ~0xffu;
        p[0x11] = t;
        t = p[0x12];
        t &= ~0xffu;
        p[0x12] = t;
        *(uint32_t *)(p + 0x14) = 0;
        *(uint32_t **)(p + 0x18) = (uint32_t *)(p + 0x14);
        *(uint32_t **)p = data_020b0b54;
        t = p[0x11];
        t &= ~0xffu;
        t |= (uint8_t)a;
        p[0x11] = t;
    }
    return p;
}
