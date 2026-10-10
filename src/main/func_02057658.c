#include "ffc/types.h"

extern uint8_t data_020b0c94[];

typedef struct VT {
    void *slot0;
    void (*slot1)(void *);
} VT;

typedef struct Obj {
    void *vtbl;
    uint8_t pad[0x20];
    struct Obj *child;
} Obj;

Obj *func_02057658(Obj *p)
{
    p->vtbl = data_020b0c94;
    if (p->child != 0) {
        ((VT *)p->child->vtbl)->slot1(p->child);
    }
    return p;
}
