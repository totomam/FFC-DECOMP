#include "ffc/types.h"

extern uint32_t func_020655b8(void *obj);
extern uint32_t func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219ab74(uint8_t *p)
{
    uint32_t r4 = func_020655b8(*(void **)(p + 0x94));
    uint32_t r6 = func_020655dc(*(void **)(p + 0x94), 3, 0);
    uint32_t r7 = func_020655b8(*(void **)(p + 0x94));
    uint32_t r0 = func_020655dc(*(void **)(p + 0x94), 4, 0);
    uint8_t *q = p + 0x14;
    func_02056bc0(q, (void *)r0);
    func_02056bc0(q, (void *)r7);
    func_02056bc0(q, (void *)r6);
    func_02056bc0(q, (void *)r4);
}
