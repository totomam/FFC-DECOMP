#include "ffc/types.h"

extern uint32_t func_0209a978(void *obj, uint32_t v);

typedef void (*VFn)(void *self, uint32_t a, uint32_t b);

void func_ov007_021a49dc(uint8_t *p) {
    void *o;
    uint32_t r;

    uint64_t q = ((uint64_t (*)(void *, uint32_t))func_0209a978)(*(void **)(p + 0x110), 10);
    o = *(void **)(p + 0x108);
    ((VFn)((void **)*(void **)o)[14])(o, (uint32_t)(q >> 32) + 1, 0);

    r = func_0209a978(*(void **)(p + 0x110), 10);
    o = *(void **)(p + 0x10c);
    ((VFn)((void **)*(void **)o)[14])(o, r + 1, 0);
}
