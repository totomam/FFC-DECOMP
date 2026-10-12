#include "ffc/types.h"

extern void func_02056c9c(void *self, int x);
extern uint32_t func_ov004_02153114(uint32_t a);
extern uint32_t func_ov004_02153514(uint32_t a);
extern uint32_t data_ov004_021579d4[];
extern uint32_t data_ov004_021579e4[];

typedef struct { uint32_t a, b; } P;
typedef struct Obj {
    uint32_t vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
    uint32_t f94;
    uint32_t f98;
    uint32_t f9c;
    uint32_t fa0;
    uint8_t fa4;
} Obj;

void *func_ov004_0214536c(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t s5, uint32_t s6, uint32_t s7)
{
    Obj *o = (Obj *)self;
    uint8_t flag = 0;

    func_02056c9c(self, 0);
    o->vt = (uint32_t)data_ov004_021579d4;
    o->f88 = a;
    o->f8c = func_ov004_02153114(a);
    o->f90 = b;
    o->f94 = c;
    o->f98 = s5;
    o->f9c = s6;
    o->fa0 = s7;
    if (s5 == func_ov004_02153514(a)) {
        flag = 1;
    }
    o->fa4 = flag;
    *(P *)&o->f80 = *(P *)data_ov004_021579e4;
    return self;
}
