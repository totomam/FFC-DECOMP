#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t vt;
    uint32_t pad[0x20 - 1];
    Pair f80;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
} Obj;

extern void func_02056c9c(void *p, uint32_t x);
extern void func_02056830(uint32_t x);
extern uint32_t data_ov007_021c57b8[];
extern Pair data_ov007_021c5a7c;

Obj *func_ov007_021afba4(Obj *p, uint32_t a)
{
    func_02056c9c(p, 0);
    p->vt = (uint32_t)data_ov007_021c57b8;
    p->f88 = a;
    p->f8c = 0;
    p->f90 = 0;
    func_02056830(0x8000);
    p->f80 = data_ov007_021c5a7c;
    return p;
}
