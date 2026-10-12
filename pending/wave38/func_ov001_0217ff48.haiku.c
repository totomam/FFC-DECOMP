#include "ffc/types.h"

struct Inner {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
};

struct Outer;
typedef void (*OuterCb)(struct Outer *, uint32_t, uint32_t, uint32_t);

struct Outer {
    uint32_t f00;
    uint32_t f04;
    struct Inner *inner;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    OuterCb cb;
};

extern void func_ov001_02181ddc(struct Inner *in);

int func_ov001_0217ff48(struct Outer *p, uint32_t a, uint32_t b, uint32_t c)
{
    struct Inner *in;
    OuterCb cb;

    if (p == 0) {
        return 1;
    }
    if (p->cb == 0) {
        p->f18 = a;
        return 1;
    }
    p->f18 = a;
    if (c == 0 || b == 0) {
        b = 0;
        c = 0;
    }
    p->f24++;
    in = p->inner;
    in->f1c++;
    cb = p->cb;
    cb(p, a, b, c);
    p->f24--;
    p->inner->f1c--;
    in = p->inner;
    if (in->f14 != 0 && in->f1c == 0) {
        func_ov001_02181ddc(in);
        return 0;
    }
    return 1;
}
