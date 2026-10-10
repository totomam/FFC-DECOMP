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
    Obj *s = p;
    uint32_t v = s->flags;
    s->vtbl = data_020aadd0;
    v &= ~0xffu;
    s->flags = v;
    func_0202de9c(&s->sub);
    s->vtbl = data_020adb58;
    return s;
}
