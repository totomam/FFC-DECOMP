#include "ffc/types.h"

typedef struct { uint32_t a, b; } pair_t;
typedef void (*vfn_t)(void *self, pair_t v);

uint32_t func_02062bbc(uint8_t *p)
{
    void *o = *(void **)(p + 0x14);
    void **vt = *(void ***)o;
    return ((uint32_t (*)(void *, pair_t))vt[3])(o, *(pair_t *)(p + 0x18));
}
