#include "ffc/types.h"

extern void func_0204fb04(int32_t *out, int32_t v);
extern void func_0204fe4c(int32_t a0, int32_t a1, int32_t a2, int32_t a3,
                          int32_t a4, int32_t a5, int32_t a6, int32_t a7,
                          int32_t a8, int32_t a9, int32_t a10, int32_t a11,
                          int32_t a12, int32_t a13);

struct S {
    int32_t pad[5];
    int32_t f14, f18, f1c, f20, f24, f28, f2c, f30, f34, f38, f3c;
    uint16_t h40;
    uint16_t h42;
};

void func_0204fcd0(struct S *p)
{
    int32_t tmp[2];
    int32_t r6, r4, s5, m, f38, f3c;
    uint16_t h42;
    int32_t f14, f18, f1c, f20, f24, f30, f34, t, h40, s2c, s28;

    func_0204fb04(tmp, p->f34);
    r6 = tmp[0] >> 3;
    f38 = p->f38;
    m = r6 - 1;
    f3c = p->f3c;
    r4 = f38 & m;
    t = f3c & m;
    p->f3c = t;
    h42 = p->h42;
    h40 = p->h40;
    p->f38 = r4;
    f34 = p->f34;
    f30 = p->f30;
    s2c = p->f2c;
    s2c = s2c - ((volatile struct S *)p)->f24;
    s28 = p->f28;
    s28 = s28 - ((volatile struct S *)p)->f20;
    f24 = p->f24;
    f20 = p->f20;
    f1c = p->f1c;
    f18 = p->f18;
    f14 = p->f14;

    if (r4 + s28 < r6) {
        func_0204fe4c(r6, f14, f18, f1c, f20, f24, s28, s2c, f30, f34, r4, t, h40, h42);
        return;
    }

    if (!(h42 & 0x400)) {
        func_0204fe4c(r6, f14, f18, f1c, f20, f24, r6 - r4, s2c, f30, f34, r4, t, h40, h42);
        func_0204fe4c(r6, f14, f18, f1c, f20 + r6 - r4, f24, s28 - (r6 - r4), s2c, f30, f34, 0, t, h40, h42);
    } else {
        s5 = r6 - r4;
        func_0204fe4c(r6, f14, f18, f1c, f20 + s28 - s5, f24, s5, s2c, f30, f34, r4, t, h40, h42);
        func_0204fe4c(r6, f14, f18, f1c, f20, f24, s28 - s5, s2c, f30, f34, 0, t, h40, h42);
    }
}
