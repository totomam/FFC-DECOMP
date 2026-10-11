#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void *func_02084b2c(void *dst, int c, uint32_t n);

void func_ov000_021639e0(void)
{
    uint8_t *p = func_ov000_02163350();
    *(uint32_t *)(p + 0x5a8) = 0;
    p = func_ov000_02163350();
    func_02084b2c(p + 0x5ac, 0, 0x28);
}
