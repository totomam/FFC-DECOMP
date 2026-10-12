#include "ffc/types.h"

extern char data_020b0d84[];
extern int func_02057db4(void *p);
extern void func_02088f30(void);

typedef struct Obj {
    void (**vt)(void *);
} Obj;

typedef struct Thing {
    void *vtbl;
    uint8_t pad0[0x10 - 4];
    Obj *f10;
    uint8_t pad1[0x34 - 0x14];
    Obj *f34;
    Obj *arr[4];
} Thing;

Thing *func_02059150(Thing *p) {
    uint32_t i;
    p->vtbl = data_020b0d84;
    if (func_02057db4(p->f10) == 0) {
        func_02088f30();
    }
    for (i = 0; i < 4; i++) {
        Obj *o = p->arr[i];
        if (o) {
            o->vt[1](o);
        }
    }
    if (p->f10) {
        p->f10->vt[1](p->f10);
    }
    if (p->f34) {
        p->f34->vt[1](p->f34);
    }
    return p;
}
