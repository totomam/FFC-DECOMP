#include "ffc/types.h"

extern void func_02060c24(uint32_t arg);
extern void func_02060c28(uint32_t arg);
extern void func_02060ac8(void);

void func_0206aff8(uint8_t *self)
{
    func_02060c24(*(uint32_t *)(self + 0x40));
    func_02060ac8();
    func_02060c28(*(uint32_t *)(self + 0x40));
    func_02060ac8();
}
