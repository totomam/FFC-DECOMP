#include "ffc/types.h"

typedef struct {
    uint8_t b;
} Byte4;

extern void func_ov003_0216a4a8(void *a, void *b, void *c, Byte4 d);
extern char data_ov003_0217abe4[];

typedef struct {
    uint32_t base;
    uint32_t count;
} Range;

typedef struct {
    void *vt;
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
} Obj;

Obj *func_ov003_02165b98(Obj *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                         uint32_t e, Range *r, uint32_t f)
{
    Byte4 loc;
    o->f0c &= ~0xffu;
    o->f14 = a;
    o->vt = data_ov003_0217abe4;
    o->f20 = d;
    o->f1c = c;
    o->f24 = e;
    uint32_t *p = &o->f28;
    o->f18 = b;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    func_ov003_0216a4a8(p, (void *)r->base, (void *)(r->base + r->count * 4), loc);
    o->f34 = f;
    return o;
}
