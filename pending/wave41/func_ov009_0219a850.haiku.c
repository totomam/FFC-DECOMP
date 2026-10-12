#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uintptr_t func_020159f8(uintptr_t x);
extern void *func_0203b9cc(Pair p, uintptr_t c, uint32_t d);
extern void *func_0203b884(void *o, uint32_t p2, Pair p, uint32_t e);
extern void func_020686cc(void *o, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uintptr_t data_020b8e44;
extern uint32_t data_ov009_021afbe4[];
extern uint32_t data_ov009_021afb34[];
extern uint32_t data_ov009_021afbe8[];

typedef struct Obj {
    void **vt;
} Obj;

void func_ov009_0219a850(uint8_t *self, uint32_t idx, uint32_t p2)
{
    Obj **slot;
    uint32_t arr[4];
    uint32_t ab[2];
    Obj *obj;

    arr[0] = 0;
    arr[1] = 3;
    arr[2] = 0x80;
    arr[3] = 0x20;

    slot = (Obj **)(self + 0x88) + idx;
    obj = (Obj *)func_0203b9cc(*(Pair *)&arr[2], func_020159f8(data_020b8e44), 1);
    obj = (Obj *)func_0203b884(obj, p2, *(Pair *)&arr[0], 0);
    *slot = obj;
    func_020686cc(obj, 6);

    ab[0] = data_ov009_021afbe4[idx * 2] + data_ov009_021afb34[0x78 / 4];
    ab[1] = data_ov009_021afbe8[idx * 2] + data_ov009_021afb34[0x7c / 4];

    obj = *slot;
    ((void (*)(Obj *, Pair))obj->vt[3])(obj, *(Pair *)ab);
    ((void (*)(Obj *, uint32_t))obj->vt[8])(obj, 3);
    ((void (*)(Obj *))obj->vt[11])(obj);

    self += 0x80;
    func_02056bc0(*(void **)self, *slot);
}
