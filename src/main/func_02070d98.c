#include "ffc/types.h"

extern void func_0207cb18(uint16_t v);
extern int func_0207d3d8(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_0207cb24(uint16_t v);

int func_02070d98(uint8_t *p, void *q, void *r, void *s)
{
    volatile uint16_t tmp;
    int ret;
    int res;
    tmp = *(uint16_t *)(p + 6);
    func_0207cb18(*(uint16_t *)(p + 6));
    ret = 0;
    res = func_0207d3d8(r, q, s, 0, 0, 0, 7, 10, 2);
    func_0207cb24(tmp);
    if (res != 0) {
        ret = 1;
    }
    return ret;
}
