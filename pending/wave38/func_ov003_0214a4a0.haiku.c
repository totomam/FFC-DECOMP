#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern const Pair data_ov003_0217987c;
extern void func_ov003_02149b44(void *p, uint32_t s8, uint32_t x, uint32_t y, uint32_t *o1, uint32_t *o2, Pair z);
extern uint32_t func_ov003_0214a518(void *p, Pair d, uint32_t s8, uint32_t a, uint32_t b, uint32_t x, uint32_t y, Pair z, uint32_t s6, uint32_t s7, uint32_t flag);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0214a4a0(void *p, uint32_t x, uint32_t y, ...)
{
    uint32_t *va;
    uint32_t l[2];
    uint32_t r;

    va = (uint32_t *)&y + 1;
    l[0] = 0;
    l[1] = 0;
    func_ov003_02149b44(p, va[4], x, y, &l[0], &l[1], *(Pair *)&va[0]);
    r = func_ov003_0214a518(p, data_ov003_0217987c, va[4], l[0], l[1], x, y, *(Pair *)&va[0], va[2], va[3], 1);
    func_02056bc0(*(void **)((uint8_t *)p + 0x1b4), (void *)r);
}
