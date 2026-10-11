#include "ffc/types.h"

extern uint32_t func_ov004_02153114(uint32_t a);
extern uint32_t func_ov004_0214e6c4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

typedef struct {
    uint32_t pad0[3];
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    int32_t f24;
} Obj;

void func_ov004_02156690(Obj *p)
{
    uint32_t *q = &p->f1c;
    p->f24 = p->f24 - 1;
    if (p->f24 > 0) {
        uint32_t r = func_ov004_02153114(p->f14);
        if (func_ov004_0214e6c4(r, p->f18, q[0], q[1]) != 0) {
            return;
        }
    }
    p->f0c = (p->f0c & ~0xffu) | 2u;
}
