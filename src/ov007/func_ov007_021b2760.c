#include "ffc/types.h"

extern void func_ov007_021b2788(void *self, uint32_t b);
extern uint32_t func_02056830(uint32_t x);
extern void *func_020903cc(void *object, uint32_t zero, uint32_t n);

void func_ov007_021b2760(void *self, uint32_t b)
{
    uint32_t v;
    func_ov007_021b2788(self, b);
    v = func_02056830(b + 1);
    *(uint32_t *)((uint8_t *)self + 0x2d0c) = v;
    *(uint32_t *)((uint8_t *)self + 0x2d10) = b;
    func_020903cc((void *)v, 0, b + 1);
}
