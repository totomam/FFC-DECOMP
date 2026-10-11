#include "ffc/types.h"

typedef struct { uint32_t fn; int32_t adj; } MP;
typedef void (*func_ov007_fn)(uint8_t *);

void func_ov007_021a6d28(uint8_t *self)
{
    MP *q = (MP *)(self + 0x88);
    uint8_t *base = *(uint8_t **)(self + 0x84) + 0x80;
    int32_t adj = q->adj;
    uint8_t *obj = base + (adj >> 1);
    func_ov007_fn fn;

    if (adj & 1) {
        fn = *(func_ov007_fn *)(*(uint8_t **)obj + q->fn);
    } else {
        fn = (func_ov007_fn)q->fn;
    }
    fn(obj);
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
}
