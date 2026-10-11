#include "ffc/types.h"

typedef struct Obj {
    void **vtbl;
} Obj;

void *func_ov002_021c866c(void *p) {
    Obj **self = (Obj **)p;
    if (*self) {
        if (*self) {
            Obj *o = *self;
            ((void (*)(Obj *))o->vtbl[1])(o);
        }
        *self = 0;
    }
    return self;
}
