#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint32_t f84;
    Pair s88;
} Obj;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov007_021c4424;
extern Pair data_ov007_021c45cc;

Obj *func_ov007_021a76b4(Obj *o, uint32_t b, uint32_t c)
{
    func_02056c9c(o, 0);
    o->vt = (uint32_t)&data_ov007_021c4424;
    o->f80 = b;
    o->f84 = 0;
    o->s88 = data_ov007_021c45cc;
    return o;
}
