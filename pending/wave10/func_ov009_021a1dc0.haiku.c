#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov009_021b06a0;

typedef struct Obj { void **vtbl; } Obj;

void func_ov009_021a1dc0(void *param) {
    uint8_t *p = (uint8_t *)param;
    uint8_t i;
    Obj *o;

    *(uint32_t *)(p + 500) = 0;
    o = *(Obj **)(p + 440);
    ((void (*)(Obj *, void *))o->vtbl[4])(o, p + 232);
    for (i = 0; i < 5; i++) {
        uint32_t *rec = *(uint32_t **)(p + 472 + i * 4);
        rec[3] &= ~0xffu;
    }
    *(Pair *)(p + 0x80) = data_ov009_021b06a0;
}
