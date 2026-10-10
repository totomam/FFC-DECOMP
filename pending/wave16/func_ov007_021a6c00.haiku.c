#include "ffc/types.h"

typedef struct Obj {
    void **vtbl;
} Obj;

void func_ov007_021a6c00(uint8_t *p) {
    if (*(uint32_t *)(p + 0xb8) != 0) {
        Obj *o = *(Obj **)(p + 0xb0);
        ((void (*)(Obj *, int, int))o->vtbl[14])(o, 3, 1);
    }
}
