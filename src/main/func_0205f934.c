#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x3c];
    uint8_t flag;
} Inner;

typedef struct Outer {
    uint8_t pad[0x14];
    Inner *inner;
} Outer;

void func_0205f934(Outer *p)
{
    p->inner->flag = 0;
}
