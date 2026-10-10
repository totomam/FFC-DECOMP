#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x24];
    uint8_t flag;
} Inner;

typedef struct Outer {
    uint8_t pad[0x14];
    Inner *inner;
} Outer;

void func_02072f78(Outer *p)
{
    p->inner->flag = 0;
}
