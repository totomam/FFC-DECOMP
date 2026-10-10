#include "ffc/types.h"

extern uint32_t data_020b2304[];
extern uint8_t data_0213e188[];

typedef struct Obj {
    uint32_t vt;
    uint8_t pad4[8];
    uint32_t c;
    uint8_t pad10[3];
    uint8_t b13;
    uint32_t w14;
    uint32_t w18;
    int32_t w1c;
} Obj;

void func_02073a78(Obj *o)
{
    o->c &= ~0xffu;
    o->vt = (uint32_t)data_020b2304;
    o->b13 = 0;
    o->w14 = 0x1c20;
    o->w1c = -1;
    o->w18 = 0;
    *(Obj **)(data_0213e188 + 0x18) = o;
}
