#include "ffc/types.h"

typedef int (*VFn)(void *self, int lo, int hi, int one);

typedef struct Obj {
    VFn *vt;
    int f4;
    int f8;
    int fc;
    int pad[9];
    int f34;
} Obj;

int func_02097d78(void *p)
{
    Obj *o = (Obj *)p;
    int d = (o->fc - o->f8) * o->f34;
    if (d > 0) {
        d = (*(VFn **)p)[15](p, -d, -d >> 31, 1);
    }
    if (d < 0) {
        return -1;
    }
    {
        int a = o->f8;
        int b = o->f4;
        o->f8 = a;
        o->f4 = b;
        o->fc = a;
    }
    return 0;
}
