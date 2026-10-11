#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern uint32_t func_0203b67c(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d69d0[];

void *func_ov002_021bc564(void *p, uint32_t v)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t r;

    func_02056c9c(p, 0);
    *(uint32_t *)self = (uint32_t)data_ov002_021d69d0;
    *(uint32_t *)(self + 0x80) = 0;
    *(uint32_t *)(self + 0x84) = v;
    *(uint32_t *)(self + 0x88) = 0;
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint32_t *)(self + 0x94) = 1;
    r = func_0203b67c();
    *(uint32_t *)(self + 0x90) = r;
    func_02056bc0(self + 0x48, (void *)r);
    return p;
}
