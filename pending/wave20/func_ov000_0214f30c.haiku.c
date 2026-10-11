#include "ffc/types.h"

extern void func_ov000_0214f338(void);
extern uint32_t *func_ov000_0214d1d8(void (*fn)(void), void *a, int c);
extern int func_ov000_0214d2ac(void *a);

int func_ov000_0214f30c(void *a, uint32_t b)
{
    uint32_t *p = func_ov000_0214d1d8(func_ov000_0214f338, a, 1);
    if (p == 0) {
        return -33;
    }
    p[4] = b;
    return func_ov000_0214d2ac(a);
}
