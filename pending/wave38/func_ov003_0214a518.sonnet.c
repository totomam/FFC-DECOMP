#include "ffc/types.h"

typedef struct { uint32_t x, y; } S;
extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *p, uint32_t zero, uint32_t a2, uint32_t a3, S a4);
extern uint32_t data_ov003_02179524;

void *func_ov003_0214a518(uint32_t a0, S a, uint32_t a3,
                          uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                          S s4, uint32_t s6, uint32_t s7,
                          uint32_t s8)
{
    uint32_t *o = (uint32_t *)func_0205681c(0x68);
    if (o != 0) {
        func_0206aa58(o, 0, s8, a3, s4);
        o[0] = (uint32_t)&data_ov003_02179524;
        o[0x38 / 4] = a0;
        o[0x3c / 4] = a.x;
        o[0x40 / 4] = a.y;
        o[0x44 / 4] = a3;
        o[0x48 / 4] = s0;
        o[0x4c / 4] = s1;
        o[0x50 / 4] = s2;
        o[0x54 / 4] = s3;
        o[0x58 / 4] = s4.x;
        o[0x5c / 4] = s4.y;
        o[0x60 / 4] = s6;
        o[0x64 / 4] = s7;
    }
    return o;
}
