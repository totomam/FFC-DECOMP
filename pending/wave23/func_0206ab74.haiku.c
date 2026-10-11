#include "ffc/types.h"

typedef struct Obj {
    void **vt;
    uint32_t pad4;
    uint32_t pad8;
    uint32_t padc;
    uint32_t pad10;
    uint32_t f14;
} Obj;

extern void *data_0213e098;
extern uint32_t data_0213df20;
extern void func_02055070(void *);
extern void func_0205509c(void *);

void func_0206ab74(Obj *a) {
    Obj *o;
    func_02055070(data_0213e098);
    data_0213df20 = a->f14;
    o = a;
    ((void (*)(Obj *))o->vt[3])(o);
    a->padc = (a->padc & ~0xffu) | 2;
    func_0205509c(data_0213e098);
}
