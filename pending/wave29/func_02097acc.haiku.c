#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    int32_t **vt;
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t pad[(0x34 - 0x10) / 4];
    int32_t d;
};

int32_t func_02097acc(Obj *p) {
    int32_t r;
    int32_t n = ((p->c - p->b) / 2) * p->d;
    r = n;
    if (n > 0) {
        int32_t (*f)(Obj *, int32_t, int32_t, int32_t) = (int32_t (*)(Obj *, int32_t, int32_t, int32_t))p->vt[15];
        r = f(p, -n, (-n) >> 31, 1);
    }
    if (r < 0) {
        return -1;
    }
    {
        int32_t t1 = p->b;
        int32_t t0 = p->a;
        p->b = t1;
        p->a = t0;
        p->c = t1;
    }
    return 0;
}
