#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} pair_t;

typedef void (*vfn_t)(void *, pair_t);

void func_ov005_02197530(uint8_t *p, uint32_t i)
{
    if (i < 3) {
        pair_t s;
        s.a = *(uint32_t *)(p + i * 8 + 0x94);
        s.b = *(uint32_t *)(p + i * 8 + 0x98) - 2;
        void *obj = *(void **)(p + i * 4 + 0x84);
        ((vfn_t)((void **)(*(void **)obj))[3])(obj, s);
    }
}
