#include "ffc/types.h"

extern char data_ov011_021cbb98[];
extern void func_02056844(void *self);

typedef void (*VFn)(void *self);

typedef struct Obj {
    void *vtbl;
    char pad[0x14];
    void *child;
} Obj;

Obj *func_ov011_021c9afc(Obj *p) {
    void *c;
    p->vtbl = (void *)data_ov011_021cbb98;
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
