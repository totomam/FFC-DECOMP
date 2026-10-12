#include "ffc/types.h"

extern uint32_t *func_ov003_02153470(void *a);

void func_ov003_0215e13c(uint8_t *p) {
    uint32_t r6;
    uint8_t *it;

    if (p[0xd0] != 0) {
        return;
    }
    r6 = *func_ov003_02153470(*(void **)(*(uint8_t **)(p + 0xa8) + 0x9c));
    it = *(uint8_t **)(p + 0xc4);
    if (it == *(uint8_t **)(p + 0xc4) + (*(uint32_t *)(p + 0xc8)) * 4) {
        return;
    }
    for (it = *(uint8_t **)(p + 0xc4);
         it != *(uint8_t **)(p + 0xc4) + (*(uint32_t *)(p + 0xc8)) * 4;
         it += 4) {
        void *obj = *(void **)it;
        void **vt = *(void ***)obj;
        ((void (*)(void *, uint32_t))vt[0])(obj, r6);
    }
}
