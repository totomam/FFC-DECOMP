#include "ffc/types.h"

typedef void (*func_ov007_fn)(uint8_t *);

void func_ov007_021a6d28(uint8_t *self)
{
    uint32_t *q = (uint32_t *)(self + 0x88);
    uint8_t **pp = (uint8_t **)(self + 0x84);
    uint8_t *p = *pp;
    int32_t v = (int32_t)q[1];
    uint8_t *base = p + 0x80;
    int32_t off = v >> 1;
    func_ov007_fn fn;

    if (v & 1) {
        uint8_t *obj = *(uint8_t **)(base + off);
        fn = *(func_ov007_fn *)(obj + q[0]);
    } else {
        fn = (func_ov007_fn)q[0];
    }
    fn(base + off);
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
}
