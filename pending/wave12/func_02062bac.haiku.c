#include "ffc/types.h"

typedef uint32_t (*VFn)(void *self, void *arg);

typedef struct VTable {
    uint32_t pad[8];
    VFn fn;
} VTable;

typedef struct Obj {
    uint32_t pad[5];
    VTable **inner;
    void *arg;
} Obj;

uint32_t func_02062bac(Obj *p)
{
    VTable *vt = *p->inner;
    return vt->fn(p->inner, p->arg);
}
