#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_021394f0[];

void func_0202f5f8(void)
{
    uint32_t *p;

    p = func_0205681c(12);
    if (p != 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
    }
    data_021394f0[1] = (uint32_t)p;

    p = func_0205681c(12);
    if (p != 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
    }
    data_021394f0[2] = (uint32_t)p;
}
