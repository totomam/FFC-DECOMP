#include "ffc/types.h"

typedef void (*func_0203f2b4_fn)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_0203f2b4(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t *q = (uint32_t *)(b + 0x88);
    uint8_t *base = *(uint8_t **)(b + 0x84);
    int32_t off = (int32_t)q[1] >> 1;
    func_0203f2b4_fn fn;

    if (q[1] & 1) {
        uint8_t *obj = *(uint8_t **)(base + off);
        fn = *(func_0203f2b4_fn *)(obj + q[0]);
    } else {
        fn = *(func_0203f2b4_fn *)q;
    }

    fn(base + off,
       *(uint32_t *)(b + 0x90),
       *(uint8_t *)(b + 0x94),
       *(uint32_t *)(b + 0x98),
       *(uint32_t *)(b + 0x9c),
       *(uint32_t *)(b + 0xa0),
       *(uint8_t *)(b + 0xa4));

    *(uint32_t *)(b + 0xc) = (*(uint32_t *)(b + 0xc) & ~0xffu) | 2;
}
