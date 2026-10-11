#include "ffc/types.h"
extern uint32_t func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
void func_ov013_021c0158(uint8_t *p)
{
    uint32_t r5; void *n;
    uint8_t *o = p + 0x14; uint32_t **pp = (uint32_t **)(o + 0xc4); **pp = 0xffffffff; o = o;
    r5 = func_02056aec();
    n = func_0203b708(0x1e);
    o = p + 0x14;
    func_02056bc0(o, n);
    func_02056bc0(o, (void *)r5);
}
