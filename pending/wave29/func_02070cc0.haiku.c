#include "ffc/types.h"

extern void func_0207cb18(uint16_t v);
extern int func_0207d3d8(void *a, void *b, void *c, int d, int e, int f, int g, int h, int i);
extern void func_0207cb24(uint16_t v);

int func_02070cc0(void *p, void *q, void *r, void *s)
{
    uint16_t v;
    volatile uint16_t *pv;
    uint16_t val;
    int res;

    pv = (volatile uint16_t *)&v;
    val = *(uint16_t *)((uint8_t *)p + 6);
    *pv = val;
    func_0207cb18(val);
    res = func_0207d3d8(q, r, s, 0, 0, 0, 6, 1, 0);
    func_0207cb24(*pv);
    if (res != 0) {
        return 1;
    }
    return 0;
}
