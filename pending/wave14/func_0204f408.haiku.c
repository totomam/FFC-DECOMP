#include "ffc/types.h"

extern uint8_t data_020b0344[];
extern void func_0204e7f4(uint32_t a, void *b);

typedef struct {
    void *vt;
    uint32_t v;
} Obj;

void *func_0204f408(Obj *p, uint32_t x)
{
    p->v = x;
    p->vt = data_020b0344;
    func_0204e7f4(x, p);
    return p;
}
