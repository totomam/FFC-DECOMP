#include "ffc/types.h"

extern int *func_ov000_0214d1d8(void *table, void *a, int flag);
extern int func_ov000_0214d2ac(void *a, int *p);
extern uint8_t func_ov000_0214f338[];

int func_ov000_0214f30c(void *a, int b)
{
    int one = 1;
    int *p = func_ov000_0214d1d8(func_ov000_0214f338, a, one);
    if (p == 0) {
        return one - 34;
    }
    p[4] = b;
    return func_ov000_0214d2ac(a, p);
}
