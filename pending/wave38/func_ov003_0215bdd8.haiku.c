#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef void (*fn_t)(void *, uint32_t, Pair, uint32_t, uint32_t, uint32_t);

void func_ov003_0215bdd8(uint8_t *p)
{
    uint32_t *f = (uint32_t *)(p + 0x88);
    int32_t flags = (int32_t)f[1];
    uint8_t *base = *(uint8_t **)(p + 0x84);
    int32_t off = flags >> 1;
    fn_t fn;
    uint32_t s0, s1, s2;
    Pair pr;
    uint8_t *obj;

    if (flags & 1) {
        fn = *(fn_t *)(*(uint8_t **)(base + off) + f[0]);
    } else {
        fn = (fn_t)f[0];
    }

    s0 = *(uint32_t *)(p + 0x9c);
    obj = base + off;
    s1 = *(uint32_t *)(p + 0xa0);
    s2 = *(uint32_t *)(p + 0xa4);
    pr = *(Pair *)(p + 0x94);
    fn(obj, *(uint32_t *)(p + 0x90), pr, s0, s1, s2);

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
