#include "ffc/types.h"

extern void func_ov010_021bd974(void *p, uint32_t idx);

void func_ov010_021bd8e0(void *p, uint32_t v) {
    uint32_t i;
    for (i = 0; i < 4; i++) {
        if (v == *(uint32_t *)((uint8_t *)p + 0xc4 + i * 4)) {
            func_ov010_021bd974(p, i);
            return;
        }
    }
    {
        void **vt = *(void ***)p;
        ((void (*)(void *, uint32_t))vt[0xf])(p, v);
    }
}
