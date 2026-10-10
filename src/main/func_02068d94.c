#include "ffc/types.h"
typedef uint32_t (*VFn)(void *self, uint32_t a);
uint32_t func_02068d94(uint8_t *p, uint32_t arg) {
    void *o = *(void **)(p + 0x1c);
    VFn f = (VFn)((*(void ***)o)[8]);
    return f(o, arg);
}
