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
    uint8_t pad2[0xc];
    uint32_t f98;
} Obj;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov007_021c25b8;
extern Pair data_ov007_021c2814;

Obj *func_ov007_02199d34(Obj *o, uint32_t b, uint32_t c)
{
    func_02056c9c(o, 0);
    o->vt = (uint32_t)&data_ov007_021c25b8;
    o->f88 = b;
    o->f98 = c;
    o->s80 = data_ov007_021c2814;
    return o;
}
