#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint8_t f38;
} S02097a18;

void func_02097a18(S02097a18 *p) {
    uint8_t fl;
    uint32_t base;
    uint32_t t;
    p->f04 = 0;
    p->f08 = 0;
    p->f0c = 0;
    fl = p->f38;
    base = p->f20;
    if (fl != 0) {
        t = p->f1c;
        p->f14 = base;
        p->f10 = base;
        p->f18 = base + (t << 1) - 2;
    } else {
        p->f14 = base;
        p->f10 = base;
        p->f18 = base;
    }
    p->f28 = p->f20;
    p->f24 = p->f20;
    p->f2c = p->f20 + (p->f1c << 1);
}
