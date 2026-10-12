#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_02082fe8(int v) {
    uint16_t *p = data_02141390;
    volatile uint32_t *dispcnt = (volatile uint32_t *)0x04000000;
    volatile uint8_t *r244 = (volatile uint8_t *)0x04000244;
    volatile uint8_t *r245 = (volatile uint8_t *)0x04000245;
    volatile uint8_t *r246 = (volatile uint8_t *)0x04000246;
    uint32_t r;

    p[0] = (p[0] | p[7]) & ~v;
    p[7] = (uint16_t)v;

    switch (v) {
    case 0x60:
        *r246 = 0x8c;
        /* fall through */
    case 0x20:
        *r245 = 0x84;
        r = *dispcnt | 0x40000000;
        goto store;
    case 0x40:
        *dispcnt = *dispcnt | 0x40000000;
        *r246 = 0x8c;
        break;
    case 0x10:
        *dispcnt = *dispcnt | 0x40000000;
        *r244 = 0x84;
        break;
    case 0:
        r = *dispcnt & 0xbfffffff;
        goto store;
    }
    goto done;
store:
    *dispcnt = r;
done:
    func_02082d4c(p[0]);
}
