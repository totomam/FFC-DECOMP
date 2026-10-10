#include "ffc/types.h"

typedef struct Obj {
    void **vt;
    uint32_t pad;
    uint8_t *ptr;
} Obj;

uint32_t func_02098fac(Obj *p)
{
    uint32_t v = ((uint32_t (*)(Obj *))((void **)p->vt)[8])(p);
    uint32_t w;
    if (v == 0xffff) {
        w = 0xffff;
    } else {
        uint8_t *q = p->ptr;
        p->ptr = q + 2;
        w = *(uint16_t *)q;
    }
    return w;
}
