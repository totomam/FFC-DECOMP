#include "ffc/types.h"

extern uint8_t data_ov000_0216e078[];
extern void func_02084b2c(void *p, uint32_t a, uint32_t b);

void func_ov000_0214eab4(void)
{
    func_02084b2c(data_ov000_0216e078, 0, 8);
}
