#include "ffc/types.h"

extern uint8_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_020831ec(int32_t x)
{
    uint16_t *p = (uint16_t *)data_02141390;
    uint16_t r3 = p[0];
    uint16_t r2 = p[5];
    r2 = (uint16_t)((r2 | r3) & ~x);
    p[0] = r2;
    p[5] = (uint16_t)x;

    switch (x) {
    case 0x70:
        *(uint8_t *)0x4000246 = 0x9b;
        *(uint8_t *)0x4000245 = 0x93;
        *(uint8_t *)0x4000244 = 0x83;
        break;
    case 0x60:
        *(uint8_t *)0x4000246 = 0x8b;
        *(uint8_t *)0x4000245 = 0x83;
        break;
    case 0x40:
        *(uint8_t *)0x4000246 = 0x83;
        break;
    case 0x30:
        *(uint8_t *)0x4000245 = 0x93;
        *(uint8_t *)0x4000244 = 0x83;
        break;
    case 0x20:
        *(uint8_t *)0x4000245 = 0x83;
        break;
    case 0x10:
        *(uint8_t *)0x4000244 = 0x83;
        break;
    case 0:
        break;
    default:
        break;
    }
    {
        void (*fn)(uint16_t) = func_02082d4c;
        fn(p[0]);
    }
}
