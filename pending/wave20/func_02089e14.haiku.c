#include "ffc/types.h"

extern uint32_t *func_02089fa8(uint32_t flags);
extern void func_0208a008(uint32_t *obj);

void func_02089e14(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t *p = func_02089fa8(1);
    if (p != 0) {
        p[1] = a;
        p[2] = b;
        p[3] = c;
        p[4] = d;
        p[5] = e;
        func_0208a008(p);
    }
}
