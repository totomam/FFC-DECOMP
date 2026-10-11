#include "ffc/types.h"

typedef void (*VFn)(void *self, uint32_t a);
typedef struct Obj {
    VFn *vt;
} Obj;

void func_ov005_02195d14(uint8_t *self, uint32_t arg)
{
    Obj *a = *(Obj **)(self + 0x24);
    a->vt[8](a, arg);
    if (*(uint32_t *)(self + 0x44) != 2) {
        Obj *b = *(Obj **)(self + 0x28);
        b->vt[8](b, arg);
    }
}
