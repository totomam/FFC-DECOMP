#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_02060e88(void *p, int v);
extern void func_02060ea4(void *p, int v);
extern void func_02059698(void *a, void *b);
extern void func_ov003_02148fac(void *p);
extern void func_02056db0(void *p);
extern uint32_t data_ov003_0217bad0[];

typedef struct Obj {
    void *vt;
    uint8_t pad0[0x7c];
    void *p80;
    void *p84;
    uint8_t pad1[0x10];
    void *p98;
    void *p9c;
    void *pa0;
} Obj;

typedef struct Inner {
    uint8_t pad0[0x188];
    void *f188;
    uint8_t pad1[0x214 - 0x18c];
    void *f214;
} Inner;

typedef struct Leaf {
    uint8_t pad0[0xc];
    uint32_t f0c;
} Leaf;

typedef struct Sub {
    uint8_t pad0[0x14];
    void *f14;
    uint8_t pad1[0x24 - 0x18];
    void *f24;
} Sub;

void *func_ov003_02176a20(void *a)
{
    Obj *o = (Obj *)a;
    Leaf *r;

    o->vt = data_ov003_0217bad0;
    if (o->p9c != 0) {
        func_02056858(o->p9c);
        o->p9c = 0;
    }
    if (o->pa0 != 0) {
        func_02056858(o->pa0);
        o->pa0 = 0;
    }
    func_02060e88(((Sub *)o->p98)->f24, 2);
    func_02060ea4(((Sub *)o->p98)->f24, 0x10);
    func_02059698(((Sub *)o->p98)->f14, o->p84);
    *(uint32_t *)((Inner *)o->p80)->f214 = 0;
    r = (Leaf *)((Inner *)o->p80)->f188;
    r->f0c &= ~0xffu;
    func_ov003_02148fac(o->p80);
    func_02056db0(o);
    return o;
}
