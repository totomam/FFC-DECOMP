#include "ffc/types.h"

typedef struct Vt { void *f0; void (*f1)(void *); } Vt;
typedef struct Inner { const Vt *vt; } Inner;

void func_020686d0(void *self, void *val) {
    Inner *o = *(Inner **)((uint8_t *)self + 0x58);
    if (o) {
        o->vt->f1(o);
    }
    *(void **)((uint8_t *)self + 0x58) = val;
}
