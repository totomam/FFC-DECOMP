#include "ffc/types.h"

extern void func_ov000_0215b37c(void);

typedef struct Inner {
    uint8_t pad[0x21];
    uint8_t b21;
    uint8_t b22;
    uint8_t b23;
    uint8_t b24;
} Inner;

typedef struct Outer {
    uint32_t pad[3];
    uint32_t flags;
    uint32_t pad2[1];
    Inner *inner;
} Outer;

void func_02072ed8(Outer *s) {
    Inner *in = s->inner;
    if (in->b24 != 0) {
        return;
    }
    if (in->b23 != 0) {
        return;
    }
    func_ov000_0215b37c();
    s->inner->b22 = 1;
    s->inner->b21 = 0;
    s->flags = (s->flags & ~0xffu) | 2;
}
