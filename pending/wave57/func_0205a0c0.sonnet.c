#include "ffc/types.h"

extern uint32_t func_02059dd4(uint32_t p, uint32_t v);
extern uint32_t func_02059de4(uint32_t p, uint32_t v);
extern void func_0205a260(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                          uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7,
                          uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11,
                          uint32_t a12, uint32_t a13);

typedef struct {
    uint32_t pad[5];
    uint32_t f14, f18, f1c, f20, f24, f28, f2c, f30;
    uint32_t f34;
    uint32_t f38, f3c;
    uint16_t f40, f42;
} S;

void func_0205a0c0(S *a)
{
    uint32_t s50 = 0;
    uint32_t r4, f3c, s28, s2c, s3c, s40, s44, s48, s4c, s38;
    uint32_t f40, f42;

    if (a->f38 & 0x20) {
        s50 = func_02059dd4(a->f34, s50);
    }
    if (a->f3c & 0x20) {
        s50 = func_02059de4(a->f34, s50);
    }
    r4 = a->f38 & 0x1f;
    f3c = a->f3c & 0x1f;
    a->f38 = r4;
    a->f3c = f3c;
    f42 = a->f42;
    f40 = a->f40;

    s38 = a->f30;
    s2c = a->f2c - a->f24;
    s28 = a->f28 - a->f20;
    s3c = a->f24;
    s40 = a->f20;
    s44 = a->f1c;
    s48 = a->f18;
    s4c = a->f14;

    if ((int32_t)(r4 + s28) < 0x20) {
        func_0205a260(s4c, s48, s44, s40, s3c, s28, s2c, s38, a->f34, s50, r4, f3c, f40, f42);
        return;
    }
    if (!(f42 & 0x400)) {
        uint32_t r5 = 0x20 - r4;
        func_0205a260(s4c, s48, s44, s40, s3c, r5, s2c, s38, a->f34, s50, r4, f3c, f40, f42);
        s50 = func_02059dd4(a->f34, s50);
        s40 += 0x20;
        func_0205a260(s4c, s48, s44, s40 - r4, s3c, s28 - r5, s2c, s38, a->f34, s50, 0, f3c, f40, f42);
    } else {
        uint32_t r5 = 0x20 - r4;
        func_0205a260(s4c, s48, s44, s28 + s40 - r5, s3c, r5, s2c, s38, a->f34, s50, r4, f3c, f40, f42);
        s50 = func_02059dd4(a->f34, s50);
        func_0205a260(s4c, s48, s44, s40, s3c, s28 - r5, s2c, s38, a->f34, s50, 0, f3c, f40, f42);
    }
}
