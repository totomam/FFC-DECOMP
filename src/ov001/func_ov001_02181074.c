#include "ffc/types.h"

typedef struct Elem {
    uint8_t pad[8];
    uint16_t h;
} Elem;

typedef struct Obj {
    uint8_t pad[0x60];
    void *list;
} Obj;

extern int func_ov001_02180844(void *p, int x);
extern int func_ov001_021808cc(void *p);
extern int func_ov000_02168768(void *p);
extern Elem *func_ov000_0216876c(void *p, int i);
extern int func_ov001_02180868(uint16_t h, int v);
extern int func_ov001_02181b90(void *p, Elem *e);

int func_ov001_02181074(void *p0, void *p1, int arg2)
{
    Obj *o = (Obj *)p0;
    volatile int a = func_ov001_02180844(p1, 0);
    volatile int b;
    int i;
    int n;

    if (arg2 == 2) {
        b = a;
    } else if (arg2 == 4) {
        b = func_ov001_02180844(p1, 2);
    } else {
        int r = 0;
        if (func_ov001_021808cc(p0) != 0) {
            r = 1;
        }
        return r;
    }

    n = func_ov000_02168768(o->list);
    for (i = 0; i < n; i++) {
        Elem *e = func_ov000_0216876c(o->list, i);
        if (func_ov001_02180868(e->h, a) < 0) {
            continue;
        }
        if (func_ov001_02180868(e->h, b) > 0) {
            continue;
        }
        if (func_ov001_02181b90(p0, e) != 0) {
            continue;
        }
        {
            return 0;
        }
    }
    return 1;
}
