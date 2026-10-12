#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_02082fe8(int v) {
    uint16_t *p = data_02141390;
    volatile uint32_t *d = (volatile uint32_t *)0x04000000;
    volatile uint8_t *q;
    uint32_t x;

    p[0] = (p[0] | p[7]) & ~v;
    p[7] = (uint16_t)v;

    switch (v) {
    case 0x10:
        *d = *d | 0x40000000;
        x = 0x84;
        q = (volatile uint8_t *)0x04000244;
    tail:
        *q = x;
        break;
    case 0x40:
        *d = *d | 0x40000000;
        x = 0x8c;
        q = (volatile uint8_t *)0x04000246;
        goto tail;
    case 0x60:
        *(volatile uint8_t *)0x04000246 = 0x8c;
    case 0x20:
        *(volatile uint8_t *)0x04000245 = 0x84;
        *d |= 0x40000000;
        break;
    case 0:
        *d &= 0xbfffffff;
        break;
    }
    func_02082d4c(data_02141390[0]);
}
