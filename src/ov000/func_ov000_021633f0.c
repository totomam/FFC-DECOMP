#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(uint8_t *p);
extern void func_02084b2c(void *dst, int val, uint32_t size);

void func_ov000_021633f0(uint8_t *p)
{
    func_02084b2c(func_ov000_02163350(p) + 0x50, 0, 0x504);
}
