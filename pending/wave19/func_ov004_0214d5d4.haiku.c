#include "ffc/types.h"

typedef struct Vt {
    void *slots[14];
    int (*fn)(void *, int, int);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

void func_ov004_0214d5d4(uint8_t *p, int x) {
    if (x == 0) {
        return;
    }
    {
        int m = x ? 3 : 6;
        Obj *o = *(Obj **)(p + 0x9c);
        o->vt->fn(o, m, 0);
    }
}
