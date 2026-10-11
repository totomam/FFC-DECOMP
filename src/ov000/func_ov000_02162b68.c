#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern uint32_t func_ov000_02159358(uint32_t x);

uint32_t func_ov000_02162b68(void)
{
    uint8_t *p = (uint8_t *)func_ov000_02163350();
    uint32_t r = func_ov000_02159358(10000000);
    return *(uint32_t *)(p + 0x678) + r + 100000000;
}
