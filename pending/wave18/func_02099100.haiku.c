#include "ffc/types.h"

typedef int (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
    uint32_t pad;
    uint8_t *ptr;
} Obj;

int func_02099100(Obj *p) {
    int ret;
    int v = ((VFn *)p->vtbl)[8](p);
    if (v == -1) {
        ret = -1;
    } else {
        uint8_t *q = p->ptr;
        p->ptr = q + 1;
        ret = *q;
    }
    return ret;
}
