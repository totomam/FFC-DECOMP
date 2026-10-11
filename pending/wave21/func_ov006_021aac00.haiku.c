#include "ffc/types.h"

extern void *data_ov006_021bc784;
extern uint8_t data_ov006_021b8624[];

struct A {
    uint32_t w0;
    void *p4;
    uint8_t pad[0xC];
    uint8_t s14;
};

struct B {
    uint32_t w;
};

void func_ov006_021aac00(void)
{
    struct A *a = (struct A *)data_ov006_021bc784;
    int32_t s = a->s14;
    uint32_t idx;
    uint32_t v;
    struct B *b;

    if (s > 3) {
        s = 3;
    }
    idx = s * 3 + 2;
    v = data_ov006_021b8624[idx];
    b = (struct B *)a->p4;
    v = v << 23;
    v = v >> 7;
    b->w = (b->w & 0xfe00ff00) | 0x28 | v;
}
