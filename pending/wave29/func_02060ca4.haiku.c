#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} Quad;

typedef struct {
    void *vt;
    uint32_t pad1;
    uint32_t pad2;
    uint32_t flags;
    uint32_t pad3;
    void *p;
    uint32_t s[4];
} Obj;

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b133c[];

void *func_02060ca4(void *p, Quad q)
{
    Obj *o = (Obj *)func_0205681c(0x28);
    if (o != 0) {
        Quad t = q;
        o->flags &= ~0xffu;
        o->vt = data_020b133c;
        o->p = p;
        o->s[0] = t.w[0];
        o->s[1] = t.w[1];
        o->s[2] = t.w[2];
        o->s[3] = t.w[3];
    }
    return o;
}
