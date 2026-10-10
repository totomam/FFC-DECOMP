#include "ffc/types.h"

extern void func_02060c24(uint32_t arg);
extern void func_02060c28(uint32_t arg);
extern void func_02060abc(void);

void func_0206afdc(uint8_t *self)
{
    func_02060c24(*(uint32_t *)(self + 0x40));
    func_02060abc();
    func_02060c28(*(uint32_t *)(self + 0x40));
    func_02060abc();
}
