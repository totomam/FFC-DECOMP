#include "ffc/types.h"

extern uint32_t data_020aadbc;
extern void func_0204f208(uint32_t a, uint32_t b);
extern void *func_02056844(void *p);

typedef struct {
    uint32_t vt;
    uint32_t pad[4];
    uint32_t f14;
    uint32_t f18;
} Obj;

void *func_02009a00(void *self) {
    Obj *p = (Obj *)self;
    p->vt = (uint32_t)&data_020aadbc;
    if (p->f18 != 0) {
        if (p->f18 != 0) {
            void *o = (void *)p->f18;
            void **vt = *(void ***)o;
            ((void (*)(void *))vt[1])(o);
        }
        p->f18 = 0;
    }
    func_0204f208(p->f14, 0);
    func_02056844(p);
    return p;
}
