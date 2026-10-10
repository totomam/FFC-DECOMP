#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x18];
    uint32_t sh;
} Inner;

typedef struct Outer {
    uint8_t pad[0x20];
    Inner *in;
} Outer;

uint32_t func_0205e234(Outer *o)
{
    return 1 << o->in->sh;
}
