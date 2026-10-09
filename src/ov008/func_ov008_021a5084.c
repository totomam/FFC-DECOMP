#include "ffc/types.h"

typedef void (*VFn)(void *);

void func_ov008_021a5084(uint8_t *p, void *q)
{
    if (q) {
        void *o = *(void **)(p + 0xa0);
        ((VFn)(*(void ***)o)[0x28 / 4])(o);
    } else {
        void *o = *(void **)(p + 0xa0);
        ((VFn)(*(void ***)o)[0x2c / 4])(o);
    }
}
