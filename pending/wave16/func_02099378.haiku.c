#include "ffc/types.h"

typedef struct Obj Obj;
typedef void (*VFn)(Obj *);

struct Obj {
    VFn *vt;
    int32_t a;
    int32_t count;
};

void func_02099378(Obj *p) {
    if (--p->count == 0) {
        if (p) {
            p->vt[1](p);
        }
    }
}
