#include "ffc/types.h"

extern void func_0207d3a0(uint32_t, uint32_t, uint32_t);
extern void func_0207cd00(void *, uint32_t);
extern void func_0207cfac(void);
extern uint32_t data_02140c40;
extern uint32_t data_02140cc0;

void func_0207d3d8(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                   uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    uint32_t flag;
    if (i == 0) {
        flag = 1;
    } else {
        flag = 2;
    }
    func_0207d3a0(flag, d, e);
    ((uint32_t *)&data_02140c40)[0x7c / 4] = a;
    ((uint32_t *)&data_02140cc0)[0] = b;
    ((uint32_t *)&data_02140cc0)[1] = c;
    ((uint32_t *)&data_02140cc0)[4] = g;
    ((uint32_t *)&data_02140cc0)[5] = h;
    ((uint32_t *)&data_02140cc0)[6] = i;
    func_0207cd00((void *)func_0207cfac, f);
}
