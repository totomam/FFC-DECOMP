#include "ffc/types.h"

extern uint32_t data_ov001_02194c38[];
extern uint32_t *func_ov000_0216876c(uint32_t *p);

uint32_t func_ov001_0217f9bc(uint32_t *p, uint32_t r1)
{
    if (p == 0) {
        p = (uint32_t *)data_ov001_02194c38[3];
    }
    if (p == 0) {
        return r1;
    }
    return *func_ov000_0216876c((uint32_t *)p[8]);
}
