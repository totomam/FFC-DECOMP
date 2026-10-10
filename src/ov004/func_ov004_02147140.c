#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t vt;
    uint8_t pad[0x7c];
    Pair s80;
    uint32_t f88;
    uint32_t f8c;
} Obj;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov004_02157c58;
extern Pair data_ov004_02157d9c;

Obj *func_ov004_02147140(Obj *o, uint32_t b, uint32_t c)
{
    func_02056c9c(o, 0);
    o->vt = (uint32_t)&data_ov004_02157c58;
    o->f88 = b;
    o->f8c = c;
    o->s80 = data_ov004_02157d9c;
    return o;
}
