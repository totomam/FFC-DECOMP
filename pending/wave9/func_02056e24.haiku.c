#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0xc];
    uint32_t f;
} Inner;

typedef struct Outer {
    uint8_t pad[0x14];
    Inner *inner;
} Outer;

void func_02056e24(Outer *p) {
    Inner *q = p->inner;
    q->f = (q->f & ~0xffu) | 2;
}
