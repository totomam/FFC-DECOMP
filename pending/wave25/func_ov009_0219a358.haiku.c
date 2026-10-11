#include "ffc/types.h"

extern void func_02021338(uint32_t code);

typedef void (*Fn2)(void *self, uint32_t a);
typedef void (*Fn3)(void *self, uint32_t a, uint32_t b);

typedef struct {
    char pad0[0x20];
    Fn2 f8;
    char pad1[0x38 - 0x24];
    Fn3 f14;
} VTable;

typedef struct {
    VTable *vt;
} Obj;

void func_ov009_0219a358(uint8_t *self)
{
    Obj *o = *(Obj **)(self + 0x94);
    o->vt->f14(o, (uint32_t)self[0x98] + 5, 0);
    o = *(Obj **)(self + 0x94);
    o->vt->f8(o, 1);
    if (self[0x99] == 0) {
        func_02021338(0xc1);
    }
}
