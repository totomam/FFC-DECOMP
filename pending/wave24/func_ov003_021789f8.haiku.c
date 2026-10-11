#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t vt; uint32_t pad[2]; uint32_t flags; uint32_t pad2; uint32_t owner; } Obj;

extern Obj *func_0205681c(uint32_t size);
extern void func_02054114(uint32_t arg);
extern uint32_t data_ov003_0217bd8c[];
extern Pair data_ov003_0217be3c;

void func_ov003_021789f8(uint8_t *p)
{
    Obj *o;
    Pair s;
    o = func_0205681c(0x18);
    if (o) {
        o->flags &= ~0xffu;
        o->vt = (uint32_t)data_ov003_0217bd8c;
        o->owner = (uint32_t)p;
    }
    *(Obj **)(p + 0xb4) = o;
    func_02054114(0);
    s = data_ov003_0217be3c;
    *(Pair *)(p + 0x80) = s;
}
