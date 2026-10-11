#include "ffc/types.h"

extern void func_02099378(void *p);

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vt;
    int32_t count;
} Obj;

void func_0209935c(Obj *p) {
    p->count--;
    if (p->count == 0) {
        (p->vt[3])(p);
        func_02099378(p);
    }
}
