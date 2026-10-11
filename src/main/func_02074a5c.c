#include "ffc/types.h"

typedef struct VTable {
    void *f0;
    void (*f4)(void *self);
} VTable;

typedef struct Obj {
    VTable *vt;
} Obj;

extern void func_02054738(void *p);

void func_02074a5c(uint8_t *p)
{
    Obj *o;

    func_02054738(p + 0x14);
    o = *(Obj **)(p + 0x28);
    if (o == 0) {
        return;
    }
    if (o != 0) {
        o->vt->f4(o);
    }
    *(void **)(p + 0x28) = 0;
}
