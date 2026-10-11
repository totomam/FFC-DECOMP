#include "ffc/types.h"

extern void *func_ov003_02156530_vt_dummy;

void func_ov003_02156530(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *obj = *(void **)(p + 0x2f0);
    if (obj != 0) {
        uint32_t v = *(uint32_t *)((uint8_t *)obj + 0xc);
        v = (v & ~0xffu) | 2u;
        *(uint32_t *)((uint8_t *)obj + 0xc) = v;
        void *o2 = *(void **)(p + 0x2f4);
        if (o2 != 0) {
            void (*fn)(void *) = *(void (**)(void *))(*(uint8_t **)o2 + 4);
            fn(o2);
        }
        *(void **)(p + 0x2f0) = 0;
        *(void **)(p + 0x2f4) = 0;
    }
    *(uint16_t *)(p + 0x30c) = 0;
    *(uint16_t *)(p + 0x30e) = 0;
}
