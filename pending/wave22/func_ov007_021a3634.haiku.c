#include "ffc/types.h"

extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0206cd68(uint32_t v);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a3634(void *a)
{
    uint32_t n;
    uint32_t r;
    uint8_t *p;

    n = func_02056aec(a);
    r = func_0206cd68(*(uint32_t *)((uint8_t *)a + 0xf0));
    p = (uint8_t *)a + 0x14;
    func_02056bc0(p, (void *)r);
    func_02056bc0(p, (void *)n);
}
