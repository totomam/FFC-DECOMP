#include "ffc/types.h"

extern void func_0209a978(uint32_t a, uint32_t b);
extern void func_02021490(void);
extern void func_02021458(void);

struct Lo {
    uint32_t n : 4;
    uint32_t rest : 28;
};

struct Hi {
    uint32_t lo : 27;
    uint32_t m : 4;
    uint32_t top : 1;
};

struct Inner {
    uint8_t pad[0x38];
    struct Hi w38;
    struct Lo w3c;
};

struct Outer {
    uint8_t pad[0x3c];
    struct Inner *inner;
};

void func_0201b0cc(struct Outer *o)
{
    uint32_t v;

    v = o->inner->w3c.n;
    func_0209a978(v * 0x7f, 10);
    func_02021490();

    v = o->inner->w38.m;
    func_0209a978(v * 0x7f, 10);
    func_02021458();
}
