#include "ffc/types.h"

extern void func_02055b88(void *self, uint32_t v);
extern void func_0200d5ec(void *p);
extern char data_020b0688[];

typedef struct Obj {
    void *vtbl;
    uint32_t *f4;
    uint32_t f8;
} Obj;

Obj *func_02055a5c(Obj *p)
{
    p->vtbl = data_020b0688;
    while (p->f8 != 0) {
        func_02055b88(p, *p->f4);
    }
    func_0200d5ec(&p->f4);
    return p;
}
