#include "ffc/types.h"

extern void *func_02081210(uint32_t v, void *p);

typedef void (*VFn)(void *out, void *self);
typedef struct { VFn *vtbl; } Obj;
typedef struct {
    uint8_t pad0[0x20];
    Obj *o;
    uint8_t pad1[0x14];
    void *p;
} Src;

typedef struct { uint32_t a; uint32_t b; } Slot;

void func_0206854c(uint32_t *out, Src *s)
{
    Slot zero;
    Slot tmp;
    Slot res;
    Slot *pv;
    void *p = s->p;

    if (p == 0) {
        zero.a = 0;
        pv = &zero;
    } else {
        s->o->vtbl[1](&tmp, s->o);
        res.a = (uint32_t)func_02081210(tmp.a << 12, p);
        pv = &res;
    }
    *out = pv->a;
}
