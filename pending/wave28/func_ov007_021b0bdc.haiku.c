#include "ffc/types.h"

extern void func_02056c9c(void *p, int v);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_ov007_021c5b9c[];
extern uint32_t data_ov007_021c5c4c[];

typedef struct {
    uint32_t vt;
    uint32_t pad[0x1f];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
} Obj;

void *func_ov007_021b0bdc(void *self, uint32_t a, uint32_t b)
{
    Obj *o = (Obj *)self;
    uint32_t *m;

    func_02056c9c(self, 0);
    o->vt = (uint32_t)data_ov007_021c5b9c;
    o->f88 = b;
    o->f90 = a;
    m = func_0205681c(0x204);
    if (m != 0) {
        *m = 0x02194a64;
    }
    o->f8c = (uint32_t)m;
    o->f80 = data_ov007_021c5c4c[0];
    o->f84 = data_ov007_021c5c4c[1];
    return self;
}
