#include "ffc/types.h"

extern void func_ov008_0219f0c0(uint32_t a, uint32_t b);

typedef void (*VFn)(void *self, int a, int b);

void func_ov008_0219f9cc(uint8_t *p, uint32_t x)
{
    func_ov008_0219f0c0(*(uint32_t *)(p + 0x94), x);
    if (x) {
        void *o = *(void **)(p + 0x98);
        ((VFn)((void **)*(void **)o)[14])(o, 3, 0);
    } else {
        void *o = *(void **)(p + 0x98);
        ((VFn)((void **)*(void **)o)[14])(o, 2, 0);
    }
}
