#include "ffc/types.h"
extern void func_02056c9c(void *p, int32_t x);
extern uint32_t data_ov007_021c4a40[];
typedef struct { uint32_t a, b; } S;
extern S data_ov007_021c4d38;
extern S data_ov007_021c4d40;
typedef struct { void *vtbl; uint8_t pad[0x7c]; S s; int32_t f88; } Obj;
Obj *func_ov007_021aa770(Obj *o, int32_t v)
{
    func_02056c9c(o, 0);
    o->vtbl = data_ov007_021c4a40;
    o->f88 = v;
    if (v >= 0) {
        o->s = data_ov007_021c4d38;
    } else {
        o->s = data_ov007_021c4d40;
    }
    return o;
}
