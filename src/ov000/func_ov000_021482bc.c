#include "ffc/types.h"

extern int32_t func_02086fe4(void *p);
extern void func_ov000_02148218(void);
extern void func_02087024(uint32_t x);
extern uint8_t data_ov000_0216bfd8[];

void func_ov000_021482bc(void)
{
    if (func_02086fe4(data_ov000_0216bfd8)) {
        return;
    }
    do {
        func_ov000_02148218();
        func_02087024(0);
    } while (!func_02086fe4(data_ov000_0216bfd8));
}
