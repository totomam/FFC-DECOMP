#include "ffc/types.h"

extern void func_02021338(uint32_t x);

typedef void (*VFn)(void *);
typedef struct Obj {
    VFn *vt;
} Obj;

void func_ov002_021c5634(uint8_t *p)
{
    Obj *a;
    Obj *b;

    func_02021338(0xd0);
    a = *(Obj **)(p + 0xbc);
    a->vt[10](a);
    b = *(Obj **)(p + 0xb8);
    b->vt[10](b);
}
