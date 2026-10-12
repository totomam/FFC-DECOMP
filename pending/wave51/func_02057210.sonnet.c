/* cflags: -lang c++ */
#include "ffc/types.h"
inline const int32_t &mx(const int32_t &a, const int32_t &b) { return (a < b) ? b : a; }

extern "C" int32_t func_0208f694(int32_t value);
extern "C" int32_t func_0209a76c(int32_t x, int32_t y);
extern "C" int data_020b0c4c;

struct S {
    void *vt;
    uint32_t p4[2];
    uint32_t f0c;
    uint8_t p10[3];
    uint8_t b13;
    uint8_t b14;
    uint8_t b15;
    uint8_t p16[6];
    int32_t f1c;
    uint32_t p20;
    int32_t f24;
    uint32_t p28;
    int32_t f2c;
    uint32_t p30;
    uint32_t p34;
    uint32_t p38;
    int32_t f3c;
    int32_t f40;
    int32_t f44;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
};

struct Q {
    int32_t a, b, c, d;
};

extern "C" struct S *func_02057210(struct S *p, struct Q q)
{
    int32_t e, v, t;

    p->f0c &= ~0xffu;
    p->f1c = -1;
    p->f24 = -1;
    p->f2c = 1;
    p->vt = &data_020b0c4c;
    p->f3c = q.a;
    p->f44 = q.c;
    p->b13 = 0;
    p->b14 = 0;
    p->b15 = 0;
    *(uint32_t *)((char *)p + 0x30) = 0;
    p->f40 = q.b;
    p->f48 = q.d;

    e = func_0208f694(q.b - q.d);
    v = func_0208f694(q.a - q.c);
    t = mx(e, v);

    p->f1c = t + 1;
    p->f4c = func_0209a76c((q.c - q.a) << 16, p->f1c - 1);
    p->f50 = func_0209a76c((q.d - q.b) << 16, p->f1c - 1);
    return p;
}
