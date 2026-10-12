#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b688(void *obj);
extern void func_ov003_021565a0(void *x);
extern Pair data_ov003_02179954;
extern Pair data_ov003_0217995c;
extern Pair data_ov003_02179964;
extern void *func_ov003_0214c3d0(void *obj, Pair d, Pair s, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b75c(uint32_t n);
extern void *func_ov003_0215b3c8(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_ov003_0214649c(void *obj);
extern void *func_ov003_02153cb4(void *obj, uint32_t a, uint32_t b);
extern void *func_ov003_0214daec(void *obj, void *n);
extern void *func_ov003_02155b40(void *x);
extern void *func_ov003_0214c118(void *obj, Pair d, Pair s, uint32_t f, uint32_t g, void *h);
extern void *func_ov003_021462d8(void *obj, Pair d);
extern void *func_ov003_0215b1d4(void *x);
extern void *func_02021610(void *x, uint32_t y);

void *func_ov003_0214c2c4(void *a0, void *a1, Pair s, uint32_t s0, uint32_t s1, void *s2)
{
    void *r4;
    void *r5;
    void *r6;
    void *t;
    Pair d;

    r5 = a0;
    r4 = func_0203b688(a0);
    func_ov003_021565a0(a1);
    if (s0 != 0x80000000u) {
        d = data_ov003_02179954;
        t = func_ov003_0214c3d0(r5, d, s, s0);
        func_02056bc0(r4, t);
    }
    r6 = func_0203b75c(15);
    t = func_ov003_0215b3c8(a1, s1, 0, 0x1000, 0, 0, 0);
    func_02056bc0(r4, t);
    func_02056bc0(r4, r6);
    if (s0 != 0x80000000u) {
        t = func_ov003_0214649c(r5);
        t = func_ov003_02153cb4(t, s.a, s.b);
        r6 = func_ov003_0214daec(r5, t);
        t = func_ov003_02155b40(a1);
        d = data_ov003_0217995c;
        t = func_ov003_0214c118(r5, d, s, s0, *(uint16_t *)((uint8_t *)t + 0x10), r6);
        func_02056bc0(r4, t);
    }
    d = data_ov003_02179964;
    r5 = func_ov003_021462d8(r5, d);
    r6 = func_ov003_0215b1d4(a1);
    t = func_02021610(s2, 0);
    func_02056bc0(r4, t);
    func_02056bc0(r4, r6);
    func_02056bc0(r4, r5);
    return r4;
}
