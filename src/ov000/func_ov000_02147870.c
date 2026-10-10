#include "ffc/types.h"

struct Target {
    uint8_t pad[0x44];
    uint32_t v;
};

struct Inner {
    uint8_t pad[0xa4];
    struct Target *t;
};

struct Outer {
    uint32_t a;
    struct Inner *inner;
};

extern struct Outer data_02141510;

void func_ov000_02147870(uint32_t r0) {
    struct Target *t = data_02141510.inner->t;
    if (t) {
        t->v = r0;
    }
}
