#include "ffc/types.h"

extern uint8_t data_ov000_0216de9c[];
extern void func_02084b2c(void *p, int a, uint32_t n);

void func_ov000_0214ba1c(void)
{
    func_02084b2c(data_ov000_0216de9c, 0, 0x17 << 4);
}
