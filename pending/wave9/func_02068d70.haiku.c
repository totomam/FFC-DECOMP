#include "ffc/types.h"

typedef struct {
    uint32_t a, b;
} Pair;

typedef struct Sub Sub;
struct Sub {
    uint32_t (**vt)(Sub *, Pair);
};

typedef struct Outer {
    uint8_t pad[0x1c];
    Sub *sub;
} Outer;

uint32_t func_02068d70(Outer *p, Pair s) {
    return p->sub->vt[3](p->sub, s);
}
