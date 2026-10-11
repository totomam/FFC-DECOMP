#include "ffc/types.h"

typedef void (*VFn)(void *);

static int flag_of(uint32_t *q) {
    return ((*q) << 1) >> 31 == 1;
}

void func_ov005_02196c58(uint8_t *p, uint32_t *q) {
    int f = flag_of(q);
    if (f) {
        uint8_t *o = *(uint8_t **)(p + 0xbc);
        void **vt = *(void ***)o;
        ((VFn)vt[0x28 / 4])(o);
    } else {
        uint8_t *o = *(uint8_t **)(p + 0xbc);
        void **vt = *(void ***)o;
        ((VFn)vt[0x2c / 4])(o);
    }
}
