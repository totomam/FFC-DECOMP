#include "ffc/types.h"

typedef uint32_t (*VFn)(void *self, void *arg, uint32_t x);

uint32_t func_0200b9d0(void *p, uint8_t *q, uint32_t x) {
    void *o = *(void **)(q + 0x18);
    VFn f = (VFn)((*(void ***)o)[3]);
    return f(p, o, x);
}
