#include "ffc/types.h"

extern void func_ov011_021c63c8(void *a, void *b);

typedef void (*VFn)(void *, int32_t, int32_t);

void func_ov011_021c5f98(uint8_t *p, int32_t x)
{
    if (x != 0) {
        func_ov011_021c63c8(*(void **)(p + 0xa0), *(void **)(p + 0x98));
        void *o = *(void **)(p + 0x9c);
        ((VFn *)(*(void **)o))[14](o, 2, 0);
    } else {
        void *o = *(void **)(p + 0x9c);
        ((VFn *)(*(void **)o))[14](o, 1, 0);
    }
}
