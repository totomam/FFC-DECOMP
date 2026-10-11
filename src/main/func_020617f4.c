#include "ffc/types.h"

typedef struct {
    void *vt;
    uint32_t pad[5];
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
} Obj;

extern void func_02061314(void *object);
extern char data_020b13f0[];

void *func_020617f4(void *p) {
    Obj *o = (Obj *)p;
    uint32_t *q;
    func_02061314(p);
    o->vt = data_020b13f0;
    q = &o->f18;
    o->f18 = 0;
    q[1] = 0;
    q[2] = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0x7fffffff;
    o->f30 = 0x7fffffff;
    return p;
}
