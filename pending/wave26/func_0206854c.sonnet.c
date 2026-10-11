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
    struct { uint32_t pad[5]; Slot r; Slot t; Slot z; } L;
    Slot *pv;
    void *p = s->p;

    if (p == 0) {
        L.z.a = 0;
        pv = &L.z;
    } else {
        s->o->vtbl[1](&L.t, s->o);
        L.r.a = (uint32_t)func_02081210(L.t.a << 12, p);
        pv = &L.r;
    }
    *out = pv->a;
}
