#include "ffc/types.h"

typedef struct Fn { uint8_t pad[0x20]; uint32_t (*fn)(void *, uint32_t); } Fn;
typedef struct Obj { uint8_t pad[0x20]; Fn *f; } Obj;
typedef struct P {
    uint8_t p0[8];
    Obj *obj;
    uint8_t p1[0x20];
    uint32_t x2c;
    uint32_t x30;
    uint8_t p2[4];
    uint32_t x38;
} P;

uint32_t func_0207f488(P *p) {
    Obj *obj = p->obj;
    p->x2c += p->x38;
    return obj->f->fn(obj, p->x30);
}
