#include "ffc/types.h"

extern void func_02053234(void *object);

typedef struct {
    uint32_t pad0;
    uint32_t f4;
    uint32_t pad8;
    uint8_t fc;
    uint8_t padd[3];
    int32_t f10;
    int32_t f14;
    uint32_t f18[3];
    void *f24;
} Obj;

void *func_0201a02c(void *p) {
    Obj *o = (Obj *)p;
    uint32_t *arr;
    uint32_t i;
    func_02053234(p);
    o->f4 = 0;
    o->fc = 0;
    o->f10 = -1;
    o->f14 = -1;
    arr = o->f18;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    o->f24 = o;
    return o;
}
