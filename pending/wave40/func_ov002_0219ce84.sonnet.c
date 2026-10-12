#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void func_02056bc0(void *object, void *node);
extern void *func_02062a78(void *obj, S2 s, S2 t, int32_t f, int32_t g);
extern uint32_t data_ov002_021d3a98[];
extern uint32_t data_ov002_021d5028[];

void func_ov002_0219ce84(uint8_t *self)
{
    void *obj;
    void *r;
    S2 v, z;

    func_02056bc0(self + 0x48, *(void **)(self + 0x8c));
    obj = *(void **)(self + 0x8c);
    ((void (*)(void *))((*(void ***)obj)[10]))(obj);
    obj = *(void **)(self + 0x8c);
    ((void (*)(void *, int))((*(void ***)obj)[8]))(obj, 3);
    z.a = 0;
    z.b = 0;
    v.b = 0;
    v.a = data_ov002_021d3a98[*(uint32_t *)(self + 0x88)];
    r = func_02062a78(*(void **)(self + 0x8c), v, z, 0x28, -2);
    func_02056bc0(self + 0x14, r);
    *(S2 *)(self + 0x80) = *(S2 *)data_ov002_021d5028;
}
