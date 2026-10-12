#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void func_ov003_02149b44(void *p, uint32_t j, uint32_t a, uint32_t b, uint32_t *o1, uint32_t *o2, S2 s);
extern uint32_t func_ov003_0214aa44(void *p, S2 k, uint32_t j, uint32_t t1, uint32_t t2, uint32_t a, uint32_t b, S2 s, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t one);
extern void func_02056bc0(void *object, void *node);
extern S2 data_ov003_0217989c;

void func_ov003_0214a9c4(void *p, uint32_t a, uint32_t b, S2 s, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, ...)
{
    S2 t = {0, 0};
    uint32_t r;

    func_ov003_02149b44(p, j, a, b, &t.a, &t.b, s);
    r = func_ov003_0214aa44(p, data_ov003_0217989c, j, t.a, t.b, a, b, s, f, g, h, i, 1);
    func_02056bc0(*(void **)((uint8_t *)p + 0x1b4), (void *)r);
}
