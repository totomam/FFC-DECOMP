#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c7670[];

void *func_ov007_021b9fec(void *self, uint32_t a, uint32_t *b, uint32_t c, uint32_t e)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, 0, 0);
    *(uint8_t **)p = data_ov007_021c7670;
    *(uint32_t *)(p + 0x12c) = a;
    *(uint32_t *)(p + 0x130) = (uint32_t)b;
    *(uint32_t *)(p + 0x134) = c;
    *(uint32_t *)(p + 0x140) = e;
    *(uint8_t *)(p + 0x144) = (uint8_t)*b;
    return self;
}
