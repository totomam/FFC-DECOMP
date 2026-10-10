#include "ffc/types.h"

extern int32_t func_02073898(uint32_t v);

typedef struct Inner {
    uint32_t pad[11];
    uint32_t f2c;
} Inner;

typedef struct Outer {
    uint32_t pad[16];
    Inner *f40;
} Outer;

int32_t func_02075aac(Outer *p)
{
    uint32_t v = p->f40->f2c;
    if (v != 0) {
        return func_02073898(v);
    }
    return 0;
}
