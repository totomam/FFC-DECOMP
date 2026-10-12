#include "ffc/types.h"

extern void func_ov009_0219a014(uint32_t x);
extern void func_ov009_021a4d98(void *p);
extern void func_ov011_021c1358(void *p);
extern void func_ov011_021c144c(void *p);
extern void func_02069600(void *p);

typedef struct Vt {
    void *f0;
    void (*f1)(void *self);
} Vt;

typedef struct Obj {
    const Vt *vt;
} Obj;

void func_ov011_021c2b6c(void *a)
{
    uint8_t *p = (uint8_t *)a;
    Obj *o;
    func_ov009_0219a014(*(uint32_t *)(p + 0x170));
    func_ov009_021a4d98(a);
    func_ov011_021c1358(a);
    func_ov011_021c144c(a);
    o = *(Obj **)(p + 0x29c);
    if (o != 0) {
        func_02069600(a);
        o = *(Obj **)(p + 0x29c);
        if (o == 0) {
            return;
        }
        if (o != 0) {
            o->vt->f1(o);
        }
        *(uint32_t *)(p + 0x29c) = 0;
    }
}
