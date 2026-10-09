#include "ffc/types.h"

typedef struct {
    uint32_t fn;
    int32_t adj;
} PMF;

typedef struct {
    uint8_t pad[0xc];
    uint32_t flags;
    uint8_t pad2[0x74];
    uint8_t *obj;
    PMF pm;
} S;

void func_ov007_021ad388(S *a0)
{
    PMF *pm = &a0->pm;
    uint8_t *obj;
    void (*fn)(void *);
    int32_t adj = pm->adj;
    int32_t off = adj >> 1;

    obj = a0->obj + off;
    if (adj & 1) {
        fn = *(void (**)(void *))(*(uint8_t **)obj + pm->fn);
    } else {
        fn = (void (*)(void *))pm->fn;
    }
    fn(obj);
    a0->flags = (a0->flags & ~0xffu) | 2;
}
