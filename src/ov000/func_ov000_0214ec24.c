#include "ffc/types.h"

extern uint8_t data_ov000_0216e080[];
extern void func_ov000_0214ec34(void *a, uint32_t b);

void func_ov000_0214ec24(uint32_t p)
{
    func_ov000_0214ec34(data_ov000_0216e080, p);
}
