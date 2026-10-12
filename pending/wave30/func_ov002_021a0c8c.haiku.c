#include "ffc/types.h"

extern uint32_t func_ov002_021c91dc(uint32_t a, uint32_t b);
extern void func_02055914(uint32_t a, uint32_t b);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c9510(uint32_t a);
extern uint32_t data_020ab7f8[];

void func_ov002_021a0c8c(uint32_t *p, uint32_t b)
{
    uint32_t *q;
    uint32_t r;

    r = func_ov002_021c91dc(0, b);
    func_02055914(p[5], r);

    q = func_0205681c(0x10);
    if (q != 0) {
        q[2] = 0;
        q[3] = 0x100fc;
        q[0] = (uint32_t)data_020ab7f8;
    }

    func_02055914(p[5], (uint32_t)q);

    if (p[6] != 0) {
        r = func_ov002_021c9510(p[7]);
        func_02055914(p[6], r);
    }

    p[3] = (p[3] & ~0xffu) | 2;
}
