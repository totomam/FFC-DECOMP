#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov002_021b78f4(uint8_t *p, Pair s) {
    if (p[0x10e4]) {
        Pair t;
        uint32_t *q;
        t = s;
        q = *(uint32_t **)(p + 0x88);
        q[7] = t.a;
        q[8] = t.b;
    } else {
        *(uint32_t *)(p + 0x10e8) = s.a;
        *(uint32_t *)(p + 0x10ec) = s.b;
    }
}
