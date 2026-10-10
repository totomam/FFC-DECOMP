#include "ffc/types.h"

extern uint8_t data_020b0698[];
extern void func_020553e8(uint32_t arg);

void *func_02055ca8(void *self)
{
    uint32_t *p = (uint32_t *)self;
    *p = (uint32_t)data_020b0698;
    func_020553e8(p[6]);
    return self;
}
