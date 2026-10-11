#include "ffc/types.h"

typedef struct Obj {
    void **vt;
    int32_t count;
} Obj;

void func_02061344(Obj *p) {
    p->count = p->count - 1;
    if (p->count > 0) {
        return;
    }
    if (p == 0) {
        return;
    }
    ((void (*)(Obj *))p->vt[11])(p);
}
