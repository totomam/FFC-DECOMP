#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x10];
    uint32_t f : 2;
    uint32_t rest : 30;
} Inner;

typedef struct Outer {
    uint8_t pad[0x20];
    Inner *inner;
} Outer;

uint32_t func_ov002_0219d0c4(Outer *o)
{
    if (o->inner != 0) {
        return o->inner->f;
    }
    return 0;
}
