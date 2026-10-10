#include "ffc/types.h"

typedef struct Elem { uint32_t a; uint32_t b; } Elem;
typedef void (*VFn)(void *self, uint32_t x, uint32_t y, uint32_t z);
typedef struct Obj { VFn *vtbl; } Obj;
typedef struct Self { Obj *obj; uint8_t pad[0x1c]; Elem *arr; } Self;

void func_02071170(Self *self, uint32_t idx, uint32_t y) {
    Elem *e = &self->arr[idx];
    Obj *o = self->obj;
    o->vtbl[2](o, e->b, y, e->a);
}
