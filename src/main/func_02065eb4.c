#include "ffc/types.h"

typedef void (*MethodFn)(void *self, uint32_t a, uint32_t b);

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Self {
    uint8_t pad[0x1c];
    Obj *obj;
    uint32_t a;
    uint32_t b;
} Self;

void func_02065eb4(Self *s, uint32_t x, uint32_t y) {
    Obj *obj;
    x += s->a;
    obj = s->obj;
    ((MethodFn)obj->vt[0x48 / 4])(obj, x, y + s->b);
}
