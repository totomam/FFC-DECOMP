#include "ffc/types.h"

void func_ov003_0216a3cc(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t *s = (uint32_t *)(p + 0x88);
    uint8_t *B = *(uint8_t **)(p + 0x84);
    uint32_t off = s[1] >> 1;
    void *fn;

    if (s[1] & 1) {
        void *obj = *(void **)(B + off);
        fn = *(void **)((uint8_t *)obj + s[0]);
    } else {
        fn = (void *)s[0];
    }

    ((void (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))fn)(
        B + off,
        *(uint32_t *)(p + 0x90),
        *(uint32_t *)(p + 0x94),
        *(uint32_t *)(p + 0x98),
        *(uint32_t *)(p + 0x9c),
        *(uint32_t *)(p + 0xa0));

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
