#include "ffc/types.h"
extern uint32_t func_02026c84(uint32_t x);
uint32_t func_02024d70(uint8_t *p)
{
    uint32_t r;
    int n = 0x178;
    r = *(uint32_t *)(p + n);
    if (r == 0) return 0;
    r = func_02026c84(r);
    return r;
}
