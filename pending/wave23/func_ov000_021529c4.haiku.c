#include "ffc/types.h"

extern void *func_ov000_02152ae4(int);

typedef struct Obj {
    int (*vf)(int, int);
    uint8_t pad[4];
    uint8_t flags;
} Obj;

int func_ov000_021529c4(uint32_t a, int b) {
    Obj *o = (Obj *)func_ov000_02152ae4(1);
    uint8_t f = o->flags;
    if (!(f & a)) {
        o->flags = f | (uint8_t)a;
        return o->vf(1, b);
    }
    return 0;
}
