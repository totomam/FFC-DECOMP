#include "ffc/types.h"

struct Inner {
    uint8_t pad[0x13];
    uint8_t f13;
};

struct Outer {
    uint8_t pad[0x14];
    struct Inner *p;
};

void func_02074678(struct Outer *o)
{
    o->p->f13 = 0;
}
