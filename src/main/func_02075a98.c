#include "ffc/types.h"

extern int32_t func_02072458(uint32_t v);

typedef struct Inner {
    uint32_t pad[10];
    uint32_t f28;
} Inner;

typedef struct Outer {
    uint32_t pad[16];
    Inner *f40;
} Outer;

int32_t func_02075a98(Outer *p)
{
    uint32_t v = p->f40->f28;
    if (v != 0) {
        return func_02072458(v);
    }
    return 0;
}
