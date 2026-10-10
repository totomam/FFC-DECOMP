#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov003_0217b064[];

typedef struct {
    volatile uint32_t x;
    volatile uint32_t y;
} Pair;

typedef struct {
    void *vt;
    uint8_t pad[0x80];
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
    uint32_t f94;
    uint32_t f98;
} Obj;

void *func_ov003_02167048(uint32_t a, Pair p, uint32_t d, uint32_t e, uint32_t f)
{
    Obj *o = (Obj *)func_0205681c(0x9c);
    if (o) {
        func_02056c9c(o, 0);
        o->vt = data_ov003_0217b064;
        o->f84 = a;
        o->f88 = p.x;
        o->f8c = p.y;
        o->f90 = d;
        o->f94 = e;
        o->f98 = f;
    }
    return o;
}
