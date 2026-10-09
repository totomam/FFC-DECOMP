#include "ffc/types.h"

typedef uint32_t (*VFn)(void *self, uint32_t arg);

uint32_t func_0200b9ac(uint8_t *p, uint32_t arg) {
    void *o = *(void **)(p + 0x18);
    VFn f = (VFn)((*(void ***)o)[4]);
    return f(o, arg);
}
