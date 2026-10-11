#include "ffc/types.h"

extern uint32_t func_0206cb98(void *p);

void func_ov007_021a2460(uint8_t *p)
{
    if (func_0206cb98(*(void **)(p + 0x88))) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
    }

    if (*(uint32_t *)(p + 0x80)) {
        uint32_t *q = (uint32_t *)(p + 0x80);
        int32_t off = (int32_t)q[1];
        int32_t idx = off >> 1;
        void (*fn)(void *);
        if (off & 1) {
            fn = *(void (**)(void *))((uint8_t *)*(uint32_t *)(p + idx) + q[0]);
        } else {
            fn = *(void (**)(void *))q;
        }
        fn(p + idx);
    }
}
