#include "ffc/types.h"

extern void func_0204e84c(void *a, void *b);
extern void func_02056844(void *p);
extern uint8_t data_020b0344[];

typedef struct {
    void *vtbl;
    void *f4;
} Obj;

Obj *func_0204f43c(Obj *p)
{
    p->vtbl = data_020b0344;
    func_0204e84c(p->f4, p);
    func_02056844(p);
    return p;
}
