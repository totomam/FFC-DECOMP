#include "ffc/types.h"

extern char data_ov012_021d44ac[];
extern void func_02056844(void *self);

typedef void (*VFn)(void *self);

typedef struct Obj {
    void *vtbl;
    char pad[0x14];
    void *child;
} Obj;

Obj *func_ov012_021d27b0(Obj *p) {
    void *c;
    p->vtbl = (void *)data_ov012_021d44ac;
    c = p->child;
    if (c != 0) {
        if (c != 0) {
            VFn f = ((VFn *)(*(void **)c))[1];
            f(c);
        }
        p->child = 0;
    }
    func_02056844(p);
    return p;
}
