#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *obj, uint32_t zero, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern char data_ov003_0217947c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S4;

void *func_ov003_0214aa44(S4 p,
                          uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                          uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7,
                          uint32_t s8, uint32_t s9, uint32_t s10)
{
    uint32_t *o = (uint32_t *)func_0205681c(0x70);
    if (o != 0) {
        func_0206aa58(o, 0, s10, p.d, s4, s5);
        ((void **)o)[0] = (void *)data_ov003_0217947c;
        o[0x38 / 4] = p.a;
        o[0x3c / 4] = p.b;
        o[0x40 / 4] = p.c;
        o[0x44 / 4] = p.d;
        o[0x48 / 4] = s0;
        o[0x4c / 4] = s1;
        o[0x50 / 4] = s2;
        o[0x54 / 4] = s3;
        o[0x58 / 4] = s4;
        o[0x5c / 4] = s5;
        o[0x60 / 4] = s6;
        o[0x64 / 4] = s7;
        o[0x68 / 4] = s8;
        o[0x6c / 4] = s9;
    }
    return o;
}
