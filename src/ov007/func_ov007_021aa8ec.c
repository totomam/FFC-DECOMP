#include "ffc/types.h"

extern uint32_t func_020655dc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021aa8ec(void *a)
{
    void *obj;
    void **vt;
    uint32_t r4;
    uint32_t r1;
    uint8_t *p;

    obj = *(void **)((uint8_t *)a + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 3, 1);

    r4 = func_020655dc(*(void **)((uint8_t *)a + 0x98), 2, 0);
    r1 = func_020655b8(*(void **)((uint8_t *)a + 0x98));
    p = (uint8_t *)a + 0x14;
    func_02056bc0(p, (void *)r1);
    func_02056bc0(p, (void *)r4);
}
