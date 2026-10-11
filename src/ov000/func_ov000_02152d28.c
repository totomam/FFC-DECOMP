#include "ffc/types.h"

extern void func_ov000_021529f4(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov000_0216e26c[];

void func_ov000_02152d28(void)
{
    func_ov000_021529f4(8, data_ov000_0216e26c[2], 12);
    func_ov000_021529f4(16, data_ov000_0216e26c[4], 0x14d8);
}
