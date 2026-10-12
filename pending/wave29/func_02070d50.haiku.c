#include "ffc/types.h"

extern void func_0207cb18(uint32_t v, uint16_t *out);
extern uint32_t func_0207d3d8(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_0207cb24(uint32_t v);

uint32_t func_02070d50(uint8_t *a, void *b, void *c, void *d)
{
    uint16_t tmp;
    uint16_t *p;
    uint32_t val;
    uint32_t one;
    uint32_t r;
    uint32_t ret;
    void *pb;
    void *pc;
    void *pd;

    val = *(uint16_t *)(a + 6);
    pb = b;
    p = &tmp;
    pc = c;
    pd = d;
    *p = (uint16_t)val;
    func_0207cb18(val, p);
    one = 1;
    ret = one;
    r = func_0207d3d8(pc, pb, pd, 0, 0, 0, 9, one, one);
    func_0207cb24(tmp);
    if (r == 0) {
        ret = 0;
    }
    return ret;
}
