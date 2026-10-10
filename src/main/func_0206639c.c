#include "ffc/types.h"

typedef struct Inner {
    void (**vt)(struct Inner *);
    uint8_t pad[0x0c - 4];
    uint32_t f;
} Inner;

typedef struct Outer {
    uint8_t pad[0x20];
    Inner *in;
} Outer;

void func_0206639c(Outer *o)
{
    Inner *p = o->in;
    if ((int8_t)p->f == 0) {
        p->vt[2](p);
    }
}
