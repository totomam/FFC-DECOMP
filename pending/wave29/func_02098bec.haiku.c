#include "ffc/types.h"

extern void func_02090398(int32_t a, int32_t b, int32_t c);

typedef struct Obj {
    void **vtbl;
    int32_t f1;
    int32_t f2;
    int32_t f3;
    int32_t f4;
    int32_t f5;
    int32_t f6;
    int32_t f7;
} Obj;

int32_t func_02098bec(Obj *p)
{
    int32_t d = p->f2 - p->f1;
    int32_t r;
    Obj *o;
    if (d > 4) {
        int32_t x;
        func_02090398(p->f1, p->f2 - 4, 4);
        d = 4;
        x = p->f1;
        p->f1 = x;
        p->f2 = x + 4;
        p->f3 = x + 4;
    }
    o = p;
    r = ((int32_t (*)(Obj *, int32_t, int32_t))o->vtbl[14])(o, p->f2, p->f7 - d);
    if (r > 0) {
        int32_t f2 = p->f2;
        int32_t f1 = p->f1;
        int32_t s = f2 + r;
        p->f3 = s;
        p->f1 = f1;
        p->f2 = f2;
        return s - f2;
    }
    return r;
}
