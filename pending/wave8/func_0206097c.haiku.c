#include "ffc/types.h"

typedef struct Inner {
    int32_t pad[3];
    int32_t cnt;
} Inner;

typedef struct Outer {
    uint8_t pad[0x54];
    Inner *inner;
} Outer;

void func_0206097c(Outer *o)
{
    o->inner->cnt--;
}
