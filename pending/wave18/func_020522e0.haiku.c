#include "ffc/types.h"

extern uint32_t data_020b04b8[];
extern int32_t func_020781fc(void *p);
extern void func_02088f30(void);

void *func_020522e0(uint32_t *p)
{
    p[0] = (uint32_t)data_020b04b8;
    p[1] = 0;
    if (func_020781fc(p + 2) == 0) {
        func_02088f30();
    }
    return p;
}
