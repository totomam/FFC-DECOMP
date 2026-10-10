#include "ffc/types.h"

extern uint8_t data_020ad6f4[];
extern void func_02056858(uint32_t arg);

void *func_02021a6c(void *self)
{
    uint32_t *p = (uint32_t *)self;
    *p = (uint32_t)data_020ad6f4;
    func_02056858(p[3]);
    return self;
}
