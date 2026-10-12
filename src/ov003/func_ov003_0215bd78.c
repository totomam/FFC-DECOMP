#include "ffc/types.h"

typedef void (*fn_t)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef struct { int32_t fn; int32_t adj; } PMF;

void func_ov003_0215bd78(uint8_t *p)
{
    PMF *q = (PMF *)(p + 0x88);
    uint8_t *base = *(uint8_t **)(p + 0x84);
    uint8_t *obj = base + (q->adj >> 1);
    fn_t fn;

    if (q->adj & 1) {
        fn = *(fn_t *)(*(uint8_t **)obj + q->fn);
    } else {
        fn = (fn_t)q->fn;
    }
    fn(obj, *(uint16_t *)(p + 0x90), *(uint16_t *)(p + 0x92), *(uint32_t *)(p + 0x94),
       *(uint32_t *)(p + 0x98), *(uint16_t *)(p + 0x9c), *(uint32_t *)(p + 0xa0));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
