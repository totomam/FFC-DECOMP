#include "ffc/types.h"

typedef uint32_t (*VFn)(void *, uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t func_02065d58(uint32_t *self, uint32_t p1, ...) {
    uint32_t *ap = (uint32_t *)&p1 + 1;
    volatile uint32_t loc[2];
    void *obj;
    loc[0] = ap[0] + self[8];
    loc[1] = ap[1] + self[9];
    obj = (void *)self[7];
    return ((VFn)(*(void ***)obj)[14])(obj, p1, loc[0], loc[1], ap[2]);
}
