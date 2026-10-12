#include "ffc/types.h"

typedef struct Sub { uint8_t pad[4]; uint32_t f4; } Sub;
typedef struct Obj {
    uint8_t pad0[4];
    uint32_t f4;
    uint32_t f8;
    uint8_t pad1[4];
    Sub *f10;
    uint8_t pad2[8];
    uint32_t f1c;
} Obj;

extern uint32_t func_02056830(uint32_t x);
extern void func_020584cc(int32_t a, uint32_t ret, uint32_t half, int32_t b, int32_t c);
extern void func_02058560(Sub *obj, uint32_t ret, uint32_t r2, uint32_t half);
extern void func_020586e8(Sub *obj, uint32_t ret, uint32_t r2, uint32_t r3, int32_t one);

void func_02058294(Obj *p, int32_t a, int32_t b, int32_t c, int32_t d, int32_t e)
{
    uint32_t v1;
    uint32_t v0;
    uint32_t *pv;
    uint32_t r4;
    uint32_t r6;
    uint32_t ret;
    uint32_t half;

    v0 = (uint32_t)e * p->f1c;
    v1 = p->f8 - (uint32_t)d * p->f1c;
    pv = (v0 < v1) ? &v0 : &v1;
    r4 = *pv;
    r6 = p->f4 + (uint32_t)d * p->f1c;
    if (r6 == p->f10->f4) {
        a += 2;
        r6 += 2;
        r4 -= 2;
    }
    ret = func_02056830(r4 & ~1u);
    half = r4 >> 1;
    func_020584cc(a, ret, half, b, c);
    func_02058560(p->f10, ret, ret, half);
    func_020586e8(p->f10, ret, r6, r4, 1);
}
