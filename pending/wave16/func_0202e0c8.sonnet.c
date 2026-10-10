#include "ffc/types.h"

extern uint32_t data_020aadd0[];
extern uint32_t data_020adb58[];
extern void func_0202de9c(void *p);

typedef struct {
    uint32_t *vtbl;
    uint32_t pad1[2];
    uint32_t flags;
    uint32_t pad2[1];
    uint32_t sub;
} Obj;

void *func_0202e0c8(Obj *p) {
    p->vtbl = data_020aadd0;
    p->flags = p->flags & ~0xffu;
    func_0202de9c(&p->sub);
    p->vtbl = data_020adb58;
    return p;
}
