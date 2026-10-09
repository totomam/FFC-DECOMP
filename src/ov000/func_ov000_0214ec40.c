#include "ffc/types.h"

extern uint8_t data_ov000_0216e084[];
extern void func_ov000_0214ec34(void *a, uint32_t b);

void func_ov000_0214ec40(uint32_t p)
{
    func_ov000_0214ec34(data_ov000_0216e084, p);
}
