#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void func_02056bc0(void *object, void *node);
extern void *func_02062a78(void *obj, S2 s, uint32_t c, uint32_t d, int32_t e, int32_t f, int32_t g);
extern uint32_t data_ov002_021d3a98[];
extern uint32_t data_ov002_021d5028[];

typedef struct { uint32_t z0; uint32_t z1; uint32_t val; uint32_t z2; } Loc;

void func_ov002_0219ce84(uint8_t *self)
{
    void *obj;
    void *r;
    Loc L;
    uint32_t idx;

    func_02056bc0(self + 0x48, *(void **)(self + 0x8c));
    obj = *(void **)(self + 0x8c);
    ((void (*)(void *))((*(void ***)obj)[10]))(obj);
    obj = *(void **)(self + 0x8c);
    ((void (*)(void *, int))((*(void ***)obj)[8]))(obj, 3);
    L.z0 = 0;
    L.z1 = 0;
    L.z2 = 0;
    idx = *(uint32_t *)(self + 0x88);
    L.val = data_ov002_021d3a98[idx];
    obj = *(void **)(self + 0x8c);
    r = func_02062a78(obj, *(S2 *)&L.val, 0, 0, 0, 0x28, -2);
    func_02056bc0(self + 0x14, r);
    *(uint32_t *)(self + 0x80) = data_ov002_021d5028[0];
    *(uint32_t *)(self + 0x84) = data_ov002_021d5028[1];
}
