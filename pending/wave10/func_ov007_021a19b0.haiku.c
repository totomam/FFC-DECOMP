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
    uint32_t f90;
    uint32_t f94;
} Obj;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov007_021c37f8;
extern Pair data_ov007_021c3b5c;

Obj *func_ov007_021a19b0(Obj *o, uint32_t b, uint32_t c)
{
    func_02056c9c(o, 0);
    o->vt = (uint32_t)&data_ov007_021c37f8;
    o->f88 = b;
    o->f94 = 0;
    o->s80 = data_ov007_021c3b5c;
    return o;
}
