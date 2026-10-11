#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} S;

void func_020576d4(S *p, S *s) {
    uint32_t t = p->f4;
    uint32_t u = s->f4;
    uint32_t v;
    uint32_t w;
    uint32_t c;
    p->f8 = t;
    v = s->f0;
    p->f1c = u;
    w = s->f8;
    c = p->fc;
    p->f4 = v;
    p->f20 = w;
    if (c != 0) {
        if (v & c) {
            if (--p->f18 == 0) {
                p->f18 = p->f14;
                p->f4 = v & ~c;
            }
        } else {
            p->f18 = p->f10;
        }
    }
}
