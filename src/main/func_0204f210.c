#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x38];
    uint32_t f7c;
} Inner;

typedef struct Outer {
    uint8_t pad[8];
    Inner *p8;
} Outer;

uint32_t func_0204f210(Outer *p)
{
    return p->p8->f7c;
}
