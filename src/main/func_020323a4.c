#include "ffc/types.h"

extern char data_020ae018[];
extern void func_02062868(void *self);

typedef void (*VFn)(void *self);

typedef struct Obj {
    void *vtbl;
    char pad[0x10];
    void *child;
} Obj;

Obj *func_020323a4(Obj *p) {
    void *c;
    p->vtbl = (void *)data_020ae018;
    c = p->child;
    if (c != 0) {
        if (c != 0) {
            VFn f = ((VFn *)(*(void **)c))[1];
            f(c);
        }
        p->child = 0;
    }
    func_02062868(p);
    return p;
}
