#include "ffc/types.h"

extern int func_ov007_021c0d80(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct Inner {
    uint32_t pad0;
    uint32_t x;
    uint32_t y;
} Inner;

typedef struct Outer {
    uint32_t pad[2];
    Inner *b;
    uint32_t c;
} Outer;

int func_ov007_021c12a0(Outer *a)
{
    Inner *b = a->b;
    return func_ov007_021c0d80(a, a->c + 4, a->c, b->y, b->x);
}
