#include "ffc/types.h"

extern char data_020a7dd0[];
extern void func_0205f7d8(void *self);

typedef void (*VFn)(void *self);

typedef struct Obj {
    void *vtbl;
    char pad[0x4c];
    void *child;
} Obj;

Obj *func_02005898(Obj *p) {
    void *c;
    p->vtbl = (void *)data_020a7dd0;
    c = p->child;
    if (c != 0) {
        if (c != 0) {
            VFn f = ((VFn *)(*(void **)c))[1];
            f(c);
        }
        p->child = 0;
    }
    func_0205f7d8(p);
    return p;
}
