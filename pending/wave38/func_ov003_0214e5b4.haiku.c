#include "ffc/types.h"

typedef void (*func_ov003_0214e5b4_fn)(uint8_t *, void *, uint8_t, uint8_t, uint8_t, uint8_t);

void func_ov003_0214e5b4(uint8_t *p)
{
    int32_t *q = (int32_t *)(p + 0x88);
    int32_t flags = q[1];
    uint8_t *base = *(uint8_t **)(p + 0x84);
    int32_t off = flags >> 1;
    func_ov003_0214e5b4_fn fn;

    if (flags & 1) {
        uint8_t *vt = *(uint8_t **)(base + off);
        fn = *(func_ov003_0214e5b4_fn *)(vt + q[0]);
    } else {
        fn = *(func_ov003_0214e5b4_fn *)(q);
    }

    fn(base + off, *(void **)(p + 0x90), *(uint8_t *)(p + 0x94), *(uint8_t *)(p + 0x95),
       *(uint8_t *)(p + 0x96), *(uint8_t *)(p + 0x97));

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
