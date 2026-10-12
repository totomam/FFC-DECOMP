#include "ffc/types.h"

typedef void (*pmf_fn)(void *, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint32_t, uint32_t, uint32_t);

void func_ov003_0214e4dc(uint8_t *p)
{
    uint32_t *pm = (uint32_t *)(p + 0x88);
    int32_t adj = (int32_t)pm[1];
    uint8_t *base = *(uint8_t **)(p + 0x84);
    uint8_t *this_ptr = base + (adj >> 1);
    pmf_fn fn;

    if (adj & 1) {
        void *vptr = *(void **)this_ptr;
        fn = *(pmf_fn *)((uint8_t *)vptr + pm[0]);
    } else {
        fn = (pmf_fn)pm[0];
    }

    fn(this_ptr,
       *(uint32_t *)(p + 0x90),
       *(uint8_t *)(p + 0x94),
       *(uint8_t *)(p + 0x95),
       *(uint8_t *)(p + 0x96),
       *(uint8_t *)(p + 0x97),
       *(uint32_t *)(p + 0x98),
       *(uint32_t *)(p + 0x9c),
       *(uint32_t *)(p + 0xa0));

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
