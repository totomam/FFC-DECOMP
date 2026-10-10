#include "ffc/types.h"

extern uint32_t func_02026c84(uint32_t x);

uint32_t func_02024d70(uint32_t *p)
{
    if (p[0x5e]) {
        return func_02026c84(p[0x5e]);
    }
    return 0;
}
