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
    uint32_t arr[5];
    uint32_t ab[2];
    Obj *obj;

    arr[1] = 0;
    arr[2] = 3;
    arr[3] = 0x80;
    arr[4] = 0x20;

    slot = (Obj **)(self + 0x88) + idx;
    obj = (Obj *)func_0203b9cc(*(Pair *)&arr[3], func_020159f8(data_020b8e44), 1);
    *slot = (Obj *)func_0203b884(obj, p2, *(Pair *)&arr[1], 0);
    func_020686cc(*slot, 6);

    ab[0] = data_ov009_021afbe4[idx * 2] + data_ov009_021afb34[0x78 / 4];
    ab[1] = data_ov009_021afbe8[idx * 2] + data_ov009_021afb34[0x7c / 4];

    ((void (*)(Obj *, Pair))(*slot)->vt[3])(*slot, *(Pair *)ab);
    ((void (*)(Obj *, uint32_t))(*slot)->vt[8])(*slot, 3);
    ((void (*)(Obj *))(*slot)->vt[11])(*slot);

    func_02056bc0(*(void **)(self + 0x80), *slot);
}
