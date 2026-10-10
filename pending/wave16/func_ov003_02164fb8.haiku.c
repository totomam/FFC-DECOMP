#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern void func_ov003_0214dd48(uint32_t);

void func_ov003_02164fb8(uint8_t *p)
{
    uint32_t *f = (uint32_t *)(p + 0x0c);
    func_ov003_0214dd48(func_020424e0(*(uint32_t *)(p + 0x80)));
    *f = (*f & ~0xffu) | 2u;
}
