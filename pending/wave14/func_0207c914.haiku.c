#include "ffc/types.h"

extern uint32_t func_0207c92c(void);

void func_0207c914(uint32_t *p, uint32_t a, uint32_t c)
{
    p[0] = func_0207c92c();
    p[1] = a;
    p[3] = c;
    p[2] = 0;
}
