#include "ffc/types.h"
typedef struct { uint32_t a, b; } S2;
extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *obj, uint32_t zero, uint32_t a, S2 b);
extern char data_ov003_0217947c[];
void *func_ov003_0214aa44(uint32_t p1, S2 p23, uint32_t p4,
  uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
  S2 e, uint32_t s6, uint32_t s7,
  uint32_t s8, uint32_t s9, uint32_t s10)
{
    uint32_t *o = (uint32_t *)func_0205681c(0x70);
    if (o != 0) {
        func_0206aa58(o, 0, s10, e);
        ((void **)o)[0] = (void *)data_ov003_0217947c;
        o[0x38 / 4] = p1;
        o[0x3c / 4] = p23.a;
        o[0x40 / 4] = p23.b;
        o[0x44 / 4] = p4;
        o[0x48 / 4] = s0;
        o[0x4c / 4] = s1;
        o[0x50 / 4] = s2;
        o[0x54 / 4] = s3;
        o[0x58 / 4] = e.a;
        o[0x5c / 4] = e.b;
        o[0x60 / 4] = s6;
        o[0x64 / 4] = s7;
        o[0x68 / 4] = s8;
        o[0x6c / 4] = s9;
    }
    return o;
}
