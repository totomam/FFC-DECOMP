#include "ffc/types.h"

extern uint8_t data_020b2518[];
extern void func_02056844(void *p);

typedef struct {
    void *vt;
    uint32_t f4;
    void *f8;
    uint8_t fc;
} Obj;

Obj *func_02071f2c(Obj *p)
{
    p->vt = data_020b2518;
    if (p->fc != 0) {
        func_02056844(p->f8);
        p->f8 = 0;
    }
    func_02056844(p);
    return p;
}
