#include "ffc/types.h"

extern uint8_t data_ov000_0216e24c[];
extern void func_02084e04(void *p0, void *p1, uint32_t p2);

void func_ov000_021503c0(void *p0)
{
    func_02084e04(p0, data_ov000_0216e24c, 6);
}
