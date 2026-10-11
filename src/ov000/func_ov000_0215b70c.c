#include "ffc/types.h"

extern void func_020849e0(int32_t a, void *p, uint32_t size);
extern uint8_t data_ov000_0217008c[];
extern uint8_t data_ov000_0217010c[];

void func_ov000_0215b70c(void)
{
    uint32_t n = 0x80;
    func_020849e0(0, data_ov000_0217008c, n);
    n += 0x80;
    func_020849e0(0, data_ov000_0217010c, n);
}
