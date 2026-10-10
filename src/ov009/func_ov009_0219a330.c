#include "ffc/types.h"

typedef struct Inner { void **vt; } Inner;
typedef void (*VFn3)(Inner *self, int a, int b);
typedef void (*VFn2)(Inner *self, int a);
typedef struct Obj { uint8_t pad[0x94]; Inner *a; uint8_t b98; } Obj;

void func_ov009_0219a330(Obj *p) {
    Inner *x = p->a;
    ((VFn3)x->vt[14])(x, p->b98 + 3, 0);
    ((VFn2)p->a->vt[8])(p->a, 2);
}
