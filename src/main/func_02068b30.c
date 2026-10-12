#include "ffc/types.h"

extern void func_0200ce10(void *a, void *b, void *c);

typedef struct {
    uint32_t b0 : 1;
    uint32_t rest : 31;
} Sub;

typedef struct {
    uint8_t pad[0x4c];
    Sub sub;
} Obj;

uint16_t func_02068b30(uint8_t *p)
{
    Obj *o = (Obj *)p;
    uint32_t tmp[2];
    int f;
    uint16_t r;
    uint8_t *q;

    if (o->sub.b0) {
        f = 0;
    } else {
        f = 1;
    }
    if (f) {
        q = (uint8_t *)&o->sub + 2;
    } else {
        q = *(uint8_t **)(p + 0x54);
    }
    r = *(uint16_t *)q;

    if (f) {
        q = (uint8_t *)&o->sub + 2;
    } else {
        q = *(uint8_t **)(p + 0x54);
    }
    func_0200ce10(&tmp[1], &o->sub, q);
    return r;
}
