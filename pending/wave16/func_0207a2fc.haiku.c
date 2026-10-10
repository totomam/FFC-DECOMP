#include "ffc/types.h"

extern void func_02079814(uint32_t);
extern void func_02077b34(uint8_t *, uint8_t *);
extern uint8_t data_0213eb28[];

void func_0207a2fc(uint8_t *self)
{
    func_02079814(*(uint32_t *)(self + 0x48));
    func_02077b34(data_0213eb28, self);
    *(uint32_t *)(self + 0x2c) &= ~1u;
}
