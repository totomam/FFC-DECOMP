#include "ffc/types.h"

extern void func_02069600(void *p);

typedef struct Obj {
    void **vtbl;
} Obj;

typedef struct Self {
    uint8_t pad[0xc0];
    Obj *slots[5];
} Self;

void func_ov007_021acbc8(void *p)
{
    int i;
    Obj *zero = 0;
    Self *s = (Self *)p;
    for (i = 0; i < 5; i++) {
        if (s->slots[i] != 0) {
            func_02069600(p);
            if (s->slots[i] != 0) {
                Obj *o = s->slots[i];
                if (o != 0) {
                    ((void (*)(Obj *))o->vtbl[1])(o);
                }
                s->slots[i] = zero;
            }
        }
    }
}
