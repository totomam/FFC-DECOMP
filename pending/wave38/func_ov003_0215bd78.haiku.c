#include "ffc/types.h"

typedef void (*fn_t)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov003_0215bd78(uint8_t *p)
{
    int32_t *q = (int32_t *)(p + 0x88);
    int32_t idx = q[1];
    uint8_t **pb = (uint8_t **)(p + 0x84);
    uint8_t *base = *pb;
    int32_t off = idx >> 1;
    fn_t fn;

    if (idx & 1) {
        fn = *(fn_t *)(*(uint8_t **)(base + off) + q[0]);
    } else {
        fn = (fn_t)q[0];
    }

    {
        uint32_t s0 = *(uint32_t *)(p + 0x98);
        uint32_t s1 = *(uint16_t *)(p + 0x9c);
        uint32_t s2 = *(uint32_t *)(p + 0xa0);
        fn(base + off,
           *(uint16_t *)(p + 0x90),
           *(uint16_t *)(p + 0x92),
           *(uint32_t *)(p + 0x94),
           s0, s1, s2);
    }

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
