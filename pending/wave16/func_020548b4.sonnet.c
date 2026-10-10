#include "ffc/types.h"

extern uint8_t data_020aadd0[];
extern uint8_t data_020b0660[];
extern uint8_t data_020b0674[];
extern void func_02054680(void *p);

void *func_020548b4(void *self)
{
    uint32_t *s = (uint32_t *)self;
    s[0] = (uint32_t)data_020aadd0;
    s[3] = s[3] & ~0xffu;
    func_02054680((uint8_t *)self + 0x14);
    s[0] = (uint32_t)data_020b0660;
    s[5] = (uint32_t)data_020b0674;
    return self;
}
