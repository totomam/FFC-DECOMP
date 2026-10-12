#include "ffc/types.h"

typedef struct VT { uint32_t a; void (*f)(void *); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct S {
    uint8_t pad0[0x48];
    uint8_t x48[0x3c];
    Obj *o84;
    uint8_t pad[0x14];
    uint32_t v9c;
    uint32_t va0;
} S;

extern uint32_t data_020b93b8;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02056bf4(void *p);
extern void func_ov003_021516d4(void *p, uint32_t v);

void func_ov003_0215183c(S *p)
{
    uint32_t v = func_0201c9ac(data_020b93b8, 0x48);
    if (p->va0 == v) return;
    if (p->o84) {
        func_02056bf4(p->x48);
        if (p->o84) {
            Obj *o = p->o84;
            if (o) o->vt->f(o);
            p->o84 = 0;
        }
    }
    func_ov003_021516d4(p, p->v9c);
}
