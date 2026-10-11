#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Big;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02065528(void *p);
extern void func_0205f52c(uint32_t x, Pair v);

typedef struct Inner Inner;
typedef Big (*VFn)(Inner *self);

struct Inner {
    VFn *vt;
};

typedef struct {
    Inner in;
} Outer;

void func_ov007_0219bb78(Outer *o)
{
    Big t1;
    Big t2;
    uint32_t r4;
    Pair s;
    uint32_t *u;

    func_02065528(o);

    t1 = o->in.vt[7](&o->in);

    r4 = t1.b;

    t2 = o->in.vt[7](&o->in);

    u = (uint32_t *)o;
    s.a = t2.a + u[0x84 / 4];
    s.b = r4 + u[0x88 / 4];

    func_0205f52c(*(uint32_t *)(u[0x80 / 4] + 0x94), s);
}
