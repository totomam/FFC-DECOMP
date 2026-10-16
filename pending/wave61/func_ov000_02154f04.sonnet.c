#include "ffc/types.h"
extern int func_ov000_02154e4c(void *p);
extern uint32_t func_ov000_02154e3c(void *p);
extern void func_ov000_02154ed8(void *p, uint32_t v);
void func_ov000_02154f04(void *p)
{
    if (func_ov000_02154e4c(p) == 3) {
        uint32_t f = 4;
        f |= func_ov000_02154e3c(p);
        func_ov000_02154ed8(p, f);
    }
}
