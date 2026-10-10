#include "ffc/types.h"

extern uint8_t data_ov000_0217000c[];
extern void func_02084ca4(void *p0, void *p1, uint32_t p2);

void func_ov000_02158780(void *p0)
{
    func_02084ca4(p0, data_ov000_0217000c, 14);
}
