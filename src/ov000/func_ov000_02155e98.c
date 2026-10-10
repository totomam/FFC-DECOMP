#include "ffc/types.h"

extern uint32_t data_ov000_0216e2b4[];
extern uint32_t data_ov000_0216e318[];
extern void func_02084b2c(void *p, uint32_t a, uint32_t n);

void func_ov000_02155e98(void)
{
    data_ov000_0216e2b4[0] = 0;
    data_ov000_0216e2b4[2] = 0;
    data_ov000_0216e2b4[1] = 0;
    func_02084b2c(data_ov000_0216e318, 0, 0x1c50);
}
