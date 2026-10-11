#include "ffc/types.h"

extern void *func_ov000_0214d1d8(void *table, void *a, int flag, int d);
extern int func_ov000_0214d2ac(void *a);
extern uint8_t func_ov000_0214f338[];

int func_ov000_0214f30c(void *a, void *b, int c, int d)
{
    void *p = func_ov000_0214d1d8(func_ov000_0214f338, a, 1, d);
    if (p == 0) {
        return -33;
    }
    *(void **)((uint8_t *)p + 0x10) = b;
    return func_ov000_0214d2ac(a);
}
