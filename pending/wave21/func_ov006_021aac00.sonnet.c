#include "ffc/types.h"

struct A {
    uint32_t w0;
    struct A *p4;
    uint8_t pad[0xC];
    uint8_t s14;
};
extern struct A *data_ov006_021bc784;
extern uint8_t data_ov006_021b8624[];

void func_ov006_021aac00(void)
{
    struct A *a = data_ov006_021bc784;
    int s = a->s14;
    uint32_t m = 0xfe00ff00;
    if (s > 3) s = 3;
    s = s * 3 + 2;
    a = a->p4;
    a->w0 = (a->w0 & m) | 0x28 | (((uint32_t)data_ov006_021b8624[s] << 23) >> 7);
}
