#include "ffc/types.h"

extern void func_02062848(void *object);
extern uint8_t data_020b1600[];

typedef struct { uint32_t a; uint32_t b; uint32_t c; } S;

typedef struct {
    void *vt;
    uint32_t pad[4];
    uint32_t f14;
    uint32_t f18;
} Obj;

void *func_02062930(Obj *o, S s)
{
    func_02062848(o);
    o->vt = data_020b1600;
    o->f14 = s.a;
    o->f18 = s.b;
    return o;
}
