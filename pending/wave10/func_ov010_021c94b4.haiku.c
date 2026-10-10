#include "ffc/types.h"

typedef void (*fn_t)(void *, uint32_t, uint32_t);

void func_ov010_021c94b4(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t *q = (uint32_t *)(self + 0x88);
    int32_t flags = (int32_t)q[1];
    uint8_t *base = *(uint8_t **)(self + 0x84);
    int32_t off = flags >> 1;
    uint32_t *r = (uint32_t *)(self + 0x90);
    fn_t fn;

    if (flags & 1) {
        uint32_t t = *(uint32_t *)(base + off);
        fn = *(fn_t *)(t + q[0]);
    } else {
        fn = (fn_t)q[0];
    }
    fn(base + off, r[0], r[1]);

    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
}
