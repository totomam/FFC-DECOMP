#include "ffc/types.h"

extern uint32_t data_ov000_0217008c[];
extern uint32_t *func_ov001_02180840(uint32_t *p);
extern uint32_t func_ov000_0215b730(uint32_t i);

uint32_t func_ov000_0215b73c(uint32_t a0)
{
    int i;
    for (i = 0; i < 0x20; i++) {
        uint32_t *p = (uint32_t *)data_ov000_0217008c[i];
        if (p != 0) {
            uint32_t *q = func_ov001_02180840(p);
            if (a0 == q[1]) {
                return func_ov000_0215b730(i);
            }
        }
    }
    return 0;
}
