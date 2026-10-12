#include "ffc/types.h"

typedef void (*fn_t)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t a;
    uint32_t flags;
} Pair;

void func_ov003_0216a36c(uint8_t *s)
{
    Pair *q = (Pair *)(s + 0x88);
    uint32_t flags = q->flags;
    uint8_t *base = *(uint8_t **)(s + 0x84);
    uint32_t off = (int32_t)flags >> 1;
    uint8_t *obj = base + off;
    fn_t fn;

    if (flags & 1) {
        uint8_t *vt = *(uint8_t **)(base + off);
        fn = (fn_t)*(uint32_t *)(vt + q->a);
    } else {
        fn = (fn_t)q->a;
    }

    fn(obj,
       *(uint32_t *)(s + 0x90),
       *(uint32_t *)(s + 0x94),
       *(uint32_t *)(s + 0x98),
       *(uint32_t *)(s + 0x9c),
       *(uint32_t *)(s + 0xa0),
       *(uint8_t *)(s + 0xa4));

    *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2;
}
