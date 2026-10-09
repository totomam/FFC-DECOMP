#include "ffc/types.h"

extern uint8_t data_ov000_0216e080[];
extern void func_ov000_0214ec60(void *a, uint32_t b);

void func_ov000_0214ec50(uint32_t p)
{
    func_ov000_0214ec60(data_ov000_0216e080, p);
}
