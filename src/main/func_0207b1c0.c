#include "ffc/types.h"

extern uint32_t func_0207ab40(uint32_t a);
extern uint32_t func_0207a7dc(void);
extern uint32_t func_0207b090(uint32_t a, void *f, uint32_t b, uint32_t c, uint32_t d);
extern void func_0207ab60(uint32_t a, uint32_t b);
extern void func_0207b340(void);

uint32_t func_0207b1c0(uint32_t a0, uint32_t a1, uint32_t a2)
{
    uint32_t r4;
    uint32_t r2;

    r4 = func_0207ab40(a0);
    if (r4 == 0) {
        if (a2 != 0) {
            r2 = func_0207a7dc();
        } else {
            r2 = 0;
        }
        r4 = func_0207b090(a0, (void *)func_0207b340, r2, a0, a1);
        if (a2 != 0 && r4 != 0) {
            func_0207ab60(a0, r4);
        }
    }
    return r4;
}
