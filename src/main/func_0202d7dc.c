#include "ffc/types.h"

extern void func_0202b20c(void *p);

typedef struct Obj {
    uint32_t w0;
    struct Obj *next;
    uint32_t w8;
    uint32_t flags;
    uint8_t pad[0x41 - 0x10];
    uint8_t f41;
    uint8_t f42;
    uint8_t f43;
} Obj;

typedef struct Parent {
    uint8_t pad[0x5c];
    Obj *child;
} Parent;

void func_0202d7dc(Parent *p) {
    Obj *o = p->child;
    while (o != 0) {
        func_0202b20c(o);
        o->flags &= ~0xffu;
        o->f43 = 1;
        o->f41 = 1;
        o = o->next;
    }
}
