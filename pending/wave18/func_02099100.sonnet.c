#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    int (**vtbl)(Obj *);
    uint32_t pad;
    uint8_t *ptr;
};

int func_02099100(Obj *p) {
    int (*fn)(Obj *) = p->vtbl[8];
    Obj *s = p;
    int v = fn(p);
    int ret = -1;
    if (v != -1) {
        uint8_t *q = s->ptr;
        s->ptr = q + 1;
        ret = *q;
    }
    return ret;
}
