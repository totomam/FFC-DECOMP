#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c725c[];

void *func_ov007_021b869c(void *self, uint32_t val)
{
    func_020694ac(self, 0, 0);
    *(uint8_t **)self = data_ov007_021c725c;
    *(uint32_t *)((uint8_t *)self + 0xc4) = val;
    return self;
}
